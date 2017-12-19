#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
	ofSetFrameRate(30);
	ofEnableDepthTest();

	wybuchPlayed = false;
	deszczPlayed = false;
	piorunPlayed = false;
	czyExplozja = false;
	proba =  Magnetyczna(50.0 , 50.0 , 30.0 );
	
	for (int i = 0; i < 10; i++) {
		float d1 = ofRandom(-170.0, 120.0);
		float e1 = 50.0;
		float f1 = ofRandom(-170.0, 150.0);
		float Rd1 = ofRandom(1.0, 5.0);
		de.push_back(Deszcz(d1, e1, f1, Rd1));
	}

	
	
	for (int i = 0; i < 400; i++) {
		float x1 = ofRandom(-230.0, 150.0);
		float y1 = ofRandom(0.0, 150.0);
		float z1 = ofRandom(-245.0, 200.0);
		float r1 = ofRandom(5.0, 45.0);
		kulki.push_back(Particle(x1, y1, z1, r1));
	}	

	wybuch.load("bomb.wav");
	deszcz.load("rain-01.wav");
	deszcz.setVolume(0.5);
	deszcz.play();
	deszcz.setLoop(true);


	swiatlo.setDirectional();
	swiatlo.enable();
}

//--------------------------------------------------------------
void ofApp::update(){
	//tworzenie nowych deszczy
	if (de.size() <= 5000) {
		for (int i = 0; i < 10; i++) {
			float d1 = ofRandom(-170.0, 120.0);
			float e1 = 50.0;
			float f1 = ofRandom(-170.0, 150.0);
			float Rd1 = ofRandom(1.0, 5.0);
			de.push_back(Deszcz(d1, e1, f1, Rd1));
		}
	}
	else { 
		deszcz.stop();
		czyExplozja = true;
		if (wybuchPlayed == false) {
			wybuch.play();
			ofBackground(254.0, 254.0, 142.0);
			wybuchPlayed = true;
		}
		
	}


	for (int i = 0; i < kulki.size() - 1; i++)
	{
		proba.przyciaganie(kulki[i], czyExplozja);
		
	}
	for (int i = 0; i < de.size() - 1; i++) {
		de[i].spadek();

	}

}

//--------------------------------------------------------------
void ofApp::draw(){
	kamera.begin();
	ofPushMatrix();
	
	proba.draw();
	proba1.draw();
	proba2.draw();
	proba3.draw();
	proba4.draw();

	pierwszy.draw();
	for (int i = 0; i < kulki.size()-1; i++) {
		kulki[i].draw();
	}
	for (int i = 0; i < de.size() - 1; i++) {
		de[i].draw();
	}

    ofPopMatrix();
	kamera.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch (key)
	{
	case 'f':
		ofToggleFullscreen();
		break;
	}
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
