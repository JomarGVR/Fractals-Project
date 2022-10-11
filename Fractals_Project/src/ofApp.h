#pragma once
#include<cmath>

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void drawMode1(int x, int y, int n , int m);
		void drawMode2(int length, int n, int x, int y, int d);
		void drawMode3(float x, float y, float size, int n);
		void drawMode4(int x, int y, int n , int m);
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		int level = 1;
		
		
		ofColor a = ofColor(0 , 255, 255);
		ofColor b = ofColor(0 , 255, 0);   //green 
		ofColor c = ofColor(255 , 0, 0);  // red
		ofColor d = ofColor(255 , 255, 0);
		ofColor e = ofColor(0 , 255, 255);
		ofColor f = ofColor(0 , 0, 255);
		ofSoundPlayer music;
		bool animation = false;
		int levelTime = 0 ;


		vector<ofColor> colors = { a, b, c, d , e , f};
         
		 
		

	private:
		char mode = '1';
		bool mode1 = false;
		bool mode2 = false;
		bool mode3 = false;
		bool mode4 = false;
};
