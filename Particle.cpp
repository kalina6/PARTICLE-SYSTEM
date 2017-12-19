#include "Particle.h"



Particle::Particle()
{
}

Particle::Particle(float a1, float b1, float c1, float r1) {

	a = a1;
	b = b1;
	c = c1;
	R = r1;
	masa = 10.0;
}


Particle::~Particle()
{
}

void Particle::draw() {
	ofSetColor(245 , 245 , 220);
	ofFill();
	ofDrawSphere(a, b, c, R);
	ofNoFill();


}

