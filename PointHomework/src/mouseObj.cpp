

#include "mouseObj.hpp"

mouseObj::mouseObj() {
    
}

void mouseObj::setup(ofVec2f initialPos) {
    
    currentPos = initialPos;
    penguinFriend.loadImage("images/penguin.png");
    
}

void mouseObj::update(ofVec2f mouse) {
    
    pct = 0.017; //how fast it moves
    
    currentPos = currentPos * (1 - pct) + mouse * pct; //zeno function
    
}

void mouseObj::draw() {
    
    penguinFriend.draw(currentPos);
}