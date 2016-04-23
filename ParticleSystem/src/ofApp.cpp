#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    //ofSetBackgroundAuto(false);
    time0 = ofGetElapsedTimef();
    //p.param.setup();
    bornCount = 0;
    bornRate = 2500;
    
    gui.setup();
    gui.add(force.setup("force", 0, -1000, 1000));
    gui.add(eRad.setup("Radius", 300, 100, 1000));
    gui.add(velRad.setup("Velocity", 0, 0, 100));
    gui.add(lifeTime.setup("Lifetime", 3, 1, 5));
    gui.add(rotate.setup("Rotation", 500, 100, 1000));
    gui.add(spinning.setup("Spinning", 300, 100, 1000));
    gui.add(friction.setup("Friction", 0.05, 0.01, 0.55));
    gui.add(color1.setup("Color1", 128, 20, 255));
    gui.add(color2.setup("Color2", 255, 20, 255));
   
  
 
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
    time = ofGetElapsedTimef();
    dt = ofClamp(time - time0, 0, 0.1);
    time0 = time;
    //
    //    if (!p.live) {
    //        p.setup();
    //    }
    //    p.update(dt);
    
    for (int i =0; i<p.size(); i++) {
        if (!p[i].live) {
            p.erase(p.begin() + i);
        }
    }
    
    bornCount += dt*bornRate;
    if (bornCount>1) {
        int bornN= int(bornCount);
        bornCount-=bornN;
        
        for (int i=0; i<bornN; i++) {
            Particle newp;
            newp.param.setup();
            
            newp.param.force = force;
            newp.param.eRad = eRad;
            newp.param.velRad = velRad;
            newp.param.rotate = rotate;
            newp.param.lifeTime = lifeTime;
            newp.param.friction = friction;
            newp.param.spinning = spinning;
            newp.color1 = color1;
            newp.color2 = color2;
            newp.setup();
            
        
            p.push_back(newp);
            
        }
        
    }
    
    for (int i=0; i<p.size(); i++) {
        p[i].update(dt);
    }
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    //p.draw();
    for (int i=0; i<p.size(); i++) {
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
