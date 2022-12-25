#include <bits/stdc++.h>
#include <windows.h>
#include "oto.cpp"
#include "Node.cpp"
#include "Linkedlist.cpp"
#include "xemay.cpp"
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
    printf("\t\t|   3. In ra danh sach xe may trong thanh pho                                       |\n");
    printf("\t\t|   4. In ra danh sach cac phuong tien theo khu vuc                                 |\n");
    printf("\t\t|   5. Thong ke so luong phuong tien theo khu vuc                                   |\n");
    printf("\t\t|   6. Tim kiem phuong tien trong thanh pho                                         |\n");
    printf("\t\t|   7. Xoa phuong tien trong thanh pho                                              |\n");
    printf("\t\t|   8. Cap nhat phuong tien trong thanh pho                                         |\n");
    printf("\t\t|   9. In ra danh sach o to trong thanh pho                                         |\n");
    printf("\t\t|   10.In ra danh sach cac phuong tien trong thanh pho                              |\n");
    printf("\t\t|   0. Thoat chuong trinh                                                           |\n");
    printf("\t\t-------------------------------------------------------------------------------------\n");
}
void khuVuc(){
    printf("\n");
    printf("\t\t----------------------------------------------------------------\n");
    printf("\t\t|          CAC PHUONG TIEN THEO KHU VUC                         |\n");
    printf("\t\t|                                                               |\n");
    printf("\t\t|               1. QUAN HAI CHAU                                |\n");
    printf("\t\t|               2. QUAN THANH KHE                               |\n");
    printf("\t\t|               3. QUAN CAM LE                                  |\n");
    printf("\t\t|               4. QUAN LIEN CHIEU                              |\n");
    printf("\t\t|               5. QUAN NGU HANH SON                            |\n");
    printf("\t\t|               6. QUAN SON TRA                                 |\n");
    printf("\t\t|               7. HUYEN HOA VANG                               |\n");
    printf("\t\t|               8. HUYEN HOANG SA                               |\n");
    printf("\t\t|               0. THOAT                                        |\n");
    printf("\t\t----------------------------------------------------------------\n");
}
void thulong1()
{
    printf("\t\t----------------------------------------------------------------\n");
    printf("\t\t|         BAN CO MUON LUU  ?                                    |\n");
    printf("\t\t|               1. CO                                           |\n");
    printf("\t\t|               2. KHONG                                        |\n");
    printf("\t\t----------------------------------------------------------------\n");   
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
void xoaBienSo(string bienso) {
	
	string line;
	ifstream fin;
	fin.open("biensoxe.txt");
	ofstream temp;
	temp.open("temp.txt");
	while (getline(fin,line))
	{
    	 if (line != bienso)
            temp << line << endl;
	}
	temp.close();
	fin.close();
	remove("biensoxe.txt");
	rename("temp.txt","biensoxe.txt");
}
void thongKeSoLuong() {
    ifstream filecountHC, filecountTK, filecountLC, filecountHS;
    ifstream filecountHV, filecountCL, filecountNHS, filecountST, filecount, filecountOT, filecountXM;
    int slptHC, slptTK, slptLC, slptHS, slptHV, slptCL, slptNHS, slptST, slptOT, slptXM, slpt;
    filecountHC.open("soluongphuongtienHaiChau.txt", ios_base::in);
    filecountHC >> slptHC;
    filecountHC.close();
    filecountTK.open("soluongphuongtienThanhKhe.txt", ios_base::in);
    filecountTK >> slptTK;
    filecountTK.close();
    filecountLC.open("soluongphuongtienLienChieu.txt", ios_base::in);
    filecountLC >> slptLC;
    filecountLC.close();
    filecountHS.open("soluongphuongtienHoangSa.txt", ios_base::in);
    filecountHS >> slptHS;
    filecountHS.close();
    filecountNHS.open("soluongphuongtienNguHanhSon.txt", ios_base::in);
    filecountNHS >> slptNHS;
    filecountNHS.close();
    filecountHV.open("soluongphuongtienHoaVang.txt", ios_base::in);
    filecountHV >> slptHV;
    filecountHV.close();
    filecountCL.open("soluongphuongtienCamLe.txt", ios_base::in);
    filecountCL >> slptCL;
    filecountCL.close();
    filecountST.open("soluongphuongtienSonTra.txt", ios_base::in);
    filecountST >> slptST;
    filecountST.close();
    filecount.open("soluongphuongtien.txt", ios_base::in);
    filecount >> slpt;
    filecount.close();
    filecountOT.open("soluongoto.txt", ios_base::in);
    filecountOT >> slptOT;
    filecountOT.close();
    filecountXM.open("soluongxemay.txt", ios_base::in);
    filecountXM >> slptXM;
    filecountXM.close();
    cout << "_________________________________________________________________" << endl;
    cout << "|         THONG KE SO LUONG PHUONG TIEN THEO KHU VUC            |" << endl;
    cout << "|_______________________________________________________________|" << endl;
    cout << "|" << "\t" << "Quan Hai Chau:" << "\t\t" << slptHC   <<  "\t\t\t\t" <<  "|"  << endl;
    cout << "|" << "\t" << "Quan Thanh Khe:" << "\t\t" << slptTK <<  "\t\t\t\t" <<  "|" << endl;
    cout << "|" << "\t" << "Quan Cam Le:" <<  "\t\t" << slptCL <<   "\t\t\t\t" << "|" << endl;
    cout << "|" << "\t" << "Quan Son Tra:" << "\t\t" << slptST <<  "\t\t\t\t"  << "|" << endl;
    cout << "|" << "\t" << "Quan Ngu Hanh Son:" << "\t" << slptNHS << "\t\t\t\t" << "|" << endl;
    cout << "|" << "\t" << "Quan Lien Chieu:" << "\t" << slptLC <<  "\t\t\t\t" << "|" << endl;
    cout << "|" << "\t" << "Huyen Hoa Vang:" << "\t\t" << slptHV <<   "\t\t\t\t" <<  "|" << endl;
    cout << "|" << "\t" << "Huyen Hoang Sa:" << "\t\t" << slptHS <<   "\t\t\t\t" << "|" << endl;
    cout << "|_______________________________________________________________|" << endl;
    cout << "|" << "\t" << "Toan thanh pho:" << "\t\t" << slpt <<    "\t\t\t\t"  <<   "|" << endl;
    cout << "|" << "\t" << "Xe may: " << "\t\t" << slptXM << "\t\t\t\t" << "|" << endl;
    cout << "|" << "\t" << "O to: " << "\t\t\t" << slptOT << "\t\t\t\t" << "|" << endl;
    cout << "|_______________________________________________________________|" << endl;
}
void luaChonNhapPhuongTien() {
    printf("\t\t----------------------------------------------------------------\n");
    printf("\t\t|          LUA CHON LOAI PHUONG TIEN CAN NHAP                   |\n");
    printf("\t\t|                                                               |\n");
    printf("\t\t|               1. XE MAY                                       |\n");
    printf("\t\t|               2. O TO                                         |\n");
    printf("\t\t|                                                               |\n");
    printf("\t\t|               0. THOAT                                        |\n");
    printf("\t\t|                                                               |\n");
    printf("\t\t----------------------------------------------------------------\n");
}
void luaChonTimKiem() {
    printf("\t\t----------------------------------------------------------------\n");
    printf("\t\t|          LUA CHON TIM KIEM PHUONG TIEN                        |\n");
    printf("\t\t|                                                               |\n");
    printf("\t\t|      1. Tim kiem theo can cuoc cong dan                       |\n");
    printf("\t\t|      2. Tim kiem theo bien so xe                              |\n");
    printf("\t\t|                                                               |\n");
    printf("\t\t|               0. THOAT                                        |\n");
    printf("\t\t|                                                               |\n");
    printf("\t\t----------------------------------------------------------------\n");
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
                int sel;
                do {
                    luaChonNhapPhuongTien();
                    cout << "Nhap lua chon: " << endl;
                    cin >> sel;
                    switch (sel)
                    {
                    case 1:
                    {
                        xeMay xm;
                        xm.nhapThongTinVaoFile();
                        break;
                    }
                    case 2:
                    {
                        oTo ot;
                        ot.nhapPhuongTienVaoFile();
                    }
                    
                    default:
                        break;
                    }
                } while(sel != 0);
                break;
            }
            case 2:
            {
                int sel;
                do {
                    luaChonNhapPhuongTien();
                    cout << "Nhap lua chon: " << endl;
                    cin >> sel;
                    switch (sel)
                    {
                    case 1:
                    {
                        int soLuongPhuongTien;
	                    ifstream filecount;
                        filecount.open("soluongxemay.txt", ios_base::in);
                        filecount >> soLuongPhuongTien;
                        filecount.close();
                        ifstream filein;
	                    filein.open("xemay.txt", ios_base::out);
                        xeMay pt[200];
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
                    case 2:
                    {
                        int soLuongPhuongTien;
	                    ifstream filecount;
                        filecount.open("soluongoto.txt", ios_base::in);
                        filecount >> soLuongPhuongTien;
                        filecount.close();
                        ifstream filein;
	                    filein.open("oto.txt", ios_base::out);
                        oTo pt[200];
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
                    }
                }while(sel != 0);
                break;
            }
            case 3:
            {
                LinkedList *list = new LinkedList();
                list->readFileXeMay();
                list->printList();
                break;
            }
            case 4:
            {
                int sel;
                do{
                    khuVuc();
                    cout << "Chon khu vuc: ";
                    cin >> sel;
                    switch (sel)
                    {
                    case 1:
                    {
                        LinkedList *list = new LinkedList();
                        list->readFileByRegion1();
                        list->printList();
                        break;
                    }
                     case 2:
                    {
                        LinkedList *list = new LinkedList();
                        list->readFileByRegion2();
                        list->printList();
                        break;
                    }
                     case 3:
                    {
                        LinkedList *list = new LinkedList();
                        list->readFileByRegion3();
                        list->printList();
                        break;
                    }
                     case 4:
                    {
                        LinkedList *list = new LinkedList();
                        list->readFileByRegion4();
                        list->printList();
                        break;
                    }
                     case 5:
                    {
                        LinkedList *list = new LinkedList();
                        list->readFileByRegion5();
                        list->printList();
                        break;
                    }
                     case 6:
                    {
                        LinkedList *list = new LinkedList();
                        list->readFileByRegion6();
                        list->printList();
                        break;
                    }
                     case 7:
                    {
                        LinkedList *list = new LinkedList();
                        list->readFileByRegion7();
                        list->printList();
                        break;
                    }
                     case 8:
                    {
                        LinkedList *list = new LinkedList();
                        list->readFileByRegion8();
                        list->printList();
                        break;
                    }
                    
                    default:
                        break;
                    }
                }while(sel != 0);
                

                break;
            }
            case 5:
            {
                thongKeSoLuong();
                break;
            }
            case 6:
            {
                int sel;
                do {
                    luaChonTimKiem();
                    cout << "Chon cach tim kiem: ";
                    cin >> sel;
                    switch (sel)
                    {
                    case 1:
                    {
                        LinkedList *list = new LinkedList();
                        list->readFile();
                        list->searchNodeByCCCD();
                        break;
                    }
                    case 2:
                    {
                        LinkedList *list = new LinkedList();
                        list->readFile();
                        list->searchNodeByBienSo();
                        break;
                    }
                    default:
                        break;
                    }
                }while(sel != 0);
               
                break;
            }
            case 7:
            {  
                string khuvuc;
                string bienso;
                LinkedList *list = new LinkedList();
                LinkedList *list2 = new LinkedList();
                LinkedList *list3 = new LinkedList();
                cin.ignore();
                c7:
                cout << "Phuong tien muon xoa co bien so la: " << endl;
                b7:
                getline(cin,bienso);
                if(bienso.length() != 10 && bienso.length() != 9) {
		            cout << "Bien so xe khong hop le. vui long nhap lai!" << endl;
		            goto b7;
	            }
                oTo ot;
                int temp=ot.checkBienSoXe(bienso);
                if(temp==1){
                    cout<<"Khong tim thay bien !"<<endl;
                    goto c7;}
                    list->readFile();
                    list->deleteNode(bienso,khuvuc);
                    if (bienso.length()==10)
                    {
                        list2->readFileXeMay();
                        list2->deleteNode(bienso,khuvuc);   
                    }
                    else if(bienso.length()==9)
                    {
                        list3->readFileOTo();
                        list3->deleteNode(bienso,khuvuc);
    
                    }
                    upperCase(khuvuc);
                    cout<<"T3"<<endl;
                    LinkedList *list1 = new LinkedList();
                    if (khuvuc=="HAI CHAU")
                    {
                        list1->readFileByRegion1();
                    } 
                    else if (khuvuc=="THANH KHE")
                    {
                        list1->readFileByRegion2();
                    }
                    else if (khuvuc=="CAM LE")
                    {
                       list1->readFileByRegion3();  
                    }
                    else if (khuvuc=="LIEN CHIEU")
                    {
                       list1->readFileByRegion4();  
                    }
                    else if (khuvuc=="NGU HANH SON")
                    {
                       list1->readFileByRegion5();  
                    }
                    else if (khuvuc=="SON TRA")
                    {
                       list1->readFileByRegion6();  
                    }
                    else if (khuvuc=="HOA VANG")
                    {
                       list1->readFileByRegion7();  
                    }
                    else if (khuvuc=="HOANG SA")
                    {
                       list1->readFileByRegion8();  
                    }
                    list1->deleteNode(bienso,khuvuc);
                    upperCase(khuvuc);   
                    //list1->writeFileKhuVuc(khuvuc);
                thulong1();
                int sel1;
                cout << "Nhap lua chon: " << endl;
                cin >> sel1;
                switch (sel1)
                    {
                    case 1:
                    {
                        list->writeFile(1);
                        ifstream filein;
                        filein.open("soluongphuongtien.txt", ios_base::in);
                        int count;
                        filein >> count;
                        count--;
                        filein.close();
                        ofstream fileout;
                        fileout.open("soluongphuongtien.txt", ios_base::out);
                        fileout << count;
                        fileout.close();  
                        if (bienso.length()==10)
                        {
                        list2->writeFile(2);
                        ifstream filein1;
                        filein1.open("soluongxemay.txt", ios_base::in);
                        int count1;
                        filein1 >> count1;
                        count1--;
                        filein1.close();
                        ofstream fileout1;
                        fileout1.open("soluongxemay.txt", ios_base::out);
                        fileout1 << count1;
                        fileout1.close();
                        }else if (bienso.length()==9)
                        {
                        list3->writeFile(3);
                        ifstream filein2;
                        filein2.open("soluongoto.txt", ios_base::in);
                        int count2;
                        filein2 >> count2;
                        count2--;
                        filein2.close();
                        ofstream fileout2;
                        fileout2.open("soluongoto.txt", ios_base::out);
                        fileout2 << count2;
                        fileout2.close();
                        }
                        list1->capNhatSoLuongKhuVuc(khuvuc);
                        list1->writeFileKhuVuc(khuvuc);
                        xoaBienSo(bienso);
                     break;}
                    case 2:
                    { break;}
                    }    
                 break;
           }
            case 8:
            {
                LinkedList *list = new LinkedList();
                string biensoxe;
                string khuvuc,hoTen,canCuoc,mauXe;
                cin.ignore();
                list->readFile();
                a8:
                cout<<"Phuong tien can cap nhat co bien so la :";
                getline(cin,biensoxe);
                int temp;
                temp=list->update(biensoxe,khuvuc,hoTen,canCuoc,mauXe);
                if(temp==0){goto a8;}
                int sel; 
                    list->writeFile(1);
                    if (biensoxe.length()==10)
                    {
                        LinkedList *list2 = new LinkedList();
                        list2->readFileXeMay();
                        list2->updateKhuVuc(biensoxe,hoTen,canCuoc,mauXe);
                        list2->writeFile(2);
                    }
                    else if(biensoxe.length()==9)
                    {
                        LinkedList *list3 = new LinkedList();
                        list3->readFileOTo();
                        list3->updateKhuVuc(biensoxe,hoTen,canCuoc,mauXe);
                        list3->writeFile(3);
                    }
                    upperCase(khuvuc);
                    LinkedList *list1 = new LinkedList();
                    if (khuvuc=="HAI CHAU")
                    {
                        list1->readFileByRegion1();
                    } 
                    else if (khuvuc=="THANH KHE")
                    {
                        list1->readFileByRegion2();
                    }
                    else if (khuvuc=="CAM LE")
                    {
                       list1->readFileByRegion3();  
                    }
                    else if (khuvuc=="LIEN CHIEU")
                    {
                       list1->readFileByRegion4();  
                    }
                    else if (khuvuc=="NGU HANH SON")
                    {
                       list1->readFileByRegion5();  
                    }
                    else if (khuvuc=="SON TRA")
                    {
                       list1->readFileByRegion6();  
                    }
                    else if (khuvuc=="HOA VANG")
                    {
                       list1->readFileByRegion7();  
                    }
                    else if (khuvuc=="HOANG SA")
                    {
                       list1->readFileByRegion8();  
                    }
                    list1->updateKhuVuc(biensoxe,hoTen,canCuoc,mauXe);
                    list1->writeFileKhuVuc(khuvuc);
                break;
            }
            case 9:
            {
                LinkedList *list = new LinkedList();
                list->readFileOTo();
                list->printList();
                break;
            }
            case 10:
            {
                LinkedList *list = new LinkedList();
                list->readFile();
                list->printList();
                break;
            }
        }
    }while(sel != 0);   
    return 0;
}

