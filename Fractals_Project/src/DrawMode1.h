#pragma once
#include<cmath>

#include "ofMain.h"
#include "FractalMode.h"

class DrawMode1: public FractalMode{
    private:
    int m;

    public:
    DrawMode1();
    void draw();
    void helperdraw(int x, int y, int n, int m);
        
};