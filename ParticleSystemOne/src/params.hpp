
#ifndef Params_hpp
#define Params_hpp

#include <stdio.h>
#include "ofMain.h"
//#include "Particle.hpp"



class Params{
public:
    void setup(); // center of the emitter
    ofPoint eCenter; //radius of emitter
    float eRad; // radius of emitter
    float velRad; //max velocity
    float lifeTime; //max life
    float rotate; //rotation amount
    float force;
    float spinning;
    float friction;

    
    
};

//extern Params Param;


#endif /* Params_hpp */