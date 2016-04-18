//
//  Circle.cpp
//  example3
//
//  Created by Alexandria Smith on 4/13/16.
//
//

#include "Circle.hpp"


Circle::Circle(){


}

void Circle::setup(float _posX, float _posY){
    posX = _posX;
    posY = _posY;
    diam = 40;
    gravity = 0.8f;
    angle = pi;
    aVel = 0.01f;
    

}

void Circle::update(){
    angle += 0.1;
    

}

void Circle::draw(){
    posX = sin(angle) * Length;
    posY = cos(angle) * Length;
    ofEllipse(posX, posY, diam, diam);


}





    

