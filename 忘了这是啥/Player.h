#ifndef PLAYER_H
#define PLAYER_H
using namespace std;
#include<iostream>
class Player{
    public:
Player();
virtual void move()=0;
string getMoves();
char getMove(); 
bool win(Player * opponent); 
char a;
char b[10];
int c;
};
#endif