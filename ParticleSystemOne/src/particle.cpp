

#include "Particle.hpp"

Particle::Particle(){
    live = false;
    
}

ofPoint Particle::randomPointInCircle(float maxRad){
    ofPoint pnt;
    float rad = ofRandom(0, maxRad);
   	float angle = ofRandom( 0, TWO_PI );
    pnt.x = cos(angle)*rad;
    pnt.y = sin(angle)*rad;
    return pnt;
    
}

void Particle::setup(){
    pos = param.eCenter + randomPointInCircle(param.eRad);
    vel = randomPointInCircle(param.velRad);
    time = 0;
    lifeTime = param.lifeTime;
    live = true;
}

void Particle::update(float dt){ //dt stands of timestamp?
    if(live){
        //rotate velocity
        vel.rotate(0,0, param.rotate * dt);
        
        ofPoint acc;
        ofPoint delta = pos - param.eCenter;
        
        float len = delta.length();
        
        if ( ofInRange( len, 0, param.eRad ) ) {
            delta.normalize();
            
            acc += delta * param.force;
            acc.x += -delta.y * param.spinning;
            acc.y += delta.x * param.spinning;
        }
        
        vel += acc * dt;            //Euler method
        vel *= ( 1 - param.friction );  //Friction
        
        //update position
        pos += vel * dt;
        
        //update time + check if the particle is going to die based on lifeTime
        time += dt;
        
        if(time>=lifeTime){
            live = false;
        }
    }
}


void Particle::draw(){
    if ( live ) {
        //Compute size
       float size = ofMap(time, 0, lifeTime, 1, 3);
        
        //Compute color
        ofColor color = ofColor::red;
        float hue = ofMap( time, 0, lifeTime, 128, 255 );
        color.setHue( hue );
        ofSetColor( color );
        
        ofCircle( pos, size );  //Draw particle
    }
}












