#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include <time.h>
#include"move.h"
#include "Block.h"
#include "start.h"
#include"game.h"
using namespace sf;
Start s;
game g;

int main(){
    
    
  
   s.start();
    g.games();
    
    return 0;
}