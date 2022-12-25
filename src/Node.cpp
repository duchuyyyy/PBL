#include "Node.h"
#include<iostream>
using namespace std;
Node::Node(oTo pt){
    this->pt = pt;
    this->next = NULL;
}
Node::~Node() {
    if(this->next = NULL){
        delete this->next;
    }
}
void Node::printData(){
    this->pt.thongTinXe2();
}
string Node::getCanCuocCongDan(){
    string tenChuXe, canCuocCongDan, hangSanXuat, loaiXe, mauXe;
	string tenXe;
    string bienSoXe;
    int ngayDangKyXe;
    int thangDangKyXe;
    int namDangKyXe;
    string noiDangKyXe;
    string temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9,temp10 ,temp11, temp12,temp13, temp14,temp15,temp16;
    ifstream filein;
	filein.open("thongtinxe.txt", ios_base::in);
    getline(filein, temp1, ':');
    getline(filein, temp2, ' ');
    getline(filein, tenChuXe, ',');
    getline(filein, temp3, ':');
    getline(filein, temp4, ' ');
    getline(filein, canCuocCongDan, '.');
    return canCuocCongDan;
}
