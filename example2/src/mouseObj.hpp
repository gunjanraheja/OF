//
//  mouseObj.hpp
//  example2
//
//  Created by Alexandria Smith on 4/11/16.
//
//  Clip art was free and found on google images.

#ifndef mouseObj_hpp
#define mouseObj_hpp

#include <stdio.h>

#endif /* mouseObj_hpp */

#include "ofMain.h"

class mouseObj {
public:
    mouseObj();
    void setup(ofVec2f initialPos);
    void update(ofVec2f mouse);
    void draw();
    
    ofImage penguinFriend;
    
    ofVec2f currentPos;
    
    float pct;
    
};
