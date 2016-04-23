#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    w = 200;
    h = 150;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    unsigned char *data = new unsigned char[w * h * 4];
    for (int y=0; y<h; y++) {
        for (int x=0; x<w;  x++) {
            
            int red = ofMap( ofNoise(sin(ofGetElapsedTimef())), -1, 1, 0, 255 );
            int green = ofMap( ofNoise(cos(ofGetElapsedTimef())), -1, 1, 0, 255 );
            int blue = ofMap( ofNoise(tan(ofGetElapsedTimef())), -1, 1, 0, 255 );
            int alpha = ofMap( ofNoise(tan(ofGetElapsedTimef())), -1, 1, 0, 150 );
            
            int index = 4 * ( x + w * y );
            cout << "indexs: " << index << endl;
            data[ index ] = red;
            data[ index + 1 ] = green;
            data[ index + 2 ] = blue;
            data[ index + 3 ] = alpha;
            
        }
    }
    
    myImage.setFromPixels(data, w, h, OF_IMAGE_COLOR_ALPHA);
    delete[] data;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255, 255, 255);
    ofSetColor( 255, 255, 255 );
    myImage.draw( 0, 0 );
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
