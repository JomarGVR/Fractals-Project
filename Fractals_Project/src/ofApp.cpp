#include "ofApp.h"

//--------------------------------------------------------------
// Crear una clase abstracta, hacer un clae de cada draw mode. Cada cals heradara de fractal mode. 
void ofApp::setup()
{

	//music.load("bin/Interstellar Main Theme - Hans Zimmer_70k.mp3");
	music.setLoop(true);
	music.setVolume(0.7);
	music.play();

}

//--------------------------------------------------------------
void ofApp::update()
{
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0, 0, 0);
    if(animation == true){
        levelTime--;
        if(levelTime == 0){
            levelTime = 60;
            level++;
            if(level == 7){
                level = 0;
            }
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    if (mode1)
    {
       
        drawMode1(ofGetWidth() / 2, ofGetHeight() / 2, level , level);
    }
    if (mode2)
    {
        
        drawMode2(200, level, ofGetWidth() / 2, ofGetHeight() - 50, 30);
        drawMode2(100, level, ofGetWidth() / 4.5, ofGetHeight() - 20, 30);
        drawMode2(100, level, ofGetWidth() / 1.3, ofGetHeight() - 20, 30);

    }
    if (mode3)
    {

        
        ofSetColor(colors[level%6]);
        drawMode3(ofGetWidth() / 3, 10 , ofGetHeight() / 2, level);

    }
    if (mode4){

        drawMode4(ofGetWidth() / 2, ofGetHeight() / 2, level , level);

    }
    
}

void ofApp::drawMode1(int x, int y, int n , int m)
{
    
       

        ofSetColor(colors[m-n%6]);

    if (n != 0)
    {
         ofDrawBitmapString(n,50,50);
         ofDrawEllipse(x , y , 50 , 100);   
        

         drawMode1(x + 100 , y, n - 1 , m);
         drawMode1(x - 100 , y, n - 1 , m);
         drawMode1(x , y + 100, n - 1 , m);
         drawMode1(x , y - 100, n - 1, m);

    }
  

    
}
void ofApp::drawMode2(int length, int n, int x, int y, int d)
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



        drawMode2(length / 2, n - 1, rightBranchX, rightBranchY, 30);
        drawMode2(length / 2, n - 1, middleX, middleY, 30);
        drawMode2(length / 2, n - 1, leftBranchX, leftBranchY, 30);

      
       
        
    }
    
}

void ofApp::drawMode3(float x, float y, float size, int n)
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

    drawMode3(x, y, size / 2, n - 1);
    drawMode3((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    drawMode3((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);

}

void ofApp::drawMode4(int x, int y, int n , int m)
{
    
       

    ofSetColor(colors[m-n%6]);

    if (n != 0)
    {
         ofDrawBitmapString(n,50,50);
         ofDrawRectangle(x + 50, y , 100 , 100);   
        

         drawMode4(x + 100 , y, n - 1 , m);
         drawMode4(x - 50 , y, n - 1 , m);
         drawMode4(x + 50 , y, n - 1 , m);
         drawMode4(x - 100 , y, n - 1 , m);
         drawMode4(x , y + 100, n - 1 , m);
         drawMode4(x , y - 100, n - 1, m);
         drawMode4(x , y + 50, n - 1 , m);
         drawMode4(x , y - 50, n - 1, m);

    }
  

    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    switch (key)
    {
    case '1':
        if (mode1){
            mode1 = false;
        }
        else mode1 = true;
        break;
    case '2':
        if(mode2){  
            mode2 =false;
        }
        else mode2 = true;
        break;
    case '3':
        if(mode3){
            mode3 = false;
        } 
        else mode3 = true;
        break;
    case '4':
        if(mode4){
            mode4 = false;
        } 
        else mode4 = true;
        break;
    }
    if(' ' == key){
        animation = true;
        level = 1;
        levelTime = 20;
       
    }
    if('c' == key){
        animation = false;
        
    }

    if(key == '='){
       level += 1;

    }
    if(key == '-'){
        level -= 1;
    }

    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}