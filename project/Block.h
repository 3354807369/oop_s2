
#ifndef BLOCK_H
#define BLOCK_H
#include <time.h>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "move.h"
using namespace sf;

class Block {
 public:
  int blocks[7][4] = {
      1, 3, 5, 7,  // I
      2, 4, 5, 7,  // Z
      3, 5, 4, 6,  // S
      3, 5, 4, 7,  // T
      2, 3, 5, 7,  // L
      3, 5, 7, 6,  // J
      2, 3, 4, 5,  // O
  };

  // Falling speed of block
  const float speed_normal = 0.5;
  const float speed_quick = 0.05;
  float delay = speed_normal;
  // size of table
  const int max_row = 20;
  const int max_col = 10;
  int table[20][10] = {0};
  int blockIndex;
  // Define the coordinates
  struct Point {
    int x;
    int y;

  } curBlock[4], backblock[4];
  // Check the legality of building blocks检查方块合法性
  bool check() {
    for (int i = 0; i < 4; i++)
      if (curBlock[i].x < 0 || curBlock[i].x >= max_col ||
          curBlock[i].y >= max_row)
        return 0;
      else if (table[curBlock[i].y][curBlock[i].x])
        return 0;

    return 1;
  }
  // Making new blocks
  void newBlock() {
    blockIndex = 1 + rand() % 7;
    for (int i = 0; i < 4; i++) {
      int n = blockIndex - 1;
      curBlock[i].x = blocks[n][i] % 2;
      curBlock[i].y = blocks[n][i] / 2;
    }
  }
  void drawBlocks(Sprite *sblock, RenderWindow *window) {
    // 1.At the bottom of the blocks底部方块
    for (int i = 0; i < max_row; i++) {
      for (int j = 0; j < max_col; j++) {
        if (table[i][j] != 0) {
          // Make little blocks画小方块

          sblock->setTextureRect(IntRect(table[i][j] * 18, 0, 18, 18));  //颜色color
          sblock->setPosition(j * 18, i * 18);
          // deviation value偏移值
          sblock->move(28, 31);
          window->draw(*sblock);
        }
      }
    }
    // 2.The falling block正在降落的方块
    for (int i = 0; i < 4; i++) {
      sblock->setTextureRect(IntRect(blockIndex * 18, 0, 18, 18));
      sblock->setPosition(curBlock[i].x * 18, curBlock[i].y * 18);
      sblock->move(28, 31);
      window->draw(*sblock);
    }
  }
  // Make the block fall
  void drop() {
    for (int i = 0; i < 4; i++) {
      backblock[i] = curBlock[i];
      curBlock[i].y += 1;
    }
 // Fixed square固化处理
    if (check() == false) {
      for (int i = 0; i < 4; i++) {
        table[backblock[i].y][backblock[i].x] = blockIndex;
      }
      newBlock();
    }
  }
//rotate
  void doRotate() {
    if (blockIndex == 7) {
      return;
    }
    // backups备份
    for (int i = 0; i < 4; i++) {
      backblock[i] = curBlock[i];
    }

    Point p = curBlock[1];
    for (int i = 0; i < 4; i++) {
      Point tmp = curBlock[i];
      curBlock[i].x = p.x - tmp.y + p.y;
      curBlock[i].y = tmp.x - p.x + p.y;
    }
    if (!check()) {
      for (int i = 0; i < 4; i++) {
        curBlock[i] = backblock[i];
      }
    }
  }
  void moveLR(int offset) {
    for (int i = 0; i < 4; i++) {
      backblock[i] = curBlock[i];
      curBlock[i].x += offset;
    }
    if (!check()) {
      for (int i = 0; i < 4; i++) {
        curBlock[i] = backblock[i];
      }
    }
  }

  void keyEvent(RenderWindow *window) {
    bool rotate = false;
    int dx = 0;
    Event e;  // event variable事件变量
    // pollevent从事件队列中取出一个事件(Retrieves an event from the event
    // queue)
    while (window->pollEvent(e)) {
      if (e.type == Event::Closed) {
        window->close();
      }
      // keyboard operation键盘操纵
      if (e.type == Event::KeyPressed) {
        switch (e.key.code) {
          case Keyboard::Up:
            doRotate();
            break;
          case Keyboard::Left:
            dx = -1;
            break;
          case Keyboard::Right:
            dx = 1;
            break;
        }
      }
      if (dx != 0) {
        moveLR(dx);
      }
    }
  }
};
#endif