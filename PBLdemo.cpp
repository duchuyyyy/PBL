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
    void thongTinChuXe(); 
    bool checkYear(int y) {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
            return true;
        }
        else {
            return false;
        }
    }
    bool checkInput(int d, int m, int y) {
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
    void input(int& d, int& m, int& y) {
        do {
            cout << "Nhap ngay: " << endl;
            cin >> d;
            cout << "Nhap thang: " << endl;
            cin >> m;
            cout << "Nhap nam: " << endl;
            cin >> y;
        } while (checkInput(d, m, y) == false);
    }
    int dmax(int m, int y) {
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
    int day(int d, int m, int y) {
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
    void kiemTraKiemDinh() {
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
};
phuongTien::phuongTien(){
	    this->hangSanXuat = "Honda";
        this->bienSoXe = 43-999999;
        this->chuXe = "Phan Hoang Duc Huy";
        this->ngayDangKyXe = 23;
        this->thangDangKyXe = 11;
        this->namDangKyXe = 2020;
        this->noiDangKyXe = "Thanh Khe";
}
void phuongTien::setData(string hangSanXuat, string bienSoXe, string chuXe, int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe){
	    this->hangSanXuat = hangSanXuat;
        this->bienSoXe = bienSoXe;
        this->chuXe = chuXe;
        this->ngayDangKyXe = ngayDangKyXe;
        this->thangDangKyXe = thangDangKyXe;
        this->namDangKyXe = namDangKyXe;
        this->noiDangKyXe = noiDangKyXe;
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
void phuongTien::thongTinChuXe(){
 	    cout << "Hang xe: " << this->getHangSanXuat() << endl;
        cout << "Bien so xe: " << this->getBienSoXe() << endl;
        cout << "Chu xe: " << this->getChuXe() << endl;
        cout << "Ngay dang ky xe: " << this->getNgayDangKyXe() << endl;
        cout << "Thang dang ky xe: " << this->getThangDangKyXe() << endl;
        cout << "Nam dang ky xe: " << this->getNamDangKyXe() << endl;
        cout << "Noi dang ky xe: " << this->getNoiDangKyXe() << endl;
 }

int main() {
    phuongTien pt;
    pt.nhapThongTin();
    pt.thongTinChuXe();
    pt.kiemTraKiemDinh();
}


