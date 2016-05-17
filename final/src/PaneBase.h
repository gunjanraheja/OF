//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//


#pragma once
#include "ofMain.h"
class PaneBase {
public:
    int _x;
    int _y;
    int _s;
    ofColor _c;
    
    void init(int x, int y, int s, ofColor &c);
    void fade();
    void draw();
private:
};

