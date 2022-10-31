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
        cout << "\n";
        if (kc > 365) {
            cout << "Xe da qua han kiem dinh!" << endl;
        }
        else {
            cout << "Xe chua qua han kiem dinh!" << endl;
        }
}
void phuongTien::nhapThongTin(){
    cin.ignore();
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
	getline(filein, this->bienSoXe, ',');
	filein >> this->ngayDangKyXe;
	filein >> this->thangDangKyXe;
	filein >> this->namDangKyXe;
	getline(filein, this->noiDangKyXe, '.');
}
void phuongTien::nhapPhuongTienVaoFile(){
	this->nhapThongTin();
    //! Tao file dem so luong rieng
    /*fstream fileCount;
    fileCount.open("soluongphuongtien.txt", ios_base::trunc);
    int count;
    fileCount >> count;
    count++;
    fileCount << count;
    fileCount.close();*/
    //! Cap nhat so luong phuong tien
    this->capNhatSoLuongPhuongTien();
	ofstream fileout;
	fileout.open("thongtinxe.txt", ios_base::app);
    fileout << "Ten chu xe: " << this->tenChuXe << "," << endl;
    fileout << "So can cuoc cong dan: " << this->canCuocCongDan << "." << endl;
	fileout << "Hang xe: " << this->hangSanXuat << "," << endl;
    fileout << "Loai xe: " <<this->loaiXe << "," << endl;
    fileout << "Mau xe: " << this->mauXe << "," << endl;
    fileout << "Ten xe: " << this->tenXe << "," << endl;
	fileout << "Bien so xe: " << this->bienSoXe << "," << endl;
	fileout << this->ngayDangKyXe << endl;
	fileout << this->thangDangKyXe << endl;
	fileout << this->namDangKyXe << endl;
	fileout << "Noi dang ky xe: " << this->noiDangKyXe << "." <<  endl;
	fileout.close();
}

void phuongTien::inTatCaPhuongTien(){
  string line;
  ifstream myfile ("thongtinxe.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 
}
void phuongTien::capNhatSoLuongPhuongTien(){
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

