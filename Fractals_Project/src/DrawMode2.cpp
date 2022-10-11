#include "DrawMode2.h"

DrawMode2::DrawMode2()
{
this -> length = 200;
this -> n = 1;
this -> x = ofGetWidth() / 2;
this-> y = ofGetHeight() - 50;
this-> d = 30;
}
void DrawMode2:: draw(){
    helperdraw(length, x, y, n, d);
    helperdraw(length - 100, x/2.25, y + 30, n, d);
    helperdraw(length - 100, x/0.7, y + 30, n, d);
  //drawMode2(100, level, ofGetWidth() / 4.5, ofGetHeight() - 20, 30);
  //drawMode2(100, level, ofGetWidth() / 1.3, ofGetHeight() - 20, 30);

}

void DrawMode2::helperdraw(int length, int n, int x, int y, int d)
{
    ofSetColor(colors[n%6]);

    if (n != 0)
    {
        int middleX = x;
        int middleY = y - length;
        int leftBranchX = x - length * cos(PI / 180 * d);
        int leftBranchY = middleY - length * sin(PI / 180 * d);
        int rightBranchX = x + length * cos(PI / 180 * d);
        int rightBranchY = middleY - length * sin(PI / 180 * d);




        ofDrawLine(x, y, x, y - length);
        ofDrawLine(x, y - length, x, y - length*2);
        ofDrawLine(x, y - length, rightBranchX, rightBranchY);
        ofDrawLine(x, y - length, leftBranchX, leftBranchY);



        helperdraw(length / 2, n - 1, rightBranchX, rightBranchY, 30);
        helperdraw(length / 2, n - 1, middleX, middleY, 30);
        helperdraw(length / 2, n - 1, leftBranchX, leftBranchY, 30);

      
       
        
    }
    
}
    