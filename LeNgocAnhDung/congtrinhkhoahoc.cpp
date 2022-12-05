#include<bits/stdc++.h>
#include"congtrinhkhoahoc.h"
using namespace std;
class LessThan1900 : public runtime_error
{
    public:
    LessThan1900():runtime_error("\n So vua nhap be hon 1900"){}
};
CongTrinhKhoaHoc::CongTrinhKhoaHoc()
{}
CongTrinhKhoaHoc::~CongTrinhKhoaHoc() 
{}
CongTrinhKhoaHoc::CongTrinhKhoaHoc(string maCongTrinh, int namXuatBan, bool khuVucXuatBan) {
	this->maCongTrinh = maCongTrinh;
	this->namXuatBan = namXuatBan;
	this->khuVucXuatBan = khuVucXuatBan;
}
istream& operator >>(istream& in, CongTrinhKhoaHoc& ctkh) {
	cout << "Ma cong trinh: ";
	in >> ctkh.maCongTrinh;
	a: cout << "Nam xuat ban: ";
	in >> ctkh.namXuatBan;
    try
    {
        if(ctkh.namXuatBan<1900)
        {
            throw LessThan1900();
        }
    }
    catch(LessThan1900& exception)
    {
        std::cerr << exception.what() << '\n';
        goto a;
    }
	cout << "Khu vuc xuat ban: ";
	in.setf(ios::boolalpha);
	in >> ctkh.khuVucXuatBan;
	return in;
}
ostream& operator <<(ostream& out, CongTrinhKhoaHoc& ctkh) {
	out << "Ma cong trinh: " << ctkh.maCongTrinh << endl;
	out << "Nam xuat ban: " << ctkh.namXuatBan << endl;
	out.setf(ios::boolalpha);
	if (ctkh.khuVucXuatBan) {
		out << "Khu vuc xuat ban: Quoc te";
	}
	else {
		out << "Khu vuc xuat ban: Trong nuoc";
	}
	return out;
}
const CongTrinhKhoaHoc& CongTrinhKhoaHoc::operator = (const CongTrinhKhoaHoc& a) {
	this->maCongTrinh = a.maCongTrinh;
	this->namXuatBan = a.namXuatBan;
	this->khuVucXuatBan = a.khuVucXuatBan;
	return *this;
}
void CongTrinhKhoaHoc::setMaCongTrinh(string maCongTrinh) {
	this->maCongTrinh = maCongTrinh;
}
void CongTrinhKhoaHoc::setNamXuatBan(int namXuatBan) {
	this->namXuatBan = namXuatBan;
}
void CongTrinhKhoaHoc::setKhuVucXuatBan(bool khuVucXuatBan) {
	this->khuVucXuatBan = khuVucXuatBan;
}
string CongTrinhKhoaHoc::getMaCongTrinh() {
	return this->maCongTrinh;
}
int CongTrinhKhoaHoc::getNamXuatBan() {
	return this->namXuatBan;
}
bool CongTrinhKhoaHoc::getKhuVucXuatBan() {
	return this->khuVucXuatBan;
}