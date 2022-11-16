#include<iostream>
#include<fstream>
#include<windows.h>
#include "phuongtien.h"
using namespace std;

void upperCase(string &s1){
	for(int i = 0; i < s1.size(); ++i){
		s1[i] = toupper(s1[i]);
	}
}
void chuyenDoi(string &x){
	for(int i=0; i<x.length(); i++){
		if (i==0|| (i>0 && x[i-1]==32)){
			if(x[i]>=97 && x[i]<=122)
				x[i]=x[i]-32;	
		}else{
			if(x[i]>=65 && x[i]<=90)
				x[i]=x[i]+32;	
		}
	}
}

phuongTien::phuongTien(){}
phuongTien::phuongTien(string tenChuXe, string canCuocCongDan, string hangSanXuat, string loaiXe, string mauXe, string tenXe, string bienSoXe, int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe){
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
void phuongTien::checkCanCuocCongDan(string &canCuocCongDan) {
    a: 
            //cin.ignore();
            getline(cin, canCuocCongDan);
            if(canCuocCongDan.length() != 12) {
                cout << "Nhap sai so can cuoc cong dan. Vui long nhap lai!" << endl;
                goto a;
            }
            
}
void phuongTien::checkHangSanXuat(string &hangSanXuat) {
    a:
            getline(cin, hangSanXuat);
            chuyenDoi(hangSanXuat);
            if(hangSanXuat != "Ford" && hangSanXuat != "Honda" && hangSanXuat != "Huyndai" && hangSanXuat != "Toyota" && hangSanXuat != "Isuzu" && hangSanXuat != "Kia"
            && hangSanXuat != "Mercedes Benz" && hangSanXuat != "Bmw" && hangSanXuat != "Mini Cooper" && hangSanXuat != "Audi" && hangSanXuat != "Lamborghini" &&
            hangSanXuat != "Volvo" && hangSanXuat != "Jaguar" && hangSanXuat != "Maserati" && hangSanXuat != "Aston Martin" && hangSanXuat != "Bentley" && hangSanXuat != "Vinfast"
            && hangSanXuat != "Mitsubishi" && hangSanXuat != "Chevrolet" && hangSanXuat != "Lexus" && hangSanXuat != "Mazda" && hangSanXuat != "Nissan" && hangSanXuat != "Subaru"
            && hangSanXuat != "Ssangyong" && hangSanXuat != "Land Rover" && hangSanXuat != "Peugeot" && hangSanXuat != "Volkswagen" && hangSanXuat != "Porsche" && hangSanXuat != "Ferrari") {
                cout << "Hang ban nhap khong ton tai. Vui long nhap lai!" << endl;
                goto a;
            }
}
void phuongTien::checkNoiDangKyXe(string &noiDangKyXe) {
    a: 
            getline(cin, noiDangKyXe);
            chuyenDoi(noiDangKyXe);
            if(noiDangKyXe != "Thanh Khe" && noiDangKyXe != "Hai Chau" && noiDangKyXe != "Lien Chieu" && noiDangKyXe != "Cam Le" && noiDangKyXe != "Hoa Vang"
            && noiDangKyXe != "Hoang Sa" && noiDangKyXe != "Ngu Hanh Son" && noiDangKyXe != "Son Tra") {
                cout << "Quan/Huyen ban nhap khong ton tai. Vui long nhap lai!" << endl;
                goto a;
            }
}
void phuongTien::kiemTraKiemDinh(int d, int m, int y){
        //int d, m, y;
        //cout << "Nhap ngay kiem dinh: " << endl;
        //input(d, m, y);
        int kc1 = day(this->ngayDangKyXe, this->thangDangKyXe, this->namDangKyXe);
        int kc2 = day(d, m, y);
        int kc = abs(kc2 - kc1);
        cout << "\n";
        if (kc > 365) {
            setColor(4);
            cout << "Xe da qua han kiem dinh!" << endl;
            setColor(7);
        }
        else {
            setColor(2);
            cout << "Xe chua qua han kiem dinh!" << endl;
            setColor(7);
        }
}
void phuongTien::nhapThongTin(){
    cin.ignore();
    cout << "Nhap ho ten chu xe: " << endl;
    getline(cin,this->tenChuXe);
    chuyenDoi(this->tenChuXe);
    cout << "Nhap can cuoc cong dan: " << endl;
    this->checkCanCuocCongDan(this->canCuocCongDan);
    cout << "Nhap hang xe: " << endl;
    this->checkHangSanXuat(this->hangSanXuat);
    cout << "Nhap loai xe: " << endl;
    getline(cin, this->loaiXe);
    cout << "Nhap mau xe: " << endl;
    getline(cin, this->mauXe);
    chuyenDoi(this->mauXe);
    cout << "Nhap ten xe: " << endl;
    getline(cin, this->tenXe);
    chuyenDoi(this->tenXe);
    cout << "Nhap bien so xe: " << endl;
    getline(cin,this->bienSoXe);
    cout << "Nhap noi dang ky xe: " << endl;
    this->checkNoiDangKyXe(this->noiDangKyXe);
    cout << "Nhap ngay, thang, nam dang ky xe: " << endl;
    this->input(this->ngayDangKyXe, this->thangDangKyXe, this->namDangKyXe);
}
void phuongTien::thongTinXe(){
        cout << this->tenChuXe;
        cout << this->canCuocCongDan;
 	    cout << this->hangSanXuat;
        cout << this->loaiXe;
        cout << this->mauXe;
        cout << this->tenXe;
        cout << this->bienSoXe << endl;
        cout << "Ngay/thang/nam dang ky xe: " << this->ngayDangKyXe <<"/" << this->thangDangKyXe << "/" << this->namDangKyXe;
        cout << this->noiDangKyXe;
}
void phuongTien::thongTinXe2(){
        cout << "Ten chu xe: " << this->tenChuXe << endl;
        cout << "So can cuoc cong dan: " << this->canCuocCongDan << endl;
 	    cout << "Hang xe: " << this->hangSanXuat << endl;
        cout << "Loai xe: " << this->loaiXe << endl;
        cout << "Mau xe: " << this->mauXe << endl;
        cout << "Ten xe: " << this->tenXe << endl;
        cout << "Bien so xe: " << this->bienSoXe << endl;
        cout << "Ngay/thang/nam dang ky xe: " << this->ngayDangKyXe <<"/" << this->thangDangKyXe << "/" << this->namDangKyXe << endl;
        cout << "Noi dang ky xe: " << this->noiDangKyXe;
        cout << endl;
}
/*void phuongTien::thongTinPhuongTienKhuVuc(){
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
}*/
void phuongTien::docFile(ifstream &filein){
    getline(filein, this->tenChuXe, ',');
    getline(filein, this->canCuocCongDan, '.');
	getline(filein, this->hangSanXuat, ',');
    getline(filein, this->loaiXe, ',');
    getline(filein, this->mauXe, ',');
    getline(filein, this->tenXe, ',');
	getline(filein, this->bienSoXe, ',');
	filein >> this->ngayDangKyXe;
	filein >> this->thangDangKyXe;
	filein >> this->namDangKyXe;
	getline(filein, this->noiDangKyXe, '.');
}
void phuongTien::nhapPhuongTienVaoFile(){
	this->nhapThongTin();
    //! Cap nhat so luong phuong tien
    this->capNhatSoLuongPhuongTienToanKhuVuc();
    string filename, khuvuc;
    khuvuc = this->noiDangKyXe;
    upperCase(khuvuc);
    this->capNhatSoLuongPhuongTienKhuVuc(khuvuc);
    string temp = ".txt";
    filename = khuvuc.append(temp);
    //* Chia ra tung case voi moi khu vuc 
    ofstream fileout1;
    fileout1.open(filename.c_str(), ios_base::app);
    fileout1 << "Ten chu xe: " << this->tenChuXe << "," << endl;
    fileout1 << "So can cuoc cong dan: " << this->canCuocCongDan << "." << endl;
	fileout1 << "Hang xe: " << this->hangSanXuat << "," << endl;
    fileout1 << "Loai xe: " <<this->loaiXe << "," << endl;
    fileout1 << "Mau xe: " << this->mauXe << "," << endl;
    fileout1 << "Ten xe: " << this->tenXe << "," << endl;
	fileout1 << "Bien so xe: " << this->bienSoXe << "," << endl;
	fileout1 << this->ngayDangKyXe << endl;
	fileout1 << this->thangDangKyXe << endl;
	fileout1 << this->namDangKyXe << endl;
	fileout1 << "Noi dang ky xe: " << this->noiDangKyXe << "." <<  endl;
    fileout1.close();
	ofstream fileout2;
	fileout2.open("thongtinxe.txt", ios_base::app);
    fileout2 << "Ten chu xe: " << this->tenChuXe << "," << endl;
    fileout2 << "So can cuoc cong dan: " << this->canCuocCongDan << "." << endl;
	fileout2 << "Hang xe: " << this->hangSanXuat << "," << endl;
    fileout2 << "Loai xe: " <<this->loaiXe << "," << endl;
    fileout2 << "Mau xe: " << this->mauXe << "," << endl;
    fileout2 << "Ten xe: " << this->tenXe << "," << endl;
	fileout2 << "Bien so xe: " << this->bienSoXe << "," << endl;
	fileout2 << this->ngayDangKyXe << endl;
	fileout2 << this->thangDangKyXe << endl;
	fileout2 << this->namDangKyXe << endl;
	fileout2 << "Noi dang ky xe: " << this->noiDangKyXe << "." <<  endl;
	fileout2.close();
}
void phuongTien::capNhatSoLuongPhuongTienToanKhuVuc(){
    ifstream filein;
	filein.open("soluongphuongtien.txt", ios_base::in);
	int count;
	filein >> count;
	count++;
	filein.close();
	ofstream fileout;
	fileout.open("soluongphuongtien.txt", ios_base::out);
	fileout << count;
	fileout.close();
}
void phuongTien::setColor(int color){
    WORD wColor;
     

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
}
void phuongTien::capNhatSoLuongPhuongTienKhuVuc(string khuvuc){
    if(khuvuc == "HAI CHAU"){
        ifstream filein;
	    filein.open("soluongphuongtienHaiChau.txt", ios_base::in);
	    int count;
	    filein >> count;
	    count++;
	    filein.close();
	    ofstream fileout;
	    fileout.open("soluongphuongtienHaiChau.txt", ios_base::out);
	    fileout << count;
	    fileout.close();
    }
    else if(khuvuc == "THANH KHE"){
        ifstream filein;
	    filein.open("soluongphuongtienThanhKhe.txt", ios_base::in);
	    int count;
	    filein >> count;
	    count++;
	    filein.close();
	    ofstream fileout;
	    fileout.open("soluongphuongtienThanhKhe.txt", ios_base::out);
	    fileout << count;
	    fileout.close();
    }
    else if(khuvuc == "HOA VANG"){
        ifstream filein;
	    filein.open("soluongphuongtienHoaVang.txt", ios_base::in);
	    int count;
	    filein >> count;
	    count++;
	    filein.close();
	    ofstream fileout;
	    fileout.open("soluongphuongtienHoaVang.txt", ios_base::out);
	    fileout << count;
	    fileout.close();
    }
    else if(khuvuc == "HOANG SA"){
        ifstream filein;
	    filein.open("soluongphuongtienHoangSa.txt", ios_base::in);
	    int count;
	    filein >> count;
	    count++;
	    filein.close();
	    ofstream fileout;
	    fileout.open("soluongphuongtienHoangSa.txt", ios_base::out);
	    fileout << count;
	    fileout.close();
    }
    else if(khuvuc == "CAM LE"){
        ifstream filein;
	    filein.open("soluongphuongtienCamLe.txt", ios_base::in);
	    int count;
	    filein >> count;
	    count++;
	    filein.close();
	    ofstream fileout;
	    fileout.open("soluongphuongtienCamLe.txt", ios_base::out);
	    fileout << count;
	    fileout.close();
    }
    else if(khuvuc == "NGU HANH SON"){
        ifstream filein;
	    filein.open("soluongphuongtienNguHanhSon.txt", ios_base::in);
	    int count;
	    filein >> count;
	    count++;
	    filein.close();
	    ofstream fileout;
	    fileout.open("soluongphuongtienNguHanhSon.txt", ios_base::out);
	    fileout << count;
	    fileout.close();
    }
    else if(khuvuc == "LIEN CHIEU"){
        ifstream filein;
	    filein.open("soluongphuongtienLienChieu.txt", ios_base::in);
	    int count;
	    filein >> count;
	    count++;
	    filein.close();
	    ofstream fileout;
	    fileout.open("soluongphuongtienLienChieu.txt", ios_base::out);
	    fileout << count;
	    fileout.close();
    }
    else if(khuvuc == "SON TRA"){
        ifstream filein;
	    filein.open("soluongphuongtienSonTra.txt", ios_base::in);
	    int count;
	    filein >> count;
	    count++;
	    filein.close();
	    ofstream fileout;
	    fileout.open("soluongphuongtienSonTra.txt", ios_base::out);
	    fileout << count;
	    fileout.close();
    }
}
void phuongTien::setTenchuxemoi(string tenChuXe,string canCuocCongDan)
{
    this->tenChuXe=tenChuXe;
    this->canCuocCongDan=canCuocCongDan;

}
void phuongTien::setBienSomoi(string bienSoXe)
{
    this->bienSoXe=bienSoXe;
}
void phuongTien::setMauXemoi(string mauXe)
{
    this->mauXe=mauXe;
}