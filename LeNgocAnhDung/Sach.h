#ifndef Sach_h
#define Sach_h
#include<bits/stdc++.h>
#include"congtrinhkhoahoc.h"
using namespace std;
class Sach : public CongTrinhKhoaHoc {
    string loaiSach;
    public : 
    Sach();
    Sach(string maCongTrinh ,int namXuatBan ,bool khuVucXuatBan ,string loaiSach);
    ~Sach();
    friend istream &operator >>(istream& in, Sach& sach);
	friend ostream &operator <<(ostream& out, Sach& sach);
	const Sach& operator = (const Sach& a);
    void setLoaiSach(string loaiSach);
    string getLoaiSach();
};
#endif