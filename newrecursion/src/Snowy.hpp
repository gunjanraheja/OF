//
//  Snowy.hpp
//  newrecursion
//
//  Created by gunjan deepak raheja on 2/23/16.
//
//

#ifndef Snowy_hpp
#define Snowy_hpp

#include <stdio.h>

#include "ofmain.h"

#endif /* Snowy_hpp */



class Snowy{
    
    
public:
    
    
    int diam;
 
    int xPos, yPos;
    
    Snowy();
    
    void setup(float x, float y);
    void draw();
    void update();
    void drawBranch(float x, float y, float diam);
    
    
    

    
    
};