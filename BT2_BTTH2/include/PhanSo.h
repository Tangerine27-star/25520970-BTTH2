#ifndef PHANSO_H
#define PHANSO_H


class PhanSo
{
    private:
         int iTu, iMau;

    public:
    void Nhap();
    void Xuat();
    void RutGon();
    int SoSanh(PhanSo ps);
    PhanSo Tong(PhanSo ps);
    PhanSo Hieu(PhanSo ps);
    PhanSo Tich(PhanSo ps);
    PhanSo Thuong(PhanSo ps);
};

#endif // PHANSO_H
