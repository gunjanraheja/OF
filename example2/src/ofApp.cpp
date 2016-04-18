#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(true);
    ofBackground(4,115,204);
    
    myObject.setup(ofVec2f(0, 2500));
    
    pct = 0;
    
    Iceberg.loadImage("images/iceberg.png");

}

//--------------------------------------------------------------
void ofApp::update(){
   myObject.update(ofVec2f(ofGetMouseX(), ofGetMouseY()));

}

//--------------------------------------------------------------
void ofApp::draw(){
    Iceberg.draw(0,40);
    myObject.draw();
    


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
