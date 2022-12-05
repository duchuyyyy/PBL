#include"Baibao.h"
#include<stdexcept>
class LessThanZero : public runtime_error
{
    public:
    LessThanZero():runtime_error("\n So nhap vao be hon 0"){}
};
Baibao::Baibao(){}
Baibao::~Baibao()
{}
Baibao::Baibao(string maCongTrinh ,int namXuatBan ,bool khuVucXuatBan ,string tenBaiBao ,int soLuongTacGia)
: CongTrinhKhoaHoc( maCongTrinh ,namXuatBan ,khuVucXuatBan)
{
    this->tenBaiBao = tenBaiBao;
    this->soLuongTacGia = soLuongTacGia;
}
istream& operator >>(istream& in ,Baibao& baiBao)
{
    cin.ignore();
    cout << "Ma cong trinh: ";
	in >> baiBao.maCongTrinh;
	a: cout << "Nam xuat ban: ";
	in >> baiBao.namXuatBan;
    try
    {
        if(baiBao.namXuatBan<1900)
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
	in >> baiBao.khuVucXuatBan;
    cout<<"Ten bai bao : ";
    in>>baiBao.tenBaiBao;
    b : cout<<"So Luong Tac Gia :";
    in>>baiBao.soLuongTacGia;
    try
    {
        if(baiBao.soLuongTacGia<0)
        {
            throw LessThanZero();
        }
    }
    catch(LessThanZero& exception)
    {
        std::cerr << exception.what() << '\n';
        goto b;
    }
	return in;
}
ostream& operator <<(ostream& out, Baibao& baiBao) {
	out << "Ma cong trinh: " << baiBao.maCongTrinh << endl;
	out << "Nam xuat ban: " << baiBao.namXuatBan << endl;
	out.setf(ios::boolalpha);
	if (baiBao.khuVucXuatBan) {
		out << "Khu vuc xuat ban: Quoc te";
	}
	else {
		out << "Khu vuc xuat ban: Trong nuoc";
	}
    out<< " Ten bai bao : "<<baiBao.tenBaiBao<<endl;
    out<< " So luong tac gia :"<<baiBao.soLuongTacGia<<endl;
	return out;
}
const Baibao& Baibao::operator = (const Baibao& a){
	this->maCongTrinh = a.maCongTrinh;
	this->namXuatBan = a.namXuatBan;
	this->khuVucXuatBan = a.khuVucXuatBan;
    this->tenBaiBao= a.tenBaiBao;
    this->soLuongTacGia= a.soLuongTacGia;
	return *this;
}
void Baibao::setTenBaiBao(string tenBaiBao)
{
    this->tenBaiBao=tenBaiBao;
}
void Baibao::setSoLuongTacGia(int soLuongTacGia)
{
    this->soLuongTacGia=soLuongTacGia;
}
string Baibao::getTenBaiBao()
{
    return this->tenBaiBao;
}
int Baibao::getSoluongTacGia()
{
    return this->soLuongTacGia;
}