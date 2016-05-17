//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//

#pragma once
#include "ofMain.h"
#include "PaneBase.h"
#include "Adv.h"

class Pane : public PaneBase{
public:
    void init(int x, int y, int s, ofColor &c);
    void draw();
private:
    Adv colUtil;
};
