#include "ofApp.h"

void ofApp::drawCircle(float x, float y, float diam){
    
    ofEllipse(x, y, diam, diam);
    diam = diam*0.7;
    if(diam>5){
        drawCircle(x, y, diam);
    }
}

void ofApp::drawBranch(float length, float theta){
    ofLine(0, 0, 0, -length);
    ofTranslate(0, -length);
    
    length = length*0.4;
    
    if(length>2){
        
        
        ofPushMatrix();
        ofRotate(theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
    }
}



//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0);
    ofFill();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    drawBranch(500, cos(ofGetElapsedTimef())*100);
    drawBranch(200, 30);

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
