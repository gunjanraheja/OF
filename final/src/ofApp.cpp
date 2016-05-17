//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bg = ofColor(125,50);
    ofBackground(bg);
    ofSetBackgroundAuto(false);
    myImg.loadImage("mom.jpg");
    Box.init(resolution, myImg);
    particles.init(Box);
    particles.setGoals(Box);
}
//--------------------------------------------------------------
void ofApp::update(){

}
//--------------------------------------------------------------
void ofApp::draw(){
    adv.fade(bg);
    ofPushMatrix();
     ofTranslate(ofGetWidth()/2 - myImg.getWidth()/2, ofGetHeight()/2 - myImg.getHeight()/2);
        particles.draw(Box);
    ofPopMatrix();
    ofSetColor(0);
    
}
//--------------------------------------------------------------
void ofApp::genPar(){
    int pBoxSize = Box.getPanelNumber();
    Box.init(resolution, myImg);
        particles.addParticleByNumber(Box.getPanelNumber() - pBoxSize);
    particles.setGoals(Box);
    particles.setRenge(rangeVal);
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
