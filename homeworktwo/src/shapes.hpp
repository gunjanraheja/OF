//
//  shapes.hpp
//  week2_Homework
//
//  Created by gunjan deepak raheja on 2/9/16.
//
//

#pragma once

#include "ofMain.h"

#include <stdio.h>



// classes modulize your code..
// spaceship game : rocket , bullet , meteors..

// instead of setting up 100 meteors , you just call instances of your class.

class shapes{
public:
    // all variables
    int sides;
    
    int vertices;
    
    
    // methods
    void drawTriangle();
    void drawSquare();
    void drawCircle();
    
    
};