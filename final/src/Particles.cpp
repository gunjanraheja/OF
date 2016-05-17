//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//
#include "Particles.h"
void Particles::init(Box &_Box){
    pSize = _Box.getPanelSize();
    par.clear();
    for(int i=0;i<_Box.getPanelNumber();i++){
        par.push_back(*new Particle(pSize));
    }
}

void Particles::addParticleByNumber(int val){
    for(int i=0; i<abs(val); i++){
        if(val > 0){
            par.push_back(*new Particle(pSize));
        }else{

        }
    }
}
void Particles::draw(Box &_Box){
    for(int i=0; i < par.size();i++){
        if(i<_Box.getPanelNumber()){
            par[i].refresh();
            par[i].draw();
        }else{
            if(par[i].checkDead()){
                par.pop_back();
            }else{
                par[i].refresh();
                par[i].draw();
            }
        }
    }
}
void Particles::setRenge(float renge){
    for(int i=0;i<par.size();i++){
        par[i].setRenge(ofRandom(renge));
    }
}


void Particles::setGoals(Box &_Box){
    int randomNum = ofRandom(par.size());
    for(int i = 0; i < par.size(); i++){
        Particle temp = par[i];
        par[i] = par[randomNum];
        par[randomNum] = temp;
    }
    
    
    for(int i=0;i<par.size();i++){
        if(i<_Box.getPanelNumber()){
            par[i].setGoal(_Box.getXByIndex(i), _Box.getYByIndex(i), false, _Box.getPanelColor(i));
        }else{
            float rad = ofDegToRad(ofRandom(360));
            float x = ofGetWidth()*cos(rad);
            float y = ofGetWidth()*sin(rad);
            par[i].setGoal(x, y, true, ofColor(0));
        }
    }
}
int Particles::getParticleNumber(){
    return par.size();
}
