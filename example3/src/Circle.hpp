//
//  Circle.hpp
//  example3
//
//  Created by Alexandria Smith on 4/13/16.
//
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>

#endif /* Circle_hpp */

#include "ofMain.h"

class Circle{
    
public:
    
    Circle();
    
    void setup(float _posX, float _posY);
    void update();
    void draw();
    
    float gravity;
    float Length;
    float angle;
    
    float aVel;
    float aAcc;
    
private:
    float posX, posY;
    float diam;
    
};
