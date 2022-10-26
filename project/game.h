#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include <time.h>
#include"move.h"
#include "Block.h"
#include "clear.h"

using namespace sf;
class game:public Block{
    public:
    
move m;
clear c;
Block &b=c;


    
 //Check the legality of building blocks
bool check(){
  for (int i=0;i<4;i++)
      if (curBlock[i].x<0 || curBlock[i].x>=max_col || curBlock[i].y>=max_row) return 0;
      else if (table[curBlock[i].y][curBlock[i].x]) return 0;

   return 1;
}


void games(){
   //Create a window
RenderWindow window(
        VideoMode(320,480),
        "els");
        
        Texture t1;
        t1.loadFromFile("image/yili.jpg");
    Sprite back(t1);
    Texture t2;
        t2.loadFromFile("image/tiles.png");
        Sprite sblock(t2);
        Texture t3;
        t3.loadFromFile("image/frame.png");
        Sprite frame(t3);
    
    //生成方块Generate block
    b.newBlock();
    //计时器clock
    Clock clock;
    float timer=0;
    //事件变量event variable
    Event e;
   
    while(window.isOpen()){
      //上一次clock重启或启动之后到现在的时间(The time since the last time the clock was restarted or started)
    float time=clock.getElapsedTime().asSeconds();
     timer+=time;
     clock.restart();
     b.keyEvent(&window);
      bool rotate=false;
    int dx = 0;
   
    //pollevent从事件队列中取出一个事件(Retrieves an event from the event queue)
    while(window.pollEvent(e)){
        if(e.type==Event::Closed){
            
            window.close();
            
        }
        if(e.type==Event::KeyPressed){
            switch(e.key.code){
            case Keyboard::Up:
            rotate=true;
            break;
            case Keyboard::Left:
            dx=-1;
            break;
            case Keyboard::Right:
            dx=1;
            break;
            }
        }

    }
    if(Keyboard::isKeyPressed(Keyboard::Down)){
            delay=speed_quick;
          } 
          if(dx!=0){
            m.moveLR(dx);
          }
          if(rotate){
            b.doRotate();
            
          }
         
          //加速下降
         
     
     if(timer>delay){
        //降落 Make the block fall
        b.drop();
        timer=0;
     }
  
     c.clearLine();
      
 
            
        
    dx=0;  rotate=0;delay=0.5;
     window.clear();
    window.draw(back);
    window.draw(frame);
    
     b.drawBlocks(&sblock,&window);
    
     window.display();
   
    }
    
    system("pause");

   

}


};
#endif