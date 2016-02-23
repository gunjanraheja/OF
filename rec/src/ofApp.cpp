#include "ofApp.h"


void Snowflake::drawSquare(float x, float y, float w, float h){
    
     ofRect(ofGetWidth()/4, ofGetHeight()/4, w, h);
    
    w = w*0.7;
    if(w>5){
        drawSquare(x, y, w, h);
    }
}

void ofApp::Snowflake::drawBranch(float length, float theta){
    ofLine(0, 0, 0, -length);
    ofTranslate(0, -length);
    
    length = length*0.4;
    
    if(length>5){
        
        
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
    ofSetColor(0, 0, 0);
    ofFill();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    drawBranch(ofGetWidth()/4, tan(ofGetElapsedTimef())*1000);
//    drawBranch(200, 30);

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
