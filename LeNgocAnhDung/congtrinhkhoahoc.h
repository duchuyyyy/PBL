#ifndef congtrinhkhoahoc_h
#define congtrinhkhoahoc_h
#include<bits/stdc++.h>
using namespace std;

class CongTrinhKhoaHoc {
    protected:
	string maCongTrinh;
	bool khuVucXuatBan;
	public:
    int namXuatBan;
    CongTrinhKhoaHoc();
	CongTrinhKhoaHoc(string maCongTrinh ,int namXuatBan ,bool khuVucXuatBan );
	~CongTrinhKhoaHoc();
	friend istream &operator >>(istream& in, CongTrinhKhoaHoc& ctkh);
	friend ostream &operator <<(ostream& out, CongTrinhKhoaHoc& ctkh);
	const CongTrinhKhoaHoc& operator = (const CongTrinhKhoaHoc& a);
	void setMaCongTrinh(string maCongTrinh);
	void setNamXuatBan(int namXuatBan);
	void setKhuVucXuatBan(bool khuVucXuatBan);
	string getMaCongTrinh();
	int getNamXuatBan();
	bool getKhuVucXuatBan();
};
#endif 