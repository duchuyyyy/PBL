#include<iostream>
#include<string>
#include<windows.h>
#include"PBL.cpp"
#include"Node.cpp"
#include "Linkedlist.cpp"
//#include "LinkedList.cpp"
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
    printf("\t\t|   //!Chua lam 8. Xoa phuong tien trong thanh pho (Chua xoa trong file khu vuc)    |\n");
    printf("\t\t|   //!Chua lam 9. Cap nhat thong tin phuong tien                                   |\n");
    printf("\t\t|   //!Chua lam 10. Sap xep cac phuong  tien                                        |\n");
    printf("\t\t|   0. Thoat chuong trinh                                                           |\n");
    printf("\t\t|                                                                                   |\n");
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
                ifstream filecountHC, filecountTK, filecountLC, filecountHS;
                ifstream filecountHV, filecountCL, filecountNHS, filecountST, filecount;
                int slptHC, slptTK, slptLC, slptHS, slptHV, slptCL, slptNHS, slptST, slpt;
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
                //!Chinh lai cai bang
                cout << "_____________________________________________________________" << endl;
                cout << "|         THONG KE SO LUONG PHUONG TIEN THEO KHU VUC        |" << endl;
                cout << "|___________________________________________________________|" << endl;
                cout << "\t" << "_ Quan Hai Chau:" << "\t\t" << slptHC << endl;
                cout << "\t" << "_ Quan Thanh Khe:" << "\t\t" << slptTK << endl;
                cout << "\t" << "_ Quan Cam Le:" <<  "\t\t\t" << slptCL << endl;
                cout << "\t" << "_ Quan Son Tra:" << "\t\t\t" << slptST << endl;
                cout << "\t" << "_ Quan Ngu Hanh Son:" << "\t\t" << slptNHS << endl;
                cout << "\t" << "_ Quan Lien Chieu:" << "\t\t" << slptLC << endl;
                cout << "\t" << "_ Huyen Hoa Vang:" << "\t\t" << slptHV << endl;
                cout << "\t" << "_ Huyen Hoang Sa:" << "\t\t" << slptHS << endl;
                cout << "\t" << "_ Toan thanh pho:" << "\t\t" << slpt << endl;
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
                LinkedList *list = new LinkedList();
                string canCuocCongDan;
                list->readFile();
                cin.ignore();
                cout << "Nhap so can cuoc cong dan cua phuong tien muon xoa : ";
                getline(cin, canCuocCongDan);
                list->deleteNode(canCuocCongDan);
                list->printList();
                list->writeFile();
                break;
            }
        }
    }while(sel != 0);   
    return 0;
}

