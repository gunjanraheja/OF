//
//  Snowy.cpp
//  newrecursion
//
//  Created by gunjan deepak raheja on 2/23/16.
//
//



#include "Snowy.hpp"


Snowy::Snowy(){
    xPos = ofGetWidth()/2;
    yPos = ofGetHeight()/2;
    diam = 900;
}

void Snowy::drawBranch(float x, float y, float diam){
    
    
    ofEllipse(xPos, yPos, diam, diam);
    

//    ofFill(255,255,0);
    
    ofSetColor(255, 255, 255, 360);
    
    
    
//  ofEllipse(200, 200, diam, diam);
    
//     ofSetColor(0,255,0);
//
//    
//   ofEllipse(400, 400, diam, diam);
    
    

        ofNoFill();
    
    diam = diam * 0.7;
//    length = length * 0.8;
    
    if(diam>1 || diam< -1){
        
        
        drawBranch(xPos, yPos, diam);
        
    }
    
    
    
    
    
}





void Snowy::setup(float x, float y){
    xPos = x;
    yPos = y;

}


void Snowy::draw(){
    
   drawBranch(xPos, yPos, tan(ofGetElapsedTimef())*diam);
    
    
    
    
}



void Snowy::update(){
    
    
    
    
}


