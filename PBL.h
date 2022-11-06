#ifndef PBL_h
#define PBL_h
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

class phuongTien {
    string tenChuXe;
    string canCuocCongDan;
    string hangSanXuat;
    string loaiXe;
    string mauXe;
    string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
public:
    phuongTien();
    void setData(string tenChuXe, string canCuocCongDan, string hangSanXuat, string loaiXe, string mauXe, string tenXe, string bienSoXe, int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe);
    void nhapThongTin();
    string getTenChuXe();
    string getCanCuocCongDan();
    string getHangSanXuat();
    string getLoaiXe();
    string getMauXe();
    string getTenXe();
    string getBienSoXe();
    int getNgayDangKyXe();
    int getThangDangKyXe();
    int getNamDangKyXe(); 
    string getNoiDangKyXe();
    void thongTinXe(); 
    bool checkYear(int y);
    bool checkInput(int d, int m, int y);
    void input(int& d, int& m, int& y);
    int dmax(int m, int y);
    int day(int d, int m, int y);
    void kiemTraKiemDinh(int d, int m, int y);
    void thongTinPhuongTienKhuVuc();
    void docFile(ifstream &filein);
    void nhapPhuongTienVaoFile();
    void capNhatSoLuongPhuongTienToanKhuVuc();
    void capNhatSoLuongPhuongTienKhuVuc(string khuvuc);
    void setColor(int color);
    void timKiemPhuongTien();
};
#endif
