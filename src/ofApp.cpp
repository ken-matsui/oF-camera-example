#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);
    
    //幅320pixel、高さ240pixelでビデオ取り込み初期化
    vidGrabber.initGrabber(320,240);
    //OpenCVで解析する320pixel x 240pixelのカラー画像の領域を確保
    colorImg.allocate(320,240);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //新規にフレームを取り込んだかを判定する変数
    bool bNewFrame = false;
    //1フレーム映像を取り込み
    vidGrabber.update();
    //最後に取り込んだフレームから変化があったかを判定
    bNewFrame = vidGrabber.isFrameNew();
    
    //新規のフレームの場合とりこみ実行
    if (bNewFrame){
        //OpenCVで解析するカラー画像領域に取得した映像を格納
        colorImg.setFromPixels(vidGrabber.getPixels());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    ofSetColor(255);
    
    //取り込んだ画像を表示
    colorImg.draw(10,10);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
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
