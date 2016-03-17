//
//  rangoli.cpp
//  rangoliMT
//
//  Created by gunjan deepak raheja on 3/15/16.
//
//

#include "rangoli.hpp"
void rangoli::drawCircle(float x, float y, float radius){
    
   
    
    ofNoFill();
    
    ofEllipse(x,y,radius,radius);
    
    if(radius > 20){
      
      
       ofSetColor(255,0,0);
        drawCircle(x - radius/2, y, radius/2);
        
        
       
         ofColor(0,255,0);
        drawCircle(x, y + radius/2, radius/2);
        
        
        ofSetColor(0,0,255);
        drawCircle(x, y - radius/2, radius/2);
        
        
        ofSetColor(255,0,255);
        drawCircle(x + radius/2, y, radius/2);
        

    }
    
    
    
}


void rangoli::draw(){
    ofSetColor(0);
    ofFill();
    ofTranslate(ofGetWidth()/4, ofGetHeight()/4);
    drawCircle(ofGetWidth()/4, ofGetHeight()/4, (ofGetElapsedTimef())*12);
    
}



void rangoli::setup(){
    
   ofEnableSmoothing();


}













