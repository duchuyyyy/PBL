#include<bits/stdc++.h>
#include "xemay.h"
using namespace std;

void uppercase(string &s1){
	for(int i = 0; i < s1.size(); ++i){
		s1[i] = toupper(s1[i]);
	}
}
void chuyendoi(string &x){
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
xeMay::xeMay(){}
xeMay::~xeMay(){}
xeMay::xeMay(string tenChuXe, string canCuocCongDan, string hangSanXuat, string loaiXe, string mauXe, string tenXe, string bienSoXe, 
int ngayDangKyXe, int thangDangKyXe, int namDangKyXe, string noiDangKyXe) : oTo(tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe, tenXe, bienSoXe, 
 ngayDangKyXe,  thangDangKyXe,  namDangKyXe,  noiDangKyXe){

}
void xeMay::checkHangSanXuat(string& hangSanXuat) {
    a:
        getline(cin, hangSanXuat);
        chuyendoi(hangSanXuat);
        if(hangSanXuat != "Honda" && hangSanXuat != "Triumph" && hangSanXuat != "Yamaha" && hangSanXuat != "Harley Davidson" && hangSanXuat != "Benelli" &&
        hangSanXuat != "Kawasaki" && hangSanXuat != "Ducati" && hangSanXuat != "Suzuki" && hangSanXuat != "Bmw" && hangSanXuat != "Zongshen" && hangSanXuat != "Sym"
        && hangSanXuat != "Yadea" && hangSanXuat != "Niu" && hangSanXuat != "Piaggio" && hangSanXuat != "Vinfast") {
            cout << "Hang ban nhap khong ton tai. Vui long nhap lai!" << endl;
            goto a;
        }
}
int checkkytu(string& s) {
    for(int i = 0; i < s.length(); ++i){
    	if(isalpha(s[i])) {
    		return 0;
		}
	}
    return 1;
}
void xeMay::setBienSoXe(string& khuVuc, string& bienSoXe) {
        string bienSo;
        if(khuVuc == "Thanh Khe") {
        a:
            cout << "Nhap 5 chu so:" << endl;
            bienSoXe = "43D1-";
            cout << "43D1-";
            getline(cin, bienSo);
            int check = checkkytu(bienSo);
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
        else if(khuVuc == "Son Tra") {
        b:
            cout << "Nhap 5 chu so:" << endl;
            bienSoXe = "43E1-";
            cout << "43E1-";
            getline(cin, bienSo);
            int check = checkkytu(bienSo);
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
        else if(khuVuc == "Lien Chieu") {
        c:
            cout << "Nhap 5 chu so:" << endl;
            bienSoXe = "43F1-";
            cout << "43F1-";
            getline(cin, bienSo);
            int check = checkkytu(bienSo);
            if(!check) {
                cout << "Bien so xe phai la chu so. Vui long nhap lai!" << endl;
                goto c;
            }
            if(bienSo.length() != 5) {
                cout << "Vui long nhap dung 5 chu so!" << endl;
                goto c;
            }
            bienSoXe.append(bienSo);
            int k;
            k = checkBienSoXe(bienSoXe);
            if(!k) {
                 cout << "Bien so xe bi trung! Nhap lai." << endl;
                 goto c;
            }
        }
        else if(khuVuc == "Cam Le") {
        d:
            cout << "Nhap 5 chu so:" << endl;
            bienSoXe = "43G1-";
            cout << "43G1-";
            getline(cin, bienSo);
            int check = checkkytu(bienSo);
            if(!check) {
                cout << "Bien so xe phai la chu so. Vui long nhap lai!" << endl;
                goto d;
            }
            if(bienSo.length() != 5) {
                cout << "Vui long nhap dung 5 chu so!" << endl;
                goto d;
            }
            bienSoXe.append(bienSo);
            int k;
            k = checkBienSoXe(bienSoXe);
            if(!k) {
                 cout << "Bien so xe bi trung! Nhap lai." << endl;
                 goto d;
            }
        }
        else if(khuVuc == "Ngu Hanh Son") {
        e:
            cout << "Nhap 5 chu so:" << endl;
            bienSoXe = "43H1-";
            cout << "43H1-";
            getline(cin, bienSo);
            int check = checkkytu(bienSo);
            if(!check) {
                cout << "Bien so xe phai la chu so. Vui long nhap lai!" << endl;
                goto e;
            }
            if(bienSo.length() != 5) {
                cout << "Vui long nhap dung 5 chu so!" << endl;
                goto e;
            }
            bienSoXe.append(bienSo);
            int k;
            k = checkBienSoXe(bienSoXe);
            if(!k) {
                 cout << "Bien so xe bi trung! Nhap lai." << endl;
                 goto e;
            }
        }
        else if(khuVuc == "Hoa Vang") {
        n:
            cout << "Nhap 5 chu so:" << endl;
            bienSoXe = "43K1-";
            cout << "43K1-";
            getline(cin, bienSo);
            int check = checkkytu(bienSo);
            if(!check) {
                cout << "Bien so xe phai la chu so. Vui long nhap lai!" << endl;
                goto n;
            }
            if(bienSo.length() != 5) {
                cout << "Vui long nhap dung 5 chu so!" << endl;
                goto n;
            }
            bienSoXe.append(bienSo);
            int k;
            k = checkBienSoXe(bienSoXe);
            if(!k) {
                 cout << "Bien so xe bi trung! Nhap lai." << endl;
                 goto n;
            }
        }
        else if(khuVuc == "Hoang Sa") {
        m:
            cout << "Nhap 5 chu so:" << endl;
            bienSoXe = "43L1-";
            cout << "43L1-";
            getline(cin, bienSo);
            int check = checkkytu(bienSo);
            if(!check) {
                cout << "Bien so xe phai la chu so. Vui long nhap lai!" << endl;
                goto m;
            }
            if(bienSo.length() != 5) {
                cout << "Vui long nhap dung 5 chu so!" << endl;
                goto m;
            }
            bienSoXe.append(bienSo);
            int k;
            k = checkBienSoXe(bienSoXe);
            if(!k) {
                 cout << "Bien so xe bi trung! Nhap lai." << endl;
                 goto m;
            }
        }
        else if(khuVuc == "Hai Chau") {
        z:
            cout << "Nhap 5 chu so:" << endl;
            bienSoXe = "43C1-";
            cout << "43C1-";
            getline(cin, bienSo);
            int check = checkkytu(bienSo);
            if(!check) {
                cout << "Bien so xe phai la chu so. Vui long nhap lai!" << endl;
                goto z;
            }
            if(bienSo.length() != 5) {
                cout << "Vui long nhap dung 5 chu so!" << endl;
                goto z;
            }
            bienSoXe.append(bienSo);
            int k;
            k = checkBienSoXe(bienSoXe);
            if(!k) {
                 cout << "Bien so xe bi trung! Nhap lai." << endl;
                 goto z;
            }
        }
}
void xeMay::nhapThongTin() {
   cin.ignore();
   cout << "Nhap thong tin cua xe may: " << endl;
   cout << endl;
   cout << "Nhap ho ten chu xe: " << endl;
   getline(cin,this->tenChuXe);
   chuyendoi(this->tenChuXe);
   cout << "Nhap can cuoc cong dan: " << endl;
   this->checkCanCuocCongDan(this->canCuocCongDan);
   cout << "Nhap hang xe: " << endl;
   this->checkHangSanXuat(this->hangSanXuat);
   cout << "Nhap loai xe: " << endl;
   getline(cin, this->loaiXe);
   cout << "Nhap mau xe: " << endl;
   getline(cin, this->mauXe);
   chuyendoi(this->mauXe);
   cout << "Nhap ten xe: " << endl;
   getline(cin, this->tenXe);
   chuyendoi(this->tenXe);
   cout << "Nhap noi dang ky xe: " << endl;
   this->checkNoiDangKyXe(this->noiDangKyXe);
   cout << "Nhap bien so xe: " << endl;
   this->setBienSoXe(this->noiDangKyXe, this->bienSoXe);
   this->ghiBienSoXe(this->bienSoXe);
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
    uppercase(khuvuc);
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