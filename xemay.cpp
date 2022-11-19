#include<bits/stdc++.h>
#include "xemay.h"
using namespace std;

xeMay::xeMay(){}
xeMay::~xeMay(){}
xeMay::xeMay(string tenChuXe, string canCuocCongDan, string hangSanXuat, string loaiXe, string mauXe, string tenXe, string bienSoXe, 
int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe) : oTo(tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe, tenXe, bienSoXe, 
 ngayDangKyXe,  thangDangKyXe,  namDangKyXe,  noiDangKyXe){

}
void xeMay::checkHangSanXuat(string& hangSanXuat) {
    a:
        getline(cin, hangSanXuat);
        chuyenDoi(hangSanXuat);
        if(hangSanXuat != "Honda" && hangSanXuat != "Triumph" && hangSanXuat != "Yamaha" && hangSanXuat != "Harley Davidson" && hangSanXuat != "Benelli" &&
        hangSanXuat != "Kawasaki" && hangSanXuat != "Ducati" && hangSanXuat != "Suzuki" && hangSanXuat != "Bmw" && hangSanXuat != "Zongshen" && hangSanXuat != "Sym"
        && hangSanXuat != "Yadea" && hangSanXuat != "Niu" && hangSanXuat != "Piaggio" && hangSanXuat != "Vinfast") {
            cout << "Hang ban nhap khong ton tai. Vui long nhap lai!" << endl;
            goto a;
        }
}
void xeMay::checkBienSoXe(string& bienSoXe) {

}
void xeMay::nhapThongTin() {
   cin.ignore();
   cout << "Nhap thong tin cua xe may: " << endl;
   cout << endl;
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
void xeMay::capNhatSoLuongXeMay() {
    ifstream filein;
    filein.open("soluongxemay.txt", ios_base::in);
    int count;
    filein >> count;
    count++;
    filein.close();
    ofstream fileout;
    fileout.open("soluongxemay.txt", ios_base::in);
    fileout << count;
    fileout.close();
}
void xeMay::nhapThongTinVaoFile() {
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
    this->capNhatSoLuongXeMay();
    ofstream fileout3;
    fileout3.open("xemay.txt", ios_base::app);
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
void xeMay::kiemTraKiemDinh(int d, int m, int y) {
    int kc1 = day(this->ngayDangKyXe, this->thangDangKyXe, this->namDangKyXe);
        int kc2 = day(d, m, y);
        int kc = abs(kc2 - kc1);
        cout << "\n";
        if (kc > 182) {
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