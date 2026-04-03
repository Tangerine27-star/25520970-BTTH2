#include "../include/PhanSo.h"
#include <bits/stdc++.h>
using namespace std;

void PhanSo::Nhap(){
    cout << "Nhap tu vao day : ";
    cin >> iTu;
    cout << "Nhap mau vao day : ";
    cin >> iMau;
    if ( iMau == 0 ){
        cout << "Nhap mot mau khac 0 : ";
        cin >> iMau;
    }
}
void PhanSo::Xuat(){
    if(iTu == 0 || iMau == 0 ){cout << "0"; return;}
    if ( iTu == iMau ) { cout << "1"; return; }
    cout << iTu << "/" << iMau;
}

void PhanSo::RutGon(){
    if( iTu >= iMau ){
        for ( int i = iTu; i >= 2 ; i-- ){
            if ( iTu % i == 0 && iMau % i == 0){
                iTu = iTu/i;
                iMau = iMau/i;
                break;
            }
        }
    }

        if( iTu < iMau ){
        for ( int i = iMau; i >= 2 ; i-- ){
            if ( iTu % i == 0 && iMau % i == 0){
                iTu = iTu/i;
                iMau = iMau/i;
                break;
            }
        }
    }

}

PhanSo PhanSo::Tong (PhanSo ps){
    PhanSo kq;
    kq.iTu = (this->iTu * ps.iMau) + (this->iMau * ps.iTu);
    kq.iMau = this->iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu (PhanSo ps) {
    PhanSo kq;
    kq.iTu = this->iTu * ps.iMau - this->iMau * ps.iTu;
    kq.iMau = this->iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich (PhanSo ps) {
    PhanSo kq;
    kq.iTu = this->iTu * ps.iTu;
    kq.iMau = this->iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Thuong (PhanSo ps) {
    PhanSo kq;
    kq.iTu = this->iTu * ps.iMau;
    kq.iMau = this->iMau * ps.iTu;
    kq.RutGon();
    return kq;//Tao ra mot phan so moi de tra ve kq
}
//ham sosanh chi so sanh chu khong tao ra mot phan so ms nen dung int thay vi PhanSo
int PhanSo::SoSanh (PhanSo ps){
    int t1 = this->iTu * ps.iMau;
    int t2 = ps.iTu * this->iMau;
    if( t1 > t2 ) return 1;
    if( t1 < t2 ) return -1;
    if( t1 == t2 ) return 0;
}
