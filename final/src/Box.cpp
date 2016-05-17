//
//  PaneBase.cpp
//
//
//  Created by Gunjan Deepak Raheja on 05/11/16.
//
//

#include "Box.h"
void Box::init(int _paneSize, ofImage &_image){
    paneSize = _paneSize;
    panes.clear();
    
    float imgHeight = (float)_image.getHeight()/(float)paneSize;
    float imgWidth = (float)_image.getWidth()/(float)paneSize;

    for(int h=0;h<imgHeight;h++){
        for(int w=0;w<imgWidth;w++){
            ofColor c = _image.getColor(w*paneSize, h*paneSize);
            
           
            if(org.a != c.a){
                pane.init(w*paneSize, h*paneSize, paneSize, c);
                panes.push_back(pane);
            }
        }
    }
}


void Box::draw(){
    for(int i=0;i<panes.size();i++){
        panes[i].draw();
    }
}
void Box::drawByIndex(int index){
   
}
int Box::getIndex(int _x,int _y){
    
}
int Box::getXByIndex(int index){
    return panes[index]._x;
}
int Box::getYByIndex(int index){
    return panes[index]._y;
}
ofColor Box::getPanelColor(int index){
    return panes[index]._c;
}
int Box::getPanelNumber(){
    return panes.size();
}
int Box::getPanelSize(){
    return paneSize;
}