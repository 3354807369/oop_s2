#ifndef START_H
#define START_H
#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include <time.h>
#include"Beginner.h"
using namespace sf;
class Start:public Beginner{
public:
void start(){
    //start menu
    RenderWindow window2(VideoMode(550,344),"aaa");
     
    while(window2.isOpen()){
        Texture t4;
        t4.loadFromFile("image/welcome.png");
        Sprite gm(t4);
       
        window2.draw(gm);
    
        Event e;
         while(window2.pollEvent(e)){
        if(e.type==Event::Closed){
            
            window2.close();
           
        }
    }   
    window2.display();
    } 
    
}
};
#endif