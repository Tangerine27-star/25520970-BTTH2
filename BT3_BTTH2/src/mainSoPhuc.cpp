#include "../include/SoPhuc.h"
#include <bits/stdc++.h>
using namespace std;

int main (){
    char d,i;
    SoPhuc a,b, tong, hieu, tich, thuong1, thuong2;
    cout << "Nhap so phuc 1 vao day : " << endl;
    a.Nhap();
    cout << "Nhap so phuc 2 vao day : "<< endl;
    b.Nhap();
    cout << endl;
    tong = a.Tong(b);
    hieu = a.Hieu(b);
    tich = a.Tich(b);
    cout << "Tong cua hai so phuc la : ";
    tong.Xuat();
    cout << endl;
    cout << "Hieu cua hai so phuc la : ";
    hieu.Xuat();
    cout << endl;
    cout << "Tich cua hai so phuc la : ";
    tich.Xuat();
    cout << endl;
    cout << "Thuong cua hai so phuc la : ";
    thuong1 = a.Thuong(b);
    cout << " va ";
    thuong2 = b.Thuong(a);
    cout << endl;
    return 0;
}
