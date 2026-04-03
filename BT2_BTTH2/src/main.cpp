#include <bits/stdc++.h>
#include "../include/PhanSo.h"
using namespace std;


int main (){
    PhanSo a, b;
    cout << "Nhap 2 phan so" << endl;
    cout << "Nhap phan so 1" << endl;
    a.Nhap();
    cout << "Nhap phan so 2" << endl;
    b.Nhap();
    cout << endl;
    cout << "Hai phan so sau khi rut gon" << endl;
    cout << "Phan so 1 : ";
    a.RutGon();
    a.Xuat();
    cout << endl;
    cout << "Phan so 2 : ";
    b.RutGon();
    b.Xuat();
    cout << endl;
    PhanSo tong = a.Tong(b);
    PhanSo hieu = a.Hieu(b);
    PhanSo tich = a.Tich(b);
    PhanSo thuong = a.Thuong(b);
    int sosanh = a.SoSanh(b);
    cout << "Tong cua hai phan so la : " ;
    tong.Xuat();
    cout << endl;
    cout << "Hieu cua hai phan so la : ";
    hieu.Xuat();
    cout << endl;
    cout << "Tich cua hai phan so la : ";
    tich.Xuat();
    cout << endl;
    cout << "Thuong cua hai phan so la : ";
    thuong.Xuat();
    cout << endl;
    if( sosanh == 1 ){ cout << "Phan so 1 lon hon phan so 2";}
    if( sosanh == -1 ){ cout << "Phan so 2 lon hon phan so 1";}
    if( sosanh == 0 ){ cout << "Phan so 1 bang phan so 2";}
    return 0;
}
