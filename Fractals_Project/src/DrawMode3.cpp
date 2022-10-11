#include "DrawMode3.h"

DrawMode3:: DrawMode3(){
    this-> x = ofGetWidth() / 3;
    this-> y = 10;
    this-> size = ofGetHeight() / 2;
    this -> n = 1;
}
void DrawMode3:: draw(){
    helperdraw(x, y, size, n);
}

void DrawMode3::helperdraw(float x, float y, float size, int n)
{

   // ofSetColor(colors[n]);
    if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a , b , c );

    helperdraw(x, y, size / 2, n - 1);
    helperdraw((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    helperdraw((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);

}
