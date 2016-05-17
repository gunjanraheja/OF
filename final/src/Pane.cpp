//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//

#include "Pane.h"

void Pane::init(int x, int y, int s, ofColor &c){
    PaneBase::init(x,y,s,c);
    colUtil = *new Adv();
}
void Pane::draw(){
    PaneBase::draw();
}

