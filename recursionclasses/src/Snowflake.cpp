//
//  Snowflake.cpp
//  recursionclasses
//
//  Created by gunjan deepak raheja on 2/23/16.
//
//

#include "Snowflake.hpp"


void Snowflake::drawSquare(float x, float y, float w, float h){
    
      ofRect(ofGetWidth()/4, ofGetHeight()/4, w, h);
    
    
    w = w*0.7;
    if(w>5){
        
        drawSquare(x, y, w, h);
    }
    
    
}


void Snowflake::drawBranch(float length, float theta){
    ofLine(0, 0, 0, -length);
    ofTranslate(0, -length);
    
    length = length*0.4;
    
    if(length>5){
        
        
//        ofPushMatrix();
//        ofRotate(-theta);
//        drawBranch(length, theta);
//        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
    }
}



void Snowflake::draw(){
    ofSetColor(0, 0, 0);
    ofFill();
    
     ofTranslate(ofGetWidth()/2, ofGetHeight());
    drawBranch(ofGetWidth()/2, tan(ofGetElapsedTimef())*1000);
//        drawBranch(200, 30);
}






