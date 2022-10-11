#pragma once
#include<cmath>

#include "ofMain.h"
#include "FractalMode.h"

class DrawMode3: public FractalMode{
    private:
    int size;

    public:
    DrawMode3();
    void draw();
    void helperdraw(float x, float y, float size, int n);
        
};