#include "Deszcz.h"



Deszcz::Deszcz()
{
}

Deszcz::Deszcz(float d1, float e1, float f1, float Rd1) {

	d = d1;
	e= e1;
	f = f1;
	Rd = Rd1;
	v = 10;
	g = -9.81;
}


Deszcz::~Deszcz()
{
}

void Deszcz::draw() {
	ofSetColor(0, 0, 255);
	ofFill();
	ofDrawSphere(d, e, f, Rd);
	ofNoFill();


}

void Deszcz::spadek() {
	
	e = e + v*0.1;
	v = v + g*0.1;


}
