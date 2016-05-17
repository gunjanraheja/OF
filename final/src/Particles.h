//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//

#pragma once
#include "ofMain.h"
#include "Particle.h"
#include "Box.h"

class Particles {
public:
    void init(Box &Box);
    void addParticleByNumber(int val);
    void draw(Box &Box);
    void setRenge(float renge);
    void setGoals(Box &Box);
    int getParticleNumber();
private:
    vector<Particle> par;
    int pSize;
};
