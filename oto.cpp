#include<iostream>
#include<fstream>
#include<windows.h>
#include "oto.h"
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

oTo::oTo(){}
oTo::oTo(string tenChuXe, string canCuocCongDan, string hangSanXuat, string loaiXe, string mauXe, string tenXe, string bienSoXe, int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe){
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
void oTo::setData(string tenChuXe, string canCuocCongDan, string hangSanXuat, string loaiXe, string mauXe, string tenXe, string bienSoXe, int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe){
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

int oTo::checkNhapKyTu(string kyTu) {
    if(kyTu.length() == 0) {
        cout << "Vui long khong duoc de trong!" << endl;
        return 0;
    }
    return 1;
}
string oTo::getTenChuXe(){
    return this->tenChuXe;
}
string oTo::getCanCuocCongDan(){
    return this->canCuocCongDan;
}
string oTo::getHangSanXuat(){
    return this->hangSanXuat;
}
string oTo::getLoaiXe(){
    return this->loaiXe;
}
string oTo::getMauXe(){
    return this->mauXe;
}
string oTo::getTenXe(){
    return this->tenXe;
}
string oTo::getBienSoXe(){
    return this->bienSoXe;
}
int oTo::getNgayDangKyXe(){
    return this->ngayDangKyXe;
}
int oTo::getThangDangKyXe(){
    return this->thangDangKyXe;
}
int oTo::getNamDangKyXe(){
    return this->namDangKyXe;
}
string oTo::getNoiDangKyXe(){
    return this->noiDangKyXe;
}
bool oTo::checkYear(int y){
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
            return true;
        }
        else {
            return false;
        }
}
bool oTo::checkInput(int d, int m, int y){
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
void oTo::input(int &d, int &m, int &y){
    a:
            cout << "Nhap ngay: " << endl;
            cin >> d;
            cout << "Nhap thang: " << endl;
            cin >> m;
    b:      cout << "Nhap nam: " << endl;
            cin >> y;
            if(y >= 2023) {
                cout << "Thoi gian nhap khong dung. Vui long nhap lai!" << endl;
                goto b;
            }
         if (checkInput(d, m, y) == false)
         {
            cout<<"Nhap sai! Vui long nhap lai"<<endl;
            goto a;
         }
}
int oTo::dmax(int m, int y){
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
int oTo::day(int d, int m, int y){
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
void oTo::checkLoaiXe(string& loaiXe) {
    a:
        getline(cin, loaiXe);
        chuyenDoi(loaiXe);
        if(loaiXe != "Sedan" && loaiXe != "Suv") {
            cout << "Nhap lai loai xe!" << endl;
            goto a;
        }
}
int checkKyTu(string& s) {
    for(int i = 0; i < s.length(); ++i){
    	if(isdigit(s[i])) {
    		return 1;
		}
	}
    return 0;
}
void oTo::checkCanCuocCongDan(string &canCuocCongDan) {
    a: 
            //cin.ignore();
            getline(cin, canCuocCongDan);
            int check = checkKyTu(canCuocCongDan);
            if(!check) {
                cout << "Can cuoc cong dan phai la chu so. Vui long nhap lai!" << endl;
                goto a;
            }
            if(canCuocCongDan.length() != 12) {
                cout << "Nhap sai so can cuoc cong dan. Vui long nhap lai!" << endl;
                goto a;
            }
}
void oTo::checkHangSanXuat(string &hangSanXuat) {
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
void oTo::checkNoiDangKyXe(string &noiDangKyXe) {
    a: 
            getline(cin, noiDangKyXe);
            chuyenDoi(noiDangKyXe);
            if(noiDangKyXe != "Thanh Khe" && noiDangKyXe != "Hai Chau" && noiDangKyXe != "Lien Chieu" && noiDangKyXe != "Cam Le" && noiDangKyXe != "Hoa Vang"
            && noiDangKyXe != "Hoang Sa" && noiDangKyXe != "Ngu Hanh Son" && noiDangKyXe != "Son Tra") {
                cout << "Quan/Huyen ban nhap khong ton tai. Vui long nhap lai!" << endl;
                goto a;
            }
}
void oTo::setBienSoXe(string& loaiXe, string& bienSoXe) {
    string bienSo;
        if(loaiXe == "Sedan") {
        a:
            cout << "Nhap 5 chu so:" << endl;
            bienSoXe = "43A-";
            cout << "43A-";
            getline(cin, bienSo);
            int check = checkKyTu(bienSo);
            if(!check) {
                cout << "Bien so xe phai la chu so. Vui long nhap lai!" << endl;
                goto a;
            }
            if(bienSo.length() != 5) {
                cout << "Vui long nhap dung 5 chu so!" << endl;
                goto a;
            }
            bienSoXe.append(bienSo);
            int k;
            k = checkBienSoXe(bienSoXe);
            if(!k) {
                 cout << "Bien so xe bi trung! Nhap lai." << endl;
                 goto a;
            }
        }
        else if(loaiXe == "Suv") {
        b:
            cout << "Nhap 5 chu so:" << endl;
            bienSoXe = "43B-";
            cout << "43B-";
            getline(cin, bienSo);
            int check = checkKyTu(bienSo);
            if(!check) {
                cout << "Bien so xe phai la chu so. Vui long nhap lai!" << endl;
                goto b;
            }
            if(bienSo.length() != 5) {
                cout << "Vui long nhap dung 5 chu so!" << endl;
                goto b;
            }
            bienSoXe.append(bienSo);
            int k;
            k = checkBienSoXe(bienSoXe);
            if(!k) {
                 cout << "Bien so xe bi trung! Nhap lai." << endl;
                 goto b;
            }
        }
}
int oTo::checkBienSoXe(string& bienSoXe) {
    string temp;
    int flag = 1;
    ifstream filein;
    filein.open("biensoxe.txt", ios_base::in);
    while(!filein.eof()) {
        filein >> temp;
        if(bienSoXe == temp) {
            flag = 0;
            break;
        }
    }
    return flag;
}
void oTo::ghiBienSoXe(string& bienSoXe) {
    ofstream fileout;
    fileout.open("biensoxe.txt", ios_base::app);
    fileout << bienSoXe << endl;
    fileout.close();
}
void oTo::kiemTraKiemDinh(int d, int m, int y){
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
void oTo::nhapThongTin(){
    cout << "Nhap thong tin o to" << endl;
    cin.ignore();
a:
    cout << "Nhap ho ten chu xe: " << endl;
    getline(cin,this->tenChuXe);
    int check1 = this->checkNhapKyTu(this->tenChuXe);
    chuyenDoi(this->tenChuXe);
    if(!check1) {
        goto a;
    }
    cout << "Nhap can cuoc cong dan: " << endl;
    this->checkCanCuocCongDan(this->canCuocCongDan);
    cout << "Nhap hang xe: " << endl;
    this->checkHangSanXuat(this->hangSanXuat);
    cout << "Nhap loai xe: " << endl;
    this->checkLoaiXe(this->loaiXe);
b:
    cout << "Nhap mau xe: " << endl;
    getline(cin, this->mauXe);
    int check2 = this->checkNhapKyTu(this->mauXe);
    chuyenDoi(this->mauXe);
    if(!check2) {
        goto b;
    }
c:
    cout << "Nhap ten xe: " << endl;
    getline(cin, this->tenXe);
    int check3 = this->checkNhapKyTu(this->tenXe);
    chuyenDoi(this->tenXe);
    if(!check3) {
        goto c;
    }
    cout << "Nhap bien so xe: " << endl;
    this->setBienSoXe(this->loaiXe, this->bienSoXe);
    this->ghiBienSoXe(this->bienSoXe);
    cout << "Nhap noi dang ky xe: " << endl;
    this->checkNoiDangKyXe(this->noiDangKyXe);
    cout << "Nhap ngay, thang, nam dang ky xe: " << endl;
    this->input(this->ngayDangKyXe, this->thangDangKyXe, this->namDangKyXe);
}
void oTo::thongTinXe(){
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
void oTo::thongTinXe2(){
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
void oTo::docFile(ifstream &filein){
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
void oTo::nhapPhuongTienVaoFile(){
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
    this->capNhatSoLuongOTo();
    ofstream fileout3;
    fileout3.open("oto.txt", ios_base::app);
    fileout3 << "Ten chu xe: " << this->tenChuXe << "," << endl;
    fileout3 << "So can cuoc cong dan: " << this->canCuocCongDan << "." << endl;
	fileout3 << "Hang xe: " << this->hangSanXuat << "," << endl;
    fileout3 << "Loai xe: " <<this->loaiXe << "," << endl;
    fileout3 << "Mau xe: " << this->mauXe << "," << endl;
    fileout3 << "Ten xe: " << this->tenXe << "," << endl;
	fileout3 << "Bien so xe: " << this->bienSoXe << "," << endl;
	fileout3 << this->ngayDangKyXe << endl;
	fileout3 << this->thangDangKyXe << endl;
	fileout3 << this->namDangKyXe << endl;
	fileout3 << "Noi dang ky xe: " << this->noiDangKyXe << "." <<  endl;
	fileout3.close();
}
void oTo::capNhatSoLuongOTo() {
    ifstream filein;
    filein.open("soluongoto.txt", ios_base::in);
    int count;
    filein >> count;
    count++;
    filein.close();
    ofstream fileout;
    fileout.open("soluongoto.txt", ios_base::in);
    fileout << count;
    fileout.close();
}
void oTo::capNhatSoLuongPhuongTienToanKhuVuc(){
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
void oTo::setColor(int color){
    WORD wColor;
     

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
}
void oTo::capNhatSoLuongPhuongTienKhuVuc(string khuvuc){
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
void oTo::setTenchuxemoi(string tenChuXe,string canCuocCongDan)
{
    this->tenChuXe=tenChuXe;
    this->canCuocCongDan=canCuocCongDan;

}
void oTo::setBienSomoi(string bienSoXe)
{
    this->bienSoXe=bienSoXe;
}
void oTo::setMauXemoi(string mauXe)
{
    this->mauXe=mauXe;
}