#include"Sach.h"
#include<stdexcept>
Sach::~Sach()
{}
Sach::Sach()
{}
Sach::Sach(string maCongTrinh ,int namXuatBan ,bool khuVucXuatBan , string loaiSach):
CongTrinhKhoaHoc(maCongTrinh, namXuatBan,khuVucXuatBan)
{
    this->loaiSach= loaiSach;
}
istream& operator >>(istream& in ,Sach& sach)
{
    cin.ignore();
    cout << "Ma cong trinh: ";
	in >> sach.maCongTrinh;
	a: cout << "Nam xuat ban: ";
	in >> sach.namXuatBan;
    try
    {
        if(sach.namXuatBan<1900)
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
	in >> sach.khuVucXuatBan;
    cout<< " Loai sach: ";
    in>>sach.loaiSach;
	return in;
}
ostream& operator <<(ostream& out, Sach& sach) {
	out << "Ma cong trinh: " << sach.maCongTrinh << endl;
	out << "Nam xuat ban: " << sach.namXuatBan << endl;
	out.setf(ios::boolalpha);
	if (sach.khuVucXuatBan) {
		out << "Khu vuc xuat ban: Quoc te";
	}
	else {
		out << "Khu vuc xuat ban: Trong nuoc";
	}
    out<< " Loai sach : "<< sach.loaiSach <<endl;
	return out;
}
const Sach& Sach::operator = (const Sach& a){
	this->maCongTrinh = a.maCongTrinh;
	this->namXuatBan = a.namXuatBan;
	this->khuVucXuatBan = a.khuVucXuatBan;
    this->loaiSach=a.loaiSach;
	return *this;
}
void Sach::setLoaiSach(string loaiSach)
{
  this->loaiSach=loaiSach;   
}
string Sach::getLoaiSach()
{
    return this->loaiSach;
}