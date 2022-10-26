#ifndef BEGINNER_H
#define BEGINNER_H
#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include <time.h>
//Polymorphirm and abstract class
class Beginner{
    public:
   virtual void start()=0;
};
#endif