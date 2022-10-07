#include<iostream>
#include<ctime>
#include<string>
#include<math.h>
using namespace std;

class phuongTien {
    string hangSanXuat;
    int ngaySanXuatXe;
    string bienSoXe;
    string chuXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
public:
    phuongTien();
    void setData(string hangSanXuat, string bienSoXe, string chuXe, int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe);
    void nhapThongTin();
    string getHangSanXuat() {
        return hangSanXuat;
    }
    string getBienSoXe() {
        return bienSoXe;
    }
    string getChuXe() {
        return chuXe;
    }
    int getNgayDangKyXe() {
        return ngayDangKyXe;
    }
    int getThangDangKyXe() {
        return thangDangKyXe;
    }
    int getNamDangKyXe() {
        return namDangKyXe;
    }
    string getNoiDangKyXe() {
        return noiDangKyXe;
    }
    void thongTinXe(); 
    bool checkYear(int y);
    bool checkInput(int d, int m, int y);
    void input(int& d, int& m, int& y);
    int dmax(int m, int y);
    int day(int d, int m, int y);
    void kiemTraKiemDinh();
    void thongTinPhuongTienKhuVuc();
};
phuongTien::phuongTien(){}
void phuongTien::setData(string hangSanXuat, string bienSoXe, string chuXe, int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe){
	    this->hangSanXuat = hangSanXuat;
        this->bienSoXe = bienSoXe;
        this->chuXe = chuXe;
        this->ngayDangKyXe = ngayDangKyXe;
        this->thangDangKyXe = thangDangKyXe;
        this->namDangKyXe = namDangKyXe;
        this->noiDangKyXe = noiDangKyXe;
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
    do {
            cout << "Nhap ngay: " << endl;
            cin >> d;
            cout << "Nhap thang: " << endl;
            cin >> m;
            cout << "Nhap nam: " << endl;
            cin >> y;
        } while (checkInput(d, m, y) == false);
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
void phuongTien::kiemTraKiemDinh(){
        int d, m, y;
        cout << "Nhap ngay kiem dinh: " << endl;
        input(d, m, y);
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
    cout << "Nhap hang xe: " << endl;
    getline(cin,this->hangSanXuat);
    cout << "Nhap bien so xe: " << endl;
    getline(cin,this->bienSoXe);
    cout << "Nhap ho ten chu xe: " << endl;
    getline(cin,this->chuXe);
    cout << "Nhap noi dang ky xe: " << endl;
    getline(cin,this->noiDangKyXe);
    cout << "Nhap ngay, thang, nam dang ky xe: " << endl;
    this->input(this->ngayDangKyXe, this->thangDangKyXe, this->namDangKyXe);
}
void phuongTien::thongTinXe(){
 	    cout << "Hang xe: " << this->getHangSanXuat() << endl;
        cout << "Bien so xe: " << this->getBienSoXe() << endl;
        cout << "Chu xe: " << this->getChuXe() << endl;
        cout << "Ngay dang ky xe: " << this->getNgayDangKyXe() << endl;
        cout << "Thang dang ky xe: " << this->getThangDangKyXe() << endl;
        cout << "Nam dang ky xe: " << this->getNamDangKyXe() << endl;
        cout << "Noi dang ky xe: " << this->getNoiDangKyXe() << endl;
 }
void phuongTien::thongTinPhuongTienKhuVuc(){
   string khuVuc;
    cout << "Nhap khu vuc can kiem tra: ";
    cin.ignore();
    getline(cin, khuVuc);
    //cin >> khuVuc;
    if(this->noiDangKyXe == khuVuc){
        cout << "Chu xe: " << this->chuXe << endl;
        cout << "Bien so xe: " << this->bienSoXe << endl;
        cout << "Hang xe: " << this->hangSanXuat << endl;
    } else{
    	cout << "Nhap sai ten khu vuc" << endl;
	}
}
int main() {
    phuongTien pt;
    pt.nhapThongTin();
    //pt.thongTinXe();
    //pt.kiemTraKiemDinh();
    pt.thongTinPhuongTienKhuVuc();
    return 0;
}


