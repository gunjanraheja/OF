#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    theta = 90;
    i = 1;
    l = ofGetWidth()/2;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 0, 0);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/8);
    
    
   x = (cos(ofDegToRad(theta))*l);
    
    
    y = (sin(ofDegToRad(theta))*l);

    
    
    ofLine(0, 0, x, y);
    ofColor(0);
    
    ofEllipse(x,y,50,50);
    
    if (theta >135 || theta < 45) i=-1*i;
    theta = theta + i * 0.25;
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
