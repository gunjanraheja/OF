#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
//    ofSetBackgroundAuto(false);
    time0 = ofGetElapsedTimef();
    //p.param.setup(); //this is setting up our emitter
    bornCount = 0;
    
    bornRate = 1500;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    time = ofGetElapsedTimef();
    dt = ofClamp(time - time0, 0, 0.1);
    time0 = time;
    
    //deleting particles
    for(int i =0; i<p.size(); i++){
        if (!p[i].live) { //!p.live is the same thing is p.live ==false
            p.erase(p.begin() + i);
        }
    }
    
    //p.update(dt);
    
    
    bornCount += dt*bornRate;
    
    if(bornCount>1){
        int bornN = int(bornCount);
        bornCount -= bornN;
        
        
        for(int i = 0; i < bornN; i++){
            Particle newp;
            newp.param.setup();
            newp.setup();
            p.push_back(newp);
        }
        
    }
    
    for(int i =0; i<p.size(); i++){
        p[i].update(dt);
    }
    
}



//--------------------------------------------------------------
void ofApp::draw(){
    //p.draw();
    for(int i = 0; i <p.size(); i++){
        p[i].draw();
    }
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
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
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
