#include<bits/stdc++.h>
#include"PBL.cpp"
using namespace std;
void title()//Tieu de
{
	printf("\t\t-------------------------------------------------------------------------------------\n");
    printf("\t\t|                         DO AN PBL2: DU AN CO SO LAP TRINH                         |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|           DE TAI: XAY DUNG UNG DUNG QUAN LY CAC PHUONG TIEN GIAO THONG            |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t| Giao vien huong dan            Sinh vien thuc hien          Ma sinh vien          |\n");
    printf("\t\t| Nguyen Thi Minh Hy             Phan Hoang Duc Huy           102210256             |\n");
    printf("\t\t|                                Le Ngoc Anh Dung             102210249             |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t-------------------------------------------------------------------------------------\n");
    printf("\n");
}
void menu(){
    printf("\n");
    printf("\t\t-------------------------------------------------------------------------------------\n");
    printf("\t\t|                    CHUONG TRINH QUAN LY CAC PHUONG TIEN GIAO THONG                |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|   1. Nhap thong tin cua phuong tien                                               |\n");
    printf("\t\t|   2. Kiem tra kiem dinh tat ca cac phuong tien                                    |\n");
    printf("\t\t|   3. In ra tat ca cac phuong tien trong thanh pho                                 |\n");
    printf("\t\t|   4. In ra phuong tien theo khu vuc                                               |\n");
    printf("\t\t|   5. (Dang bi loi)In ra tat ca phuong tien                                        |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|   0. Thoat chuong trinh                                                           |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t-------------------------------------------------------------------------------------\n");
}
int check(string s1, string s2){
    int flag = 1;
    int n = 0;
    while (s1[n] != '\0') {
      if(s1[n] != s2[n]) {
         flag = 0;
         break;
      }
      n++;
   }
   return flag;
}
int main() {
    title();
    int sel;
    do{
        menu();
        cout << "Nhap lua chon: ";
        cin >> sel;

        switch(sel){
            case 1:
            {
                phuongTien pt;
                pt.nhapPhuongTienVaoFile();
                break;
            }
            case 2:
            {
                int soLuongPhuongTien;
	            ifstream filecount;
                filecount.open("soluongphuongtien.txt", ios_base::in);
                filecount >> soLuongPhuongTien;
                filecount.close();
                ifstream filein;
	            filein.open("thongtinxe.txt", ios_base::out);
                phuongTien pt[200];
                int d, m, y;
                cout << "Nhap ngay kiem dinh: " << endl;
                pt[1].input(d, m, y);
                for(int i = 0; i < soLuongPhuongTien; ++i){
    	             pt[i].docFile(filein);
                     pt[i].thongTinXe();
                     pt[i].kiemTraKiemDinh(d,m,y);
                     cout << "\n";
	             }
                 filein.close();
                 break;
            }
            case 3:
            {
                phuongTien pt[200];
                ifstream filecount;
                filecount.open("soluongphuongtien.txt", ios_base::in);
                int soLuongPhuongTien;
                filecount >> soLuongPhuongTien;
                filecount.close();
                ifstream filein;
                filein.open("thongtinxe.txt", ios_base::in);
                for(int i = 0; i < soLuongPhuongTien; ++i){
    	             pt[i].docFile(filein);
                     pt[i].thongTinXe();
                     cout << "\n";
	             }
                 filein.close();
                 break;
            }
            case 4:
            {
                phuongTien pt[200];
                ifstream filein;
	            char filename[30];
	            cout << "Nhap ten file can kiem tra: ";
	            cin >> filename;
                strcat(filename,".txt");
	            filein.open(filename, ios_base::out);
	            int soLuongPhuongTien;
	            filein >> soLuongPhuongTien;
                string khuVuc;
                cout << "Nhap khu vuc: ";
                cin.ignore();
                getline(cin, khuVuc);
                for(int i = 0; i < soLuongPhuongTien; ++i){
    	             pt[i].docFile(filein);
                     string temp = pt[i].getNoiDangKyXe();
                     int k = check(khuVuc, temp);
                     if(k == 1){
                        pt[i].thongTinXe();
                     }
	             }
                 filein.close();
                 break;
            }
            case 5:
            {
                /*phuongTien pt[200];
                ifstream filein;
	            char filename[30];
	            cout << "Nhap ten file can kiem tra: ";
	            cin >> filename;
                strcat(filename,".txt");
	            filein.open(filename, ios_base::in);
	            for(int i = 0; i < 2; ++i){
                    pt[i].docFile(filein);
                    string temp = pt[i].getNoiDangKyXe();
                    cout << temp;
                }*/
                phuongTien pt[200];
                pt->inTatCaPhuongTien();
            }

        }
    }while(sel != 0);   
    return 0;
}

