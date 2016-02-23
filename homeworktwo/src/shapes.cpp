//
//  shapes.cpp
//  week2_Homework
//
//  Created by gunjan deepak raheja on 2/9/16.
//
//

#include "shapes.hpp"
#include "ofApp.h"

void shapes::drawSquare(){
    cout<<"Drawing a Square"<<endl;
    ofRect(ofGetWidth()/4, ofGetHeight()/4, 200, 200);
    ofSetColor(255, 0, 0);
}


void shapes::drawTriangle(){
    cout<<"Drawing a Triangle"<<endl;
    ofTriangle(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2+200, ofGetHeight()/2-200, ofGetWidth()/2+400, ofGetHeight()/2);
    ofSetColor(0, 255, 0);
}


void shapes::drawCircle(){
    cout<<"Drawing a Circle"<<endl;
    ofEllipse(ofGetWidth()/2, ofGetHeight()/2+170, 220, 260);
    ofSetColor(0, 0, 255);
}



