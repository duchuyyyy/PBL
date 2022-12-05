#include<bits/stdc++.h>
#include"listCTKH.cpp"
#include"congtrinhkhoahoc.cpp"
#include"Baibao.cpp"
#include"Sach.cpp"
#include"Node.cpp"
using namespace std;
void luachon()
{
    cout<<"Hien thi danh sach "<<endl;
    cout<<"1.Bai bao"<<endl;
    cout<<"2.Sach"<<endl;
    cout<<"Nhap lua chon ";
}
int main(int argc, char const *argv[])
{
	int choose;
    do {
        cout << "\n------------Menu----------------" << endl
            << "1. Hien thi danh sach cac doi tuong" << endl
            << "2. Them vao vi tri bat ky          " << endl
            << "3. Them vao dau                    " << endl
            << "4. Them vao cuoi                   " << endl
            << "5. Xoa o vi tri bat ky             " << endl
            << "6. Xoa dau                         " << endl
            << "7. Xoa cuoi                        " << endl
            << "8. Tim kiem                        " << endl
            << "9. Sap xep                         " << endl
            << "0. Thoat chuong trinh              " << endl;
        cout << "Nhap lua chon: " << endl;
        cin >> choose;
        switch (choose)
        {
        case 0:{
            break;
        }
        case 1:{
            luachon();
            int sel;
            cin>>sel;
            switch (sel)
            {
            case 1:
            {
                List<Baibao> lis;
                cout << lis;  
                break;
            }
            case 2:
            {
                List<Sach> lis;
                cout << lis;
                break;
            }
            break;
           }
           break;
        }
        case 2:{
            int index;
            cout << "Nhap vi tri can them" << endl;
            cin >> index;
            luachon();
            int sel;
            cin>>sel;
            switch (sel)
            {
            case 1:
            {
                List<Baibao> lis;
                Baibao Li;
                cin>>Li;
                lis.addindex(Li,index);
                break;
            }
            case 2:
            {
                List<Sach> lis;
                Sach Li;
                cin>>Li;
                lis.addindex(Li,index);
                break;
            }
            }
            // li.show();
            break;
        }
        case 3:
        {
            luachon();
            int sel;
            cin>>sel;
            switch (sel)
            {
            case 1:
            {
                List<Baibao> lis;
                Baibao Li;
                lis.addfirst(Li);
                break;
            }
            case 2:
            {
                List<Sach> lis;
                Sach Li;
                cin>>Li;
                lis.addfirst(Li);
                break;
            }
            }
            break;
        }
        case 4:
        {
            luachon();
            int sel;
            cin>>sel;
            switch (sel)
            {
            case 1:
            {
                List<Baibao> lis;
                Baibao Li;
                cin>>Li;
                lis.addlast(Li);
                break;
            }
            case 2:
            {
                List<Sach> lis;
                Sach Li;
                cin>>Li;
                lis.addlast(Li);
                break;
            }
            }
            break;
        }
        case 5:
        {
            int index;
            cout << "\nNhap vi tri doi tuong can xoa!" << endl;
            cin >> index;
            luachon();
            int sel;
            cin>>sel;
            switch (sel)
            {
            case 1:
            {
                List<Baibao> lis;
                cin>>lis;
                lis.delete1(index);
                break;
            }
            case 2:
            {
                List<Sach> lis;
                cin>>lis;
                lis.delete1(index);
                break;
            }
            }
            break;
            // li.show();
        }
        case 6:
        {
            luachon();
            int sel;
            cin>>sel;
            switch (sel)
            {
            case 1:
            {
                List<Baibao> lis;
                cin>>lis;
                lis.deletefirst();
                break;
            }
            case 2:
            {
                List<Sach> lis;
                cin>>lis;
                lis.deletefirst();
                break;
            }
            }
            break;
        }
        case 7:
        {
            luachon();
            int sel;
            cin>>sel;
            switch (sel)
            {
            case 1:
            {
                List<Baibao> lis;
                cin>>lis;
                lis.deletelast();
                break;
            }
            case 2:
            {
                List<Sach> lis;
                cin>>lis;
                lis.deletelast();
                break;
            }
            }
            break;
        }
        case 8:
        {
            int year;
            cout<<" Nhap nam can tim :";
            cin>>year;
            // li.imterpolationsearch(year);
            break;
        }
        case 9:
        {
            cout << "Ban muon sap xep tang dan hay giam dan?" << endl;
            cout << "1: Tang dan, 0: Giam dan" << endl;
            bool check;
            cin >> check;
            // if (check) li.shellSort(ascending);
            // else li.shellSort(descending);
            break;
        }
        default:
        {
            cout<<" Nhap lai "<<endl;
            break;
        }
        }
    } 
    while(choose!=0);
    return 0;
    
}