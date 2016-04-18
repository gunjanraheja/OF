#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(1);
    ofEnableSmoothing();
    me.dotSize = 9.0f;
    me.angleOffSetA = ofDegToRad(1.5);
    me.angleOffSetB = ofDegToRad(50);
    
    gui.setup();
    gui.add(dotsize.setup("dotsize",8,1,15));
    gui.add(angleA.setup("angleA",1.5,1,5));
    gui.add(angleB.setup("angleB", 3 ,1, 1.5));
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    me.dotSize = dotsize;
    // for degrees and radiants
    me.angleOffSetA = ofDegToRad(angleA);
      me.angleOffSetB = ofDegToRad(angleB);
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    me.seed1(me.dotSize, ofDegToRad(260), 0, 0);
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