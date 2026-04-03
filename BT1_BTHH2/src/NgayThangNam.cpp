#include "../include/NgayThangNam.h"
#include <bits/stdc++.h>
using namespace std;

void NgayThangNam::Nhap(){
    cout << "Nhap ngay vao day : ";
    cin >> iNgay ;
    cout << "Nhap thang vao day : ";
    cin >> iThang ;
    cout << "Nhap nam vao day : ";
    cin >> iNam ;
}

bool HopLe(int a){
    if ( a>31 || a<1 ){ return false ;}
    return true;}
bool HopLe1 (int b){
    if ( b>12 || b<1) {return false ;}
    return true;}
bool HopLe2 (int c){
    if ( c<1 ){return 0;}
    return true;
}


void NgayThangNam::Xuat(){
    bool hople = HopLe (iNgay);
    bool hople1 = HopLe1 (iThang);
    bool hople2 = HopLe2 (iNam);
     if(!hople) {
            cout << "Ngay khong hop le" << endl;
        }
    if(!hople1) {
            cout << "Thang khong hop le" << endl;
        }
    if(!hople2) {
            cout << "Nam khong hop le";
        }
    if (!hople || !hople1 || !hople2){
        return;
    }
    cout << "Ngay thang nam tiep theo la : " << iNgay << "/" << iThang << "/" << iNam;
}

bool Nhuan (int a){
    return ( a%4 == 0 && a%100 != 0 ) || ( a%400 == 0 );
}

int NgayTrongThang(int b){
    if ( b == 2){ return Nhuan? 29 : 28; }
    if ( b == 4 || b == 6 || b == 9 || b == 11){return 30;}
    return 31;
}

void NgayThangNam::NgayThangNamTiepTheo(){
    int ngaytrongthang = NgayTrongThang(iThang);
    if( iThang == 12 ){
        if (iNgay==ngaytrongthang){ iNgay = 1; iThang = 1; iNam++;}
        else { iNgay++;}
    }
    else {
        if (iNgay==ngaytrongthang){ iNgay = 1; iThang++;}
        else { iNgay++;}
        }

}

