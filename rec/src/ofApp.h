#pragma once

#include "ofMain.h"




class Snowflake {
    
public:
    
    void drawSquare(float x, float y, float w, float h);
    
    void drawBranch(float length, float theta);
    


};



class ofApp : public ofBaseApp, public Snowflake{

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
    
    
    
    
    
    
    

};