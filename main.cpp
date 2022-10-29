#include<bits/stdc++.h>
#include"PBL.cpp"
using namespace std;
void title()//Tieu de
{
	printf("\t\t-------------------------------------------------------------------------------------\n");
    printf("\t\t|                   DO AN PBL2: DU AN CO SO LAP TRINH                               |\n");
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
    printf("\t\t|                CHUONG TRINH QUAN LY CAC PHUONG TIEN GIAO THONG                    |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|   1. Nhap thong tin cua phuong tien                                               |\n");
    printf("\t\t|   2. Kiem tra kiem dinh tat ca cac phuong tien                                    |\n");
    printf("\t\t|   3. In ra tat ca cac phuong tien trong thanh pho                                 |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|   0. Thoat chuong trinh                                                           |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t-------------------------------------------------------------------------------------\n");
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
                phuongTien pt[200];
                ifstream filein;
	            char filename[30];
	            cout << "Nhap ten file can kiem tra: ";
	            cin >> filename;
                strcat(filename,".txt");
	            filein.open(filename, ios_base::out);
	            int soLuongPhuongTien;
	            filein >> soLuongPhuongTien;
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
                ifstream filein;
	            char filename[30];
	            cout << "Nhap ten file can kiem tra: ";
	            cin >> filename;
                strcat(filename,".txt");
	            filein.open(filename, ios_base::out);
	            int soLuongPhuongTien;
	            filein >> soLuongPhuongTien;
                for(int i = 0; i < soLuongPhuongTien; ++i){
    	             pt[i].docFile(filein);
                     pt[i].thongTinXe();
                     cout << "\n";
	             }
                 filein.close();
                 break;
            }

        }
    }while(sel != 0);   
    return 0;
}

//pt.nhapThongTin();
    /* do {
        cout<<"1.Them thong tin phuong tien vao file";
        cout<<"2. Kiem dinh xe";
        cout <<"3.In ra tat ca phuong tien trong thanh pho";
        cout<<"o.Thoat chuong trinh"
        cout<<"Ban chon";
        int luachon;
        cin>>luachon;
        switch(luachon)
        {
            case 0 : break;
            case 1 :
            pt->nhapPhuongTienVaoFile();
            break;
            case 2 : 
            int d, m, y;
            cout << "Nhap ngay kiem dinh: " << endl;
            pt[1].input(d, m, y);
            for(int i = 0; i < soLuongPhuongTien; ++i){
    	        pt[i].thongTinXe();
    	        pt[i].kiemTraKiemDinh(d,m,y);
    	        cout << "\n";
	       }
           break;
           case 3:
            for(int i = 0; i < soLuongPhuongTien; ++i){
            pt[i].thongTinXe();
            cout << "\n";
            break;
    }
        }
    }
    while(luachon)*/
    /*//! In ra cac phuong tien trong thanh pho
    for(int i = 0; i < soLuongPhuongTien; ++i){
        pt[i].thongTinXe();
        cout << "\n";
    }
    filein.close();*/
    //phuongTien pt;
    /* phuongTien pt;
    pt.nhapPhuongTienVaoFile(); */