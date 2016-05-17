
//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//



#pragma once
#include "ofMain.h"
#include "Box.h"

class Particle {
public:
    Particle(int pSize);
    void draw();
    void refresh();
    void setStart(int x,int y);
    void setGoal(int x,int y, bool isDead, ofColor c);
    void setRenge(float renge);
    bool checkDead();
    float getLifespan();
    
private:
    float _x;
    float _y;
    float _px;
    float _py;
    float _r=0;
    float _g=0;
    float _b=0;
    
    float GoalX;
    float GoalY;
    float lifeSpan = 255.0;
    float speed;
    float randomRenge;
    int pSize;
    ofColor targetColor = ofColor(0);
    bool dead;
};