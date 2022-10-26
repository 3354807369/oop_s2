#ifndef CLEAR_H
#define CLEAR_h
#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include <time.h>
#include "Block.h"

using namespace sf;
class clear:public move{
 
    public:

int score=0;
//Check if the block is legitimate
bool check(){
  for (int i=0;i<4;i++)
      if (curBlock[i].x<0 || curBlock[i].x>=max_col || curBlock[i].y>=max_row) return 0;
      else if (table[curBlock[i].y][curBlock[i].x]) return 0;

   return 1;
}
  //Eliminate full rows消除满的行
void clearLine(){
   
    int k=max_row-1;
for(int i=k;i>0;i--){
    int count=0;
    for(int j=0;j<max_col;j++){
        if(table[i][j]){
            count++;
        }
        table[k][j]=table[i][j];
    }
    if(count<max_col){
        k--;
    }else{
       score+=10;
       printf("%d ",score);
        
    }
    
  
 
}

}


};
#endif