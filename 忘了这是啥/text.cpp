#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;
//// Timer 逻辑
while(window.isOpen())   // SFML 窗口
{
    timer += time;   // time是上次计时到本次的时间
    if(timer>delay){
        // check
        // transpose
        // new block
        timer = 0;
    }
}