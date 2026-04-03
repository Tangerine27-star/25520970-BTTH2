#include "../include/SoPhuc.h"
#include <bits/stdc++.h>
using namespace std;

void SoPhuc::Nhap(){
    cout << "Nhap gia tri thuc vao day: ";
    cin >> iThuc;
    cout << "Nhap gia tri ao vao day: ";
    cin >> iAo;
}

void SoPhuc::Xuat(){
    if ( iThuc == 0 && iAo == 0){ cout << "0"; return;}
   if ( iThuc < 0 ){
    if ( iAo < 0 ) { cout << iThuc << iAo << "i";}
    else { cout << iThuc << "+" << iAo << "i";}
   }
   else {
    if ( iAo < 0 ) { cout << iThuc << iAo << "i";}
    else { cout << iThuc << "+" << iAo << "i";}
   }
}

SoPhuc SoPhuc::Tong(SoPhuc sp){
    SoPhuc kq;
    kq.iThuc = this->iThuc + sp.iThuc;
    kq.iAo = this->iAo + sp.iAo;
    return kq;
}

SoPhuc SoPhuc::Hieu(SoPhuc sp){
    SoPhuc kq;
    kq.iThuc = this->iThuc - sp.iThuc;
    kq.iAo = this->iAo - sp.iAo;
    return kq;
}

SoPhuc SoPhuc::Tich(SoPhuc sp){
    SoPhuc kq;
    kq.iThuc = this->iThuc * sp.iThuc - this->iAo * sp.iAo;
    kq.iAo = this->iAo * sp.iThuc  + sp.iAo * this->iThuc;
    return kq;
}

void Xuat1(int a, int b, int mau){
    if ( a < 0 ){
    if ( b < 0 ) { cout << a << "/" << mau << b  << "/" << mau << "i";}
    else { cout << a  << "/" << mau << "+" << b  << "/" << mau << "i";}
   }
   else {
    if ( b < 0 ) { cout << a  << "/" << mau << b  << "/" << mau << "i";}
    else { cout << a  << "/" << mau << "+" <<  b  << "/" << mau << "i";}
   }
}

SoPhuc SoPhuc::Thuong(SoPhuc sp){
    SoPhuc kq;
    kq.iThuc = this->iThuc * sp.iThuc + this->iAo * sp.iAo;
    kq.iAo = (this->iAo * sp.iThuc  - sp.iAo * this->iThuc);
    int mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    Xuat1(kq.iThuc, kq.iAo, mau);
    return kq;
}


