//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//

#pragma once
#include "ofMain.h"

class Adv {
public:
    void init();
    void fade(ofColor &c);
    float mouseSpeed();
    int getRed(ofColor argb);
    int getGreen(ofColor argb);
    int getBlue(ofColor argb);
    int getAlpha(ofColor argb);
    
private:
};



