#include<iostream>
#include<fstream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
#include "Linkedlist.h"
LinkedList::LinkedList() {
	this->size = 0;
	this->pHead = NULL;
	this->pTail = NULL;
}
LinkedList::~LinkedList() {
	while (this->pHead != NULL) { 
		Node* currentNode = this->pHead;
		this->pHead = this->pHead->next;
		currentNode->next = NULL;
		delete currentNode;
	}
}
void checkCanCuoc(string canCuocCongDan)
{
	a: 
        //cin.ignore();
        getline(cin, canCuocCongDan);
        if(canCuocCongDan.length() != 12) {
            cout << "Nhap sai so can cuoc cong dan. Vui long nhap lai!" << endl;
            goto a;
        }
}
void LinkedList::docFile(int n, int sel)
{
	ifstream filein;
	if(sel==1)
	{
	   filein.open("HAI CHAU.txt",ios_base::in); 
	}
	else if(sel==2)
	{
		filein.open("THANH KHE.txt",ios_base::in);
	}
	else if(sel==3)
	{
	    filein.open("CAM LE.txt", ios_base::in);
	}
	else if(sel==4)
	{
	    filein.open("LIEN CHIEU.txt", ios_base::in);
	}
	else if(sel==5)
	{
	    filein.open("NGU HANH SON.txt", ios_base::in);
	}
	else if(sel==6)
	{
	    filein.open("SON TRA.txt", ios_base::in);
	}
	else if(sel==7)
	{
	    filein.open("HOA VANG.txt", ios_base::in);
	}
	else if(sel==8)
	{
	    filein.open("HOANG SA.txt", ios_base::in);
	}
	else if (sel==0)
	{
		filein.open("thongtinxe.txt",ios_base::in);
	}
	
	string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14 
	,temp15,temp16;
	for(int i = 0; i < n; ++i){
    getline(filein, temp1, ':');
    getline(filein, temp2, ' ');
    getline(filein, tenChuXe, ',');
    getline(filein, temp3, ':');
    getline(filein, temp4, ' ');
    getline(filein, canCuocCongDan, '.');
    getline(filein, temp5, ':');
    getline(filein, temp6, ' ');
    getline(filein, hangSanXuat, ',');
    getline(filein, temp7, ':');
    getline(filein, temp8, ' ');
    getline(filein, loaiXe, ',');
    getline(filein, temp9, ':' );
	getline(filein, temp10 ,' ');
	getline(filein, mauXe, ',');
	getline(filein, temp11, ':');
    getline(filein, temp12, ' ');
    getline(filein, tenXe, ',');
    getline(filein, temp13, ':');
    getline(filein, temp14, ' ');
    getline(filein, bienSoXe, ',');
	filein >> ngayDangKyXe ;
	filein >> thangDangKyXe ;
	filein >> namDangKyXe;
    getline(filein, temp15, ':');
    getline(filein, temp16, ' ');
    getline(filein, noiDangKyXe, '.');
	phuongTien* new_pt = new phuongTien(tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe, tenXe, bienSoXe, ngayDangKyXe, thangDangKyXe, namDangKyXe, noiDangKyXe);
	this->pushBack(*new_pt);
	}
}
void LinkedList::readFile(){
	ifstream filecount;
	filecount.open("soluongphuongtien.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	docFile(slpt,0);
}

void LinkedList::readFileByRegion1(){
	ifstream filecount;
	filecount.open("soluongphuongtienHaiChau.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	docFile(slpt,1);
}
void LinkedList::readFileByRegion2(){
	ifstream filecount;
	filecount.open("soluongphuongtienThanhKhe.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	docFile(slpt,2);
}
void LinkedList::readFileByRegion3(){
	ifstream filecount;
	filecount.open("soluongphuongtienCamLe.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	docFile(slpt,3);
}
void LinkedList::readFileByRegion4(){
	ifstream filecount;
	filecount.open("soluongphuongtienLienChieu.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	docFile(slpt,4);
}
void LinkedList::readFileByRegion5(){
	ifstream filecount;
	filecount.open("soluongphuongtienNguHanhSon.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	docFile(slpt,5);
}
void LinkedList::readFileByRegion6(){
	ifstream filecount;
	filecount.open("soluongphuongtienSonTra.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	docFile(slpt,6);
}
void LinkedList::readFileByRegion7(){
	ifstream filecount;
	filecount.open("soluongphuongtienHoaVang.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	docFile(slpt,7);
}
void LinkedList::readFileByRegion8(){
	ifstream filecount;
	filecount.open("soluongphuongtienHoangSa.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	docFile(slpt,8);
}
int LinkedList::getSize() {
	return this->size;
}
void upperCase1(string &s1){
	for(int i = 0; i < s1.size(); ++i){
		s1[i] = toupper(s1[i]);
	}
}
void LinkedList::insertNode(Node* node, int position) {
	if (this->pHead == NULL || position < 1) {
		// insert in front
		node->next = this->pHead; 
		this->pHead = node; 
		if (this->pTail == NULL) {
			this->pTail = node;
		}
		this->size++;
		return;
	}

	if (position >= this->size) {
		// insert after tail 
		this->pTail->next = node;
		this->pTail = node;
		this->size++;
		return;
	}

	Node* preNode = NULL;
	Node* currentNode = this->pHead;
	int pos = 0;
	while (pos < position) {
		pos++; 
		preNode = currentNode;
		currentNode = currentNode->next;
	}
	node->next = currentNode;
	preNode->next = node;
	this->size++;
}
void LinkedList::pushBack(phuongTien pt){
	Node* newNode = new Node(pt); 
      if(pHead == NULL) {
        pHead = newNode;
      } else {
        Node* temp = pHead;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newNode;
      }    
}
int checkStr(string s1, string s2){
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
void LinkedList::deleteNode(string canCuocCongDan,string &khuvuc)
{
    Node *currentNode=this->pHead;
    if (currentNode == NULL)
	{
		cout<<"\nDanh sach rong !!"<<endl;
	}
	else
	{
		Node *preNode=NULL;
		while (currentNode != NULL)
		{
           if (checkStr(currentNode->pt.getCanCuocCongDan(),canCuocCongDan)==1)
		   {
			break;
		   }
		   preNode=currentNode;
		   currentNode=currentNode->next;
		}
		if (currentNode==NULL)
		{
			cout<<"\nKhong tim thay phuong tien !!"<<endl;
		}
		else
		{
			if (currentNode == this->pHead)
			{
				this->pHead=this->pHead->next;
			}
			else if (currentNode->next == NULL )
			{
				this->pTail=preNode;
			}
			else
			{
				preNode->next=currentNode->next;
			}
			khuvuc = currentNode->pt.getNoiDangKyXe();
			currentNode->next = NULL;
			delete currentNode;
			currentNode=NULL;
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
		}

	}

}
void LinkedList::deleteNodeKhuVuc(string canCuocCongDan)
{
    Node *currentNode=this->pHead;
    if (currentNode == NULL)
	{
		cout<<endl;
	}
	else
	{
		Node *preNode=NULL;
		while (currentNode != NULL)
		{
           if (checkStr(currentNode->pt.getCanCuocCongDan(),canCuocCongDan)==1)
		   {
			break;
		   }
		   preNode=currentNode;
		   currentNode=currentNode->next;
		}
		if (currentNode==NULL)
		{
			cout<<"\nKhong tim thay phuong tien !!"<<endl;
		}
		else
		{
			if (currentNode == this->pHead)
			{
				this->pHead=this->pHead->next;
			}
			else if (currentNode->next == NULL )
			{
				this->pTail=preNode;
			}
			else
			{
				preNode->next=currentNode->next;
			}
			string khuvuc = currentNode->pt.getNoiDangKyXe();
			currentNode->next = NULL;
			delete currentNode;
			currentNode=NULL;
			if (khuvuc=="Hai Chau")
			{
			ifstream filein;
			filein.open("soluongphuongtienHaiChau.txt", ios_base::in);
            int count;
            filein >> count;
            count--;
            filein.close();
            ofstream fileout;
            fileout.open("soluongphuongtienHaiChau.txt", ios_base::out);
            fileout << count;
            fileout.close();
			}
			else if (khuvuc=="Thanh Khe")
			{
			ifstream filein;
			filein.open("soluongphuongtienThanhKhe.txt", ios_base::in);
            int count1;
            filein >> count1;
            count1--;
            filein.close();
            ofstream fileout;
            fileout.open("soluongphuongtienThanhKhe.txt", ios_base::out);
            fileout << count1;
            fileout.close();
			}
			else if (khuvuc=="Cam Le")
			{
			ifstream filein;
			filein.open("soluongphuongtienCamLe.txt", ios_base::in);
            int count2;
            filein >> count2;
            count2--;
            filein.close();
            ofstream fileout;
            fileout.open("soluongphuongtienCamLe.txt", ios_base::out);
            fileout << count2;
            fileout.close();
			}
			else if (khuvuc=="Hoang Sa")
			{
			ifstream filein;
			filein.open("soluongphuongtienHoangSa.txt", ios_base::in);
            int count3;
            filein >> count3;
            count3--;
            filein.close();
            ofstream fileout;
            fileout.open("soluongphuongtienHoangSa.txt", ios_base::out);
            fileout << count3;
            fileout.close();
			}
			else if (khuvuc=="Lien Chieu")
			{
			ifstream filein;
			filein.open("soluongphuongtienLienChieu.txt", ios_base::in);
            int count4;
            filein >> count4;
            count4--;
            filein.close();
            ofstream fileout;
            fileout.open("soluongphuongtienLienChieu.txt", ios_base::out);
            fileout << count4;
            fileout.close();
			}
			else if (khuvuc=="Hoa Vang")
			{
			ifstream filein;
			filein.open("soluongphuongtienHoaVang.txt", ios_base::in);
            int count5;
            filein >> count5;
            count5--;
            filein.close();
            ofstream fileout;
            fileout.open("soluongphuongtienHoaVang.txt", ios_base::out);
            fileout << count5;
            fileout.close();
			}
			else if (khuvuc=="Ngu Hanh Son")
			{
			ifstream filein;
			filein.open("soluongphuongtienNguHanhSon.txt", ios_base::in);
            int count6;
            filein >> count6;
            count6--;
            filein.close();
            ofstream fileout;
            fileout.open("soluongphuongtienNguHanhSon.txt", ios_base::out);
            fileout << count6;
            fileout.close();
			}
			else if (khuvuc=="Son Tra")
			{
			ifstream filein;
			filein.open("soluongphuongtienSonTra.txt", ios_base::in);
            int count7;
            filein >> count7;
            count7--;
            filein.close();
            ofstream fileout;
            fileout.open("soluongphuongtienSonTra.txt", ios_base::out);
            fileout << count7;
            fileout.close();
			}
		}

	}

}
void LinkedList::printList() {
	cout << endl;
	cout << "Danh sach cac phuong tien: " << endl;
	cout << endl;
	Node* currentNode = this->pHead;
	while (currentNode != NULL) {
		currentNode->printData();
		cout << endl;
		currentNode = currentNode->next;
	}
}
int LinkedList::searchNode() {
	string canCuocCongDan;
	cout << "Nhap so can cuoc cong dan can tim kiem: "  << endl;
	cin >> canCuocCongDan;
	checkCanCuoc(canCuocCongDan);
	Node* currentNode = this->pHead;
	while (currentNode != NULL) { 
		if (checkStr(currentNode->pt.getCanCuocCongDan(),canCuocCongDan) == 1) {
			cout << "Da tim thay phuong tien can tim: " << endl;
			cout << endl;
			currentNode->printData();
			return 1;
		}
		currentNode = currentNode->next;
	}
	cout<<" Khong ton tai phuong tien !!";
	return 0;
}
void LinkedList::writeFile() {
	ofstream fileout; 
	fileout.open("thongtinxe.txt", ios_base::trunc);
	Node* currentNode = this->pHead;
	while(currentNode != NULL) {
	fileout << "Ten chu xe: " << currentNode->pt.getTenChuXe() << "," << endl;
    fileout << "So can cuoc cong dan: " << currentNode->pt.getCanCuocCongDan() << "." << endl;
	fileout << "Hang xe: " << currentNode->pt.getHangSanXuat() << "," << endl;
    fileout << "Loai xe: " << currentNode->pt.getLoaiXe() << "," << endl;
    fileout << "Mau xe: " << currentNode->pt.getMauXe() << "," << endl;
    fileout << "Ten xe: " << currentNode->pt.getTenXe() << "," << endl;
	fileout << "Bien so xe: " << currentNode->pt.getBienSoXe() << "," << endl;
	fileout << currentNode->pt.getNgayDangKyXe() << endl;
	fileout << currentNode->pt.getThangDangKyXe() << endl;
	fileout << currentNode->pt.getNamDangKyXe() << endl;
	fileout << "Noi dang ky xe: " << currentNode->pt.getNoiDangKyXe() << "." <<  endl;
	currentNode = currentNode->next;
	}
    fileout.close();
}
void LinkedList::writeFileKhuVuc(string khuvuc) {
	ofstream fileout; 
    if (khuvuc=="HAI CHAU")
	{
		fileout.open("HAI CHAU.txt", ios_base::trunc);
	}
	else if (khuvuc=="HOANG SA")
	{
		fileout.open("HOANG SA.txt",ios_base::trunc);
	}
	else if (khuvuc=="LIEN CHIEU")
	{
		fileout.open("LIEN CHIEU.txt",ios_base::trunc);
	}
	else if (khuvuc=="HOA VANG")
	{
		fileout.open("HOA VANG.txt",ios_base::trunc);
	}
	else if (khuvuc=="THANH KHE")
	{
		fileout.open("THANH KHE.txt",ios_base::trunc);
	}
	else if (khuvuc=="NGU HANH SON")
	{
		fileout.open("NGU HANH SON.txt",ios_base::trunc);
	}
	else if (khuvuc=="SON TRA")
	{
		fileout.open("SON TRA.txt",ios_base::trunc);
	}
	Node* currentNode = this->pHead;
	while(currentNode != NULL) {
	fileout << "Ten chu xe: " << currentNode->pt.getTenChuXe() << "," << endl;
    fileout << "So can cuoc cong dan: " << currentNode->pt.getCanCuocCongDan() << "." << endl;
	fileout << "Hang xe: " << currentNode->pt.getHangSanXuat() << "," << endl;
    fileout << "Loai xe: " << currentNode->pt.getLoaiXe() << "," << endl;
    fileout << "Mau xe: " << currentNode->pt.getMauXe() << "," << endl;
    fileout << "Ten xe: " << currentNode->pt.getTenXe() << "," << endl;
	fileout << "Bien so xe: " << currentNode->pt.getBienSoXe() << "," << endl;
	fileout << currentNode->pt.getNgayDangKyXe() << endl;
	fileout << currentNode->pt.getThangDangKyXe() << endl;
	fileout << currentNode->pt.getNamDangKyXe() << endl;
	fileout << "Noi dang ky xe: " << currentNode->pt.getNoiDangKyXe() << "." <<  endl;
	currentNode = currentNode->next;
	}
    fileout.close();
}
void LinkedList::update(string canCuocCongDan,string &khuvuc,string &hoTen,string &canCuoc,string &bienSoXe,string &mauXe)
{
	Node* currentNode = this->pHead;
    if (currentNode == NULL)
	{
		cout<<endl;
	}
	else
	{
		Node *preNode=NULL;
		while (currentNode != NULL)
		{
           if (checkStr(currentNode->pt.getCanCuocCongDan(),canCuocCongDan)==1)
		   {
			break;
		   }
		   preNode=currentNode;
		   currentNode=currentNode->next;
		}
		if (currentNode==NULL)
		{
			cout<<"\nKhong tim thay phuong tien !!"<<endl;
		}
		else
		{
			khuvuc=currentNode->pt.getNoiDangKyXe();
			int sel;
			do
			{
			    cout << "_____________________________________________________________" << endl;
                cout << "|                   CAP NHAT THONG TIN                      |" << endl;
                cout << "|___________________________________________________________|" << endl;
                cout << "\t" << "1.Cap nhat thong tin chu xe "   <<endl;
                cout << "\t" << "2.Cap nhat bien so " <<endl;
                cout << "\t" << "3.Cap nhat mau son xe " <<endl;
				cout << "\t" << "0. Thoat "<<endl;
			    cout<<"\t\tNhap lua chon :";
			cin>>sel;
		    switch (sel)
			{
			case 1:
			{
			    cout<<"Nhap thong tin chu moi "<<endl;
				string tenChumoi,canCuocmoi;
				cin.ignore();
				cout<<"Ho ten :";
				getline(cin,tenChumoi);
				cout<<endl;
				cout<<"Can cuoc :";
				getline(cin,canCuocmoi);
				checkCanCuoc(canCuocmoi);
				currentNode->pt.setTenchuxemoi(tenChumoi,canCuocmoi);
				break;
			}
			case 2:
			{
				cout<<"Nhap bien so moi :";
				string bienSomoi;
				cin.ignore();
				getline(cin,bienSomoi);
                currentNode->pt.setBienSomoi(bienSomoi);
				break;
			}
			case 3:
			{
				cout<<"Nhap mau son xe moi :";
				string mauXemoi;
				cin.ignore();
				getline(cin,mauXemoi);
				currentNode->pt.setMauXemoi(mauXemoi);
				break;
			}
			case 0:
				break;
			}
			} while (sel);
			hoTen = currentNode->pt.getTenChuXe();
            canCuoc = currentNode->pt.getCanCuocCongDan();
			bienSoXe = currentNode->pt.getBienSoXe();
			mauXe = currentNode->pt.getMauXe();
		}
    }
}
void LinkedList::updateKhuVuc(string canCuocCongDan,string khuvuc,string hoTen,string canCuoc,string bienSoXe,string mauXe)
{
	Node* currentNode = this->pHead;
        Node* preNode =NULL;
		
           if (checkStr(currentNode->pt.getCanCuocCongDan(),canCuocCongDan)==1)
		   {
			preNode=currentNode;
		        currentNode=currentNode->next;
	                currentNode->pt.setTenchuxemoi(hoTen,canCuoc);
			currentNode->pt.setBienSomoi(bienSoXe);
			currentNode->pt.setMauXemoi(mauXe);
		   }
		   
			
}
