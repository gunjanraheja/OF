

#include "Alien.hpp"

Alien::Alien(){
    xPos = ofRandom(0, ofGetWidth());
    yPos = ofRandom(0, ofGetHeight());
    velX = ofRandom(-3, 3);
    velY = ofRandom(-3, 3);
    diam = 100;
}

void Alien::setup(float x1, float y1){
    xPos = x1;
    yPos = y1;
    
    
    r = ofRandom(255);
    g = ofRandom(255);
    b = ofRandom(255);
    
    
}



void Alien::draw(){
    ofSetColor(r,g,b);
    ofFill();
    ofEllipse(xPos, yPos, diam, diam);
    
    
}

void Alien::update(){
    xPos += velX;
    yPos += velY;
    
    if(xPos> ofGetWidth() || xPos <diam/2){
        velX = -velX;
    }
    if (yPos> ofGetHeight() || yPos <diam/2) {
        velY = -velY;
    }
    
}