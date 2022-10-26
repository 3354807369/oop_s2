#ifndef MOVE_H
#define MOVE_H
#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include <time.h>
#include "Block.h"
using namespace sf;
class move:public Block{
    public:
    int score=0;
    //Check the legality of building blocks
    bool check(){
  for (int i=0;i<4;i++)
      if (curBlock[i].x<0 || curBlock[i].x>=max_col || curBlock[i].y>=max_row) return 0;
      else if (table[curBlock[i].y][curBlock[i].x]) return 0;

   return 1;
}
        

//move
void moveLR(int offset){
   
   for(int i=0;i<4;i++){
    backblock[i]=curBlock[i];//backups备份
    curBlock[i].x+=offset;
   }
   if(!check()){
    for(int i=0;i<4;i++){
        curBlock[i]=backblock[i];
    }
   }
}



};
#endif