#pragma once

#include "ofMain.h"
#include "Particle.hpp"
#include "ofxGui.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    //Particle p;
    
    vector <Particle> p;
    float bornCount;
    float bornRate;
    float time;
    float time0;
    float dt;
    
    ofxPanel gui;
    
    ofxFloatSlider force;
    ofxFloatSlider eRad;
    ofxFloatSlider velRad;
    ofxFloatSlider lifeTime;
    ofxFloatSlider rotate;
    ofxFloatSlider spinning;
    ofxFloatSlider friction;
    ofxIntSlider color1;
    ofxIntSlider color2;
    
   
    
    
    
};
