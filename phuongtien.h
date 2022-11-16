#ifndef phuongtien_h
#define phuongtien_h
#include<iostream>
#include<string>
#include<fstream>
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
    phuongTien(string tenChuXe, string canCuocCongDan, string hangSanXuat, string loaiXe, string mauXe, string tenXe, string bienSoXe, int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe);
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
    void thongTinXe2();
    bool checkYear(int y);
    bool checkInput(int d, int m, int y);
    void input(int& d, int& m, int& y);
    int dmax(int m, int y);
    int day(int d, int m, int y);
    void checkCanCuocCongDan(string &canCuocCongDan);
    void checkHangSanXuat(string &hangSanXuat);
    void checkNoiDangKyXe(string &noiDangKyXe);
    void kiemTraKiemDinh(int d, int m, int y);
    void thongTinPhuongTienKhuVuc();
    void docFile(ifstream &filein);
    void nhapPhuongTienVaoFile();
    void capNhatSoLuongPhuongTienToanKhuVuc();
    void capNhatSoLuongPhuongTienKhuVuc(string khuvuc);
    void setColor(int color);
    void timKiemPhuongTien();
    void setTenchuxemoi(string tenChuXe,string canCuocCongDan);
    void setBienSomoi(string bienSoXe);
    void setMauXemoi(string mauXe);
};
#endif
