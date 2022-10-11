#pragma once
#include<cmath>

#include "ofMain.h"
#include "FractalMode.h"

class DrawMode2: public FractalMode{
    private:
    int length;
    int d;

    public:

    DrawMode2();
    void draw();
    void helperdraw(int length, int x, int y, int n, int d);
        
};