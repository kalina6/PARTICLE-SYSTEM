#pragma once

#include "ofMain.h"
#include "Magnetyczna.h"
#include "Particle.h"
#include "Deszcz.h"
#include <iostream>
#include <vector>

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		//zmienne
		Magnetyczna proba;
		Magnetyczna proba1;
		Magnetyczna proba2;
		Magnetyczna proba3;
		Magnetyczna proba4;
		bool czyExplozja;

		Particle pierwszy;
		std::vector<Particle> kulki;
		
		std::vector<Deszcz> de;

		ofSoundPlayer deszcz;
		ofSoundPlayer piorun;
		ofSoundPlayer wybuch;
		bool wybuchPlayed;
		bool piorunPlayed;
		bool deszczPlayed;		
			
		ofEasyCam kamera;
		ofLight swiatlo;
		
};
