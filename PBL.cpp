#include<bits/stdc++.h>
#include"PBL.h"
using namespace std;


phuongTien::phuongTien(){}
void phuongTien::setData(string tenChuXe, string canCuocCongDan, string hangSanXuat, string loaiXe, string mauXe, string tenXe, string bienSoXe, int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe){
	    this->tenChuXe = tenChuXe;
        this->canCuocCongDan = canCuocCongDan;
        this->hangSanXuat = hangSanXuat;
        this->loaiXe = loaiXe;
        this->mauXe = mauXe;
        this->tenXe = tenXe;
        this->bienSoXe = bienSoXe;
        this->ngayDangKyXe = ngayDangKyXe;
        this->thangDangKyXe = thangDangKyXe;
        this->namDangKyXe = namDangKyXe;
        this->noiDangKyXe = noiDangKyXe;
}
string phuongTien::getTenChuXe(){
    return this->tenChuXe;
}
string phuongTien::getCanCuocCongDan(){
    return this->canCuocCongDan;
}
string phuongTien::getHangSanXuat(){
    return this->hangSanXuat;
}
string phuongTien::getLoaiXe(){
    return this->loaiXe;
}
string phuongTien::getMauXe(){
    return this->mauXe;
}
string phuongTien::getTenXe(){
    return this->tenXe;
}
string phuongTien::getBienSoXe(){
    return this->bienSoXe;
}
int phuongTien::getNgayDangKyXe(){
    return this->ngayDangKyXe;
}
int phuongTien::getThangDangKyXe(){
    return this->thangDangKyXe;
}
int phuongTien::getNamDangKyXe(){
    return this->namDangKyXe;
}
string phuongTien::getNoiDangKyXe(){
    return this->noiDangKyXe;
}
bool phuongTien::checkYear(int y){
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
            return true;
        }
        else {
            return false;
        }
}
bool phuongTien::checkInput(int d, int m, int y){
    if (d == 29 && m == 2 && checkYear(y) == false) {
            return false;
        }
        else if (d >= 1 && m >= 1 && y >= 1600) {
            if (d <= 31 && m <= 12) {
                return true;
            }
        }
        else {
            return false;
        }
}
void phuongTien::input(int &d, int &m, int &y){
    a:
            cout << "Nhap ngay: " << endl;
            cin >> d;
            cout << "Nhap thang: " << endl;
            cin >> m;
            cout << "Nhap nam: " << endl;
            cin >> y;
         if (checkInput(d, m, y) == false)
         {
            cout<<"Nhap sai! Vui long nhap lai"<<endl;
            goto a;
         }
}
int phuongTien::dmax(int m, int y){
    switch (m) {
        case 2:
            if (checkYear(y) == true) {
                return 29;
            }
            else {
                return 28;
            }
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 31;
        }
}
int phuongTien::day(int d, int m, int y){
    for (int i = 0; i < y; ++i) {
            if (checkYear(i) == true) {
                d += 366;
            }
            else {
                d += 365;
            }
        }
        for (int i = 1; i < m; ++i) {
            d += dmax(i, y);
        }
        return d;
}
void phuongTien::kiemTraKiemDinh(int d, int m, int y){
        //int d, m, y;
        //cout << "Nhap ngay kiem dinh: " << endl;
        //input(d, m, y);
        int kc1 = day(this->ngayDangKyXe, this->thangDangKyXe, this->namDangKyXe);
        int kc2 = day(d, m, y);
        int kc = abs(kc2 - kc1);
        if (kc > 365) {
            cout << "Xe da qua han kiem dinh!" << endl;
        }
        else {
            cout << "Xe chua qua han kiem dinh!" << endl;
        }
}
void phuongTien::nhapThongTin(){
    cout << "Nhap ho ten chu xe: " << endl;
    getline(cin,this->tenChuXe);
    cout << "Nhap can cuoc cong dan: " << endl;
    getline(cin, this->canCuocCongDan);
    cout << "Nhap hang xe: " << endl;
    getline(cin,this->hangSanXuat);
    cout << "Nhap loai xe: " << endl;
    getline(cin, this->loaiXe);
    cout << "Nhap mau xe: " << endl;
    getline(cin, this->mauXe);
    cout << "Nhap ten xe: " << endl;
    getline(cin, this->tenXe);
    cout << "Nhap bien so xe: " << endl;
    getline(cin,this->bienSoXe);
    cout << "Nhap noi dang ky xe: " << endl;
    getline(cin,this->noiDangKyXe);
    cout << "Nhap ngay, thang, nam dang ky xe: " << endl;
    this->input(this->ngayDangKyXe, this->thangDangKyXe, this->namDangKyXe);
}
void phuongTien::thongTinXe(){
        cout << "Ten chu xe: " << this->getTenChuXe() << endl;
        cout << "So can cuoc cong dan: " << this->getCanCuocCongDan() << endl;
 	    cout << "Hang xe: " << this->getHangSanXuat() << endl;
        cout << "Loai xe: " << this->getLoaiXe() << endl;
        cout << "Mau xe: " << this->getMauXe() << endl;
        cout << "Ten xe: " << this->getTenXe() << endl;
        cout << "Bien so xe: " << this->getBienSoXe() << endl;
        cout << "Ngay dang ky xe: " << this->getNgayDangKyXe() << endl;
        cout << "Thang dang ky xe: " << this->getThangDangKyXe() << endl;
        cout << "Nam dang ky xe: " << this->getNamDangKyXe() << endl;
        cout <<  "Noi dang ky xe: " << this->getNoiDangKyXe() << endl;
}
void phuongTien::thongTinPhuongTienKhuVuc(){
    string khuVuc;
    cout << "Nhap khu vuc can kiem tra: ";
    cin.ignore();
    getline(cin, khuVuc);
    //cin >> khuVuc;
    if(this->noiDangKyXe == khuVuc){
        this->thongTinXe();
    } else{
    	cout << "Nhap sai ten khu vuc" << endl;
	}
}
void phuongTien::docFile(ifstream &filein){
    getline(filein, this->tenChuXe, ',');
    getline(filein, this->canCuocCongDan, '.');
	getline(filein, this->hangSanXuat, ',');
    getline(filein, this->loaiXe, ',');
    getline(filein, this->mauXe, ',');
    getline(filein, this->tenXe, ',');
	getline(filein, this->bienSoXe, '.');
	filein >> this->ngayDangKyXe;
	filein >> this->thangDangKyXe;
	filein >> this->namDangKyXe;
	getline(filein, this->noiDangKyXe, '.');
}
void phuongTien::nhapPhuongTienVaoFile(){
	this->nhapThongTin();
	ofstream fileout;
	char filename[20];
	cout << "Nhap ten file muon nhap thong tin xe vao: ";
	cin >> filename;
    strcat(filename,".txt");
	fileout.open(filename, ios_base::app);
    fileout << this->tenChuXe << "," << endl;
    fileout << this->canCuocCongDan << "." << endl;
	fileout << this->hangSanXuat << "," << endl;
    fileout << this->loaiXe << "," << endl;
    fileout << this->mauXe << "," << endl;
    fileout << this->tenXe << "," << endl;
	fileout << this->bienSoXe << "," << endl;
	fileout << this->ngayDangKyXe << endl;
	fileout << this->thangDangKyXe << endl;
	fileout << this->namDangKyXe << endl;
	fileout << this->noiDangKyXe << "." << endl;
	fileout.close();
}



