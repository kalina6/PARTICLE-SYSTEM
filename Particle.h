#pragma once
#include "ofMain.h"

class Particle
{
public:

	float a;
	float b;
	float c;
	float R;
	float masa;

	Particle();
	Particle(float a1, float b1, float c1, float r1);
	~Particle();

	void draw();

};

