#include<iostream>
#include<string>
#include<windows.h>
#include "oto.cpp"
#include"Node.cpp"
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
    printf("\t\t|   3. In ra tat ca cac phuong tien trong thanh pho                                 |\n");
    printf("\t\t|   4. In ra phuong tien theo khu vuc                                               |\n");
    printf("\t\t|   5. Thong ke so luong phuong tien theo khu vuc                                   |\n");
    printf("\t\t|   6. Tim kiem phuong tien trong thanh pho                                         |\n");
    printf("\t\t|   7. Xoa phuong tien trong thanh pho                                              |\n");
    printf("\t\t|   8. Cap nhat phuong tien trong thanh pho                                         |\n");
    printf("\t\t|   9. In ra cac o to trong thanh pho                                               |\n");
    printf("\t\t|   10. In ra tat ca xe may trong thanh pho                                         |\n");
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
void thulong()
{
    printf("\t\t----------------------------------------------------------------\n");
    printf("\t\t|         BAN CO CHAC CHAN KHONG ?                              |\n");
    printf("\t\t|               1. CO                                           |\n");
    printf("\t\t|               2. KHONG                                        |\n");
    printf("\t\t----------------------------------------------------------------\n");
}
void thulong1()
{
    printf("\t\t----------------------------------------------------------------\n");
    printf("\t\t|         BAN CO MUON TIEP TUC  ?                               |\n");
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
    printf("\t\t|          LUA CHON LOAI PHUONG TIEN CAN                        |\n");
    printf("\t\t|                                                               |\n");
    printf("\t\t|               1. XE MAY                                       |\n");
    printf("\t\t|               2. O TO                                         |\n");
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
                list->readFile();
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
                LinkedList *list = new LinkedList();
                list->readFile();
                list->searchNode();
                break;
            }
            case 7:
            {  
                string khuvuc;
                LinkedList *list = new LinkedList();
                string bienso;
                list->readFile();
                cin.ignore();
                c7:
                cout << "Phuong tien muon xoa xe co bien so la: " << endl;
                b7:
                getline(cin, bienso);
                if(bienso.length() != 10 && bienso.length() != 9) {
		            cout << "Bien so xe khong hop le. vui long nhap lai!" << endl;
		            goto b7;
	            }
                int temp;
                temp=list->deleteNode(bienso,khuvuc,1);
                if(temp==0){ goto c7 ;}
                int sel;
                thulong();
                cout << "Nhap lua chon: " << endl;
                cin >> sel;
                switch (sel)
                {
                    case 1:
                    {
                    list->writeFile(1);
                    if (bienso.length()==10)
                    {
                        LinkedList *list2 = new LinkedList();
                        list2->readFileXeMay();
                        list2->deleteNode(bienso,khuvuc,3);
                        list2->writeFile(3);
                    }
                    else if(bienso.length()==9)
                    {
                        LinkedList *list2 = new LinkedList();
                        list2->readFileOTo();
                        list2->deleteNode(bienso,khuvuc,2);
                        list2->writeFile(2);
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
                    list1->deleteNodeKhuVuc(bienso);   
                    list1->writeFileKhuVuc(khuvuc);
                    break;
                }
                case 2:
                { 
                    break;
                } 
            } 
                thulong1();
                int sel1;
                cout << "Nhap lua chon: " << endl;
                cin >> sel1;
                switch (sel1)
                    {
                    case 1:
                    {
                        goto c7;
                        break;
                    }
                    case 2:
                    {
                        break;
                    }
                    }    
                break;
           }
            case 8:
            {
                LinkedList *list = new LinkedList();
                string canCuoc;
                string khuvuc,hoTen,cancuoc,bienSoXe,mauXe;
                cin.ignore();
                list->readFile();
                a8:
                cout<<"Chu xe can cap nhat co so can cuoc la :";
	            getline(cin,canCuoc);
                int temp;
                temp=list->update(canCuoc,khuvuc,hoTen,cancuoc,bienSoXe,mauXe);
                if(temp==0)
                {
                    goto a8;
                }
                list->writeFile(1);
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
                list1->updateKhuVuc(canCuoc,hoTen,cancuoc,bienSoXe,mauXe);
                list->writeFileKhuVuc(khuvuc);
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
                list->readFileXeMay();
                list->printList();
                break;
            }
        }
    }
    while(sel != 0);   
    return 0;
}



