#pragma once
#include "ofMain.h"
#include "Particle.h"

class Magnetyczna
{
private:

	float x;
	float y;
	float z;
	float masa;
	float r, G;
	float dx, dy, dz;
	bool zmianaKierunku;

public:
	Magnetyczna();
	Magnetyczna(float x1, float y1, float z1);
	~Magnetyczna();

	void draw();
	void przyciaganie(Particle &p, bool exp);
};

