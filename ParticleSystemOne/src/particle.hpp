

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Params.hpp"

class Particle{
public:
    //constructor
    Particle();
    
    //method
    void setup();
    void update(float dt);
    void draw();
    
    //variables
    Params param;
    ofPoint pos;
    ofPoint vel;
    float time; //the time it's been alive
    float lifeTime; //maxTime particle will live
    bool live;
    ofPoint randomPointInCircle(float maxRad);
     int color1, color2;
    
};

#endif /* Particle_hpp */
