#include "ofApp.h"

















//--------------------------------------------------------------
void ofApp::setup(){
    myImage1.loadImage("images/bg9.jpg");
    myImage2.loadImage("images/bg9.jpg");

    myImage3.loadImage("images/bg9.jpg");

    
    
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}



    
    
    
    
    
    
    

//--------------------------------------------------------------
void ofApp::draw(){
//    myImage.draw(150,50, 900, 700);
//
//      ofTranslate(ofGetWidth()/2, ofGetHeight());
//  
//    drawManipulate(myImage.width, myImage.height, tan(ofGetElapsedTimef())*1000);
    
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotate(45);
    myImage1.draw(0, 0, myImage1.getWidth(), myImage1.getHeight());//instead of putting the x and y, used ofTranslate()
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(200, 200);
    ofRotate(145);
    myImage2.draw(0, 0, myImage2.getWidth()/4, myImage2.getHeight()/4);//instead of putting the x and y, used ofTranslate()
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(600, 600);
    ofRotate(180);
    myImage3.draw(0, 0, myImage3.getWidth(), myImage3.getHeight());//instead of putting the x and y, used ofTranslate()
    ofPopMatrix();
    

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
