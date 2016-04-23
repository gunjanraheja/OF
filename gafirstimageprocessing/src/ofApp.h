#pragma once

#include "ofMain.h"





class Manipulate{
public:
    
    void drawManipulate(float width, float height, float theta);
     ofImage myImage;
};










class ofApp : public ofBaseApp, public Manipulate{

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
    
    ofImage myImage1,myImage2, myImage3;
    
    
    
		
};
