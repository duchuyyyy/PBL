#include<bits/stdc++.h>
#include "oto.h"
using namespace std;

class xeMay : public oTo {
    public:
        xeMay();
        xeMay(string tenChuXe, string canCuocCongDan, string hangSanXuat, string loaiXe, string mauXe, string tenXe, string bienSoXe, int ngayDangKyXe, int thangDangKyXe, 
        int namDangKyXe, string noiDangKyXe);
        ~xeMay();
        void checkHangSanXuat(string& hangSanXuat);
        void checkBienSoXe(string& bienSoXe);
        void capNhatSoLuongXeMay();
        void nhapThongTin();
        void nhapThongTinVaoFile();
        void kiemTraKiemDinh(int d, int m, int y);
};