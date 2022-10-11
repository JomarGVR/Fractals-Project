#include "DrawMode1.h"

DrawMode1::DrawMode1(){
    x = ofGetWidth() / 2; 
    y = ofGetHeight() / 2; 
    n = 1;
    m = 1;

}

void DrawMode1:: draw(){
    helperdraw(x, y, n, m);
    
}
void DrawMode1:: helperdraw(int x, int y, int n, int m){

      ofSetColor(colors[m-n%6]);

    if (n != 0)
    {
       
     

         
         ofDrawBitmapString(n,50,50);
         ofDrawEllipse(x , y , 50 , 100);   
        

      

         helperdraw(x + 100 , y, n - 1 , m);
         helperdraw(x - 100 , y, n - 1 , m);
         helperdraw(x , y + 100, n - 1 , m);
         helperdraw(x , y - 100, n - 1, m);

    }
}