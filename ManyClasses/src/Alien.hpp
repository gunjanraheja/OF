
#ifndef Alien_hpp
#define Alien_hpp

#include <stdio.h>

#include "ofMain.h"

#endif /* Alien_hpp */

class Alien{
public:
    
    //variables
    int xPos, yPos;
    int velX, velY;
    int r, g, b;
    int diam;
    
    //constructor
    Alien();
    
    //methods
    void setup(float x1, float y1);
    void draw();
    void update();
    
    
    
};