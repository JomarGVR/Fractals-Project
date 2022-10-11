#pragma once
#include "ofMain.h"


class FractalMode{
    protected:
    int x;
    int y;
    int n;
    bool activate = false;
    vector<ofColor>colors;

    public:
    FractalMode(){

     ofColor a = ofColor(0 , 255, 255);
		ofColor b = ofColor(0 , 255, 0);   //green 
		ofColor c = ofColor(255 , 0, 0);  // red
		ofColor d = ofColor(255 , 255, 0);
		ofColor e = ofColor(0 , 255, 255);
		ofColor f = ofColor(0 , 0, 255);

        colors.push_back(a);
        colors.push_back(b);
        colors.push_back(c);
        colors.push_back(d);
        colors.push_back(e);
        colors.push_back(f);

    }
    virtual void draw() = 0;
    bool getActivated(){return activate;}
    void setActivated(bool activate){this->activate = activate;} 
  
    int getN(){return n;}

    void setN(int n){this->n = n;}

    

};
