#include "Linkedlist.h"
#include<bits/stdc++.h>
using namespace std;
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
void LinkedList::readFile(){
	ifstream filecount;
	filecount.open("soluongphuongtien.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	ifstream filein;
	filein.open("thongtinxe.txt", ios_base::in);
	string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14 
	,temp15,temp16;
	for(int i = 0; i < slpt; ++i){
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
void LinkedList::readFileByRegion1(){
	ifstream filecount;
	filecount.open("soluongphuongtienHaiChau.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	ifstream filein;
	filein.open("HAI CHAU.txt", ios_base::in);
	string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14 
	,temp15,temp16;
	for(int i = 0; i < slpt; ++i){
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
void LinkedList::readFileByRegion2(){
	ifstream filecount;
	filecount.open("soluongphuongtienThanhKhe.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	ifstream filein;
	filein.open("THANH KHE.txt", ios_base::in);
	string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14 
	,temp15,temp16;
	for(int i = 0; i < slpt; ++i){
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
void LinkedList::readFileByRegion3(){
	ifstream filecount;
	filecount.open("soluongphuongtienCamLe.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	ifstream filein;
	filein.open("CAM LE.txt", ios_base::in);
	string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14 
	,temp15,temp16;
	for(int i = 0; i < slpt; ++i){
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
void LinkedList::readFileByRegion4(){
	ifstream filecount;
	filecount.open("soluongphuongtienLienChieu.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	ifstream filein;
	filein.open("LIEN CHIEU.txt", ios_base::in);
	string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14 
	,temp15,temp16;
	for(int i = 0; i < slpt; ++i){
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
void LinkedList::readFileByRegion5(){
	ifstream filecount;
	filecount.open("soluongphuongtienNguHanhSon.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	ifstream filein;
	filein.open("NGU HANH SON.txt", ios_base::in);
	string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14 
	,temp15,temp16;
	for(int i = 0; i < slpt; ++i){
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
void LinkedList::readFileByRegion6(){
	ifstream filecount;
	filecount.open("soluongphuongtienSonTra.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	ifstream filein;
	filein.open("SON TRA.txt", ios_base::in);
	string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14 
	,temp15,temp16;
	for(int i = 0; i < slpt; ++i){
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
void LinkedList::readFileByRegion7(){
	ifstream filecount;
	filecount.open("soluongphuongtienHoaVang.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	ifstream filein;
	filein.open("HOA VANG.txt", ios_base::in);
	string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14 
	,temp15,temp16;
	for(int i = 0; i < slpt; ++i){
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
void LinkedList::readFileByRegion8(){
	ifstream filecount;
	filecount.open("soluongphuongtienHoangSa.txt", ios_base::in);
	int slpt;
	filecount >> slpt;
	filecount.close();
	ifstream filein;
	filein.open("HOANG SA.txt", ios_base::in);
	string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14 
	,temp15,temp16;
	for(int i = 0; i < slpt; ++i){
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
int LinkedList::getSize() {
	return this->size;
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
void LinkedList::deleteNode(string canCuocCongDan) {
	if (this->pHead == NULL) return;

	Node* preNode = NULL;
	Node* currentNode = this->pHead; 
	while (currentNode != NULL) {
		if (currentNode->pt.getCanCuocCongDan() == canCuocCongDan) { 
			if (preNode == NULL) {
				// delete front
				this->pHead = this->pHead->next;
				if (this->pHead == NULL) {
					this->pTail = NULL;
				} 
			}
			else if (this->pTail == currentNode) {
				// delete last
				if (preNode != NULL) {
					preNode->next = NULL;
				}
				this->pTail = preNode;
			}
			else {
				// delete in the middle
				preNode->next = currentNode->next;
			}
			currentNode->next = NULL;
			delete currentNode;
			this->size--;
			return;
		}
		preNode = currentNode;
		currentNode = currentNode->next;
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
int LinkedList::searchNode() {
	string canCuocCongDan;
	cout << "Nhap so can cuoc cong dan can tim kiem: "  << endl;
	cin >> canCuocCongDan;
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
	return 0;
}
