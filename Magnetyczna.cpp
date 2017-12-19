#include "Magnetyczna.h"
#include <cmath>

Magnetyczna::Magnetyczna() {

}

Magnetyczna::Magnetyczna(float x1, float y1, float z1)
{
	x = x1;
	y = y1;
	z = z1;
	r = 20.0;
	masa = 50.0;
	G = 6;
	zmianaKierunku = false;
}


Magnetyczna::~Magnetyczna()
{
}


void Magnetyczna::draw() {

	ofSetColor(450, 450, 220);
	ofFill();
	ofDrawSphere(x, y, z, r);
	ofNoFill();

}

void Magnetyczna::przyciaganie(Particle &p, bool eksp) {
	//if (eksp == false) {
		dx = x - p.a;
		dy = y - p.b;
		dz = z - p.c;

		float dystans = sqrt(pow(dx, 2) + pow(dy, 2) + pow(dz, 2));

		if (dystans > r + p.R || eksp == true) {

			dx /= dystans;
			dy /= dystans;
			dz /= dystans;

			float m = (G * masa *p.masa) / (dystans*dystans);

			dx *= m;
			dy *= m;
			dz *= m;
			if (eksp == false) {
				p.a += dx;
				p.b += dy;
				p.c += dz;
			}
			else {
				p.a -= dx * 100;
				p.b -= dy * 100;
				p.c -= dz * 100;
			}
		}
	//}
	//else if (eksp == true) {
			
	//	if (zmianaKierunku = false) {
			//dx = -dx;
			//dy = -dy;
			//dz = -dz;
	//		zmianaKierunku = true;
	//	}
	//	p.a -= dx ;
	//	p.b -= dy ;
	//	p.c -= dz ;
		

	//}

}

	







