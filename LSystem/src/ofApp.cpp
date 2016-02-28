#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    current = "A";
    next = "";
    count = 0;
    mover = 10; // our y value in of bit map string (to draw something to the screen you need the x and y values)
    screenText = false;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
    for (int i = 0; i < current.size(); i++{
        
    }
        
        char checker = current[i];
        
        
        if(checker == 'A'){
            next = "AB";
        } else if (checker == '8'){
            next = "A";
            
        }
        
            
            
        }
    }

}
         
         current = next;
         count++;
         mover += 20;
         screenTest = true;
         

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    screenText = false;
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
