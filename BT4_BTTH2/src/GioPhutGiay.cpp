#include "../include/GioPhutGiay.h"
#include <bits/stdc++.h>
using namespace std;

void GioPhutGiay::Nhap(){
    cout << "Nhap gio vao day : ";
    cin >> iGio;
    cout << "Nhap phut vao day : ";
    cin >> iPhut ;
    cout << "Nhap giay vao day : ";
    cin >> iGiay;
}

bool HopLe(int a){
    if ( a > 23 || a < 0){ return false;}
    return true;}

bool HopLe1 (int b){
    if ( b > 59 || b < 0 ){ return false;}
    return true;
    }
bool HopLe2 (int c){
    if ( c > 59 || c < 0 ){ return false;}
    return true;
}

void GioPhutGiay::Xuat(){
    bool hople = HopLe (iGio);
    bool hople1 = HopLe1 (iPhut);
    bool hople2 = HopLe2 (iGiay);
    if (!hople){
        cout << "Gio khong hop le" << endl;
    }
    if (!hople1){
        cout << "Phut khong hop le" << endl;
    }
    if (!hople2){
        cout << "Giay khong hop le" << endl;
    }
    if(!hople || !hople1 || !hople2){ return; }
    cout << "Thoi gian sau khi cong 1s la " << iGio << ":";
    if ( iPhut <= 9 ){ cout << "0" << iPhut << ":";}
    else { cout << iPhut << ":"; }
    if (iGiay <=9 ) { cout << "0" << iGiay; }
    else { cout << iGiay; }
}


void GioPhutGiay::TinhCongThemMotGiay(){
    if (iGiay == 59){
        if (iPhut == 59 && iGio != 23){ iGiay = 0; iPhut = 0 ; iGio++;}
        if ( iPhut != 59 ){ iGiay = 0; iPhut++;}
        if ( iPhut == 59 && iGio == 23){ iGiay = 0; iPhut = 0 ; iGio = 0;}
    }
    else{ iGiay++; }
}
