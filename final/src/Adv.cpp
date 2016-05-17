
//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//


#include "Adv.h"
void Adv::init() {
}
void Adv::fade(ofColor &c){
    ofSetColor(c);
    ofRect(0, 0, ofGetWidth(), ofGetHeight());
}
float Adv::mouseSpeed(){
    float dx = ofGetMouseX() - ofGetMouseY();
    float dy = ofGetMouseX() - ofGetMouseY();
    return sqrt(dx * dx + dy * dy);
}

int Adv::getRed(ofColor argb){
    int r = argb.r;
    return r;
}

int Adv::getGreen(ofColor argb){
    int g = argb.g;
    return g;
}

int Adv::getBlue(ofColor argb){
    int b = argb.b;
    return b;
}

int Adv::getAlpha(ofColor argb){
    int a = argb.a;
    return a;
}