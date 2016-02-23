#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    et.setup(ofGetWidth()/2, ofGetHeight()/2);
    booboo.setup(100, 100);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    et.update();
    booboo.update();
    
    
    for (int i=0; i<myAliens.size(); i++) {
        
        myAliens[i].update();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    et.draw();
    booboo.draw();
    
    for (int i=0; i<myAliens.size(); i++) {
        
        myAliens[i].draw();
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
    Alien tempAlien;
    tempAlien.setup(x, y);
    myAliens.push_back(tempAlien);
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
   //  myAliens.clear();
    
    for(int i=0; i<myAliens.size(); i++){
        
        float distance = ofDist (x,y,myAliens[i].xPos, myAliens[i].yPos);
        
                                if(distance<myAliens[i].diam){
                                    
                                    myAliens.erase(myAliens.begin() + i);
                                    
                                    
                                }
    }
    
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
