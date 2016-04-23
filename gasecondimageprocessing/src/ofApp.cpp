#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.loadImage("images/photo.jpg");
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
   
//    ofEnableBlendMode(OF_BLENDMODE_ADD);
//    
//   ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
//    
     ofEnableBlendMode(OF_BLENDMODE_SUBTRACT);
   
//    ofEnableBlendMode(OF_BLENDMODE_SCREEN);
    
    
    
       ofSetColor(255,0,255);
    myImage.draw(ofGetWidth()/6, ofGetHeight()/6, 700, 500);
   
    
    
    
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
