//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//


#pragma once

#include "ofMain.h"
#include "Box.h"
#include "Particles.h"
#include "Adv.h"

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
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void genPar();
    
        Box Box;
        Particles particles;
        Adv adv;
    
        int pv1 = 0;
        int v1;
        int currentImg = 0;
        int resolution = 3;
        int rangeVal = 5;
        int preS = 0;
        ofColor bg;
    
        ofImage myImg;
      
};