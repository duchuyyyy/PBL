#ifndef Linkedlist_h
#define Linkedlist_h
#include<bits/stdc++.h>
#include"Node.h"
using namespace std;

class LinkedList {
    public:
    int size;
    Node* pHead;
    Node* pTail;
    public:
    LinkedList();
    ~LinkedList();

    void readFile();
    void readFileByRegion1();
    void readFileByRegion2();
    void readFileByRegion3();
    void readFileByRegion4();
    void readFileByRegion5();
    void readFileByRegion6();
    void readFileByRegion7();
    void readFileByRegion8();
    int getSize();
    void printList();
    void insertNode(Node* node, int pos);
    void pushBack(phuongTien pt);
    void deleteNode(string canCuocCongDan,string &khuvuc);
    void deleteNodeKhuVuc(string canCuocCongDan);
    int searchNode();
    void writeFile();
    void writeFileKhuVuc( string khuvuc);
    void update(string canCuocCongDan,string &khuvuc,string &hoTen,string &canCuoc,string &bienSoXe,string &mauXe);
    void updateKhuVuc(string canCuocCongDan,string khuvuc,string hoTen,string canCuoc,string bienSoXe,string mauXe);
};
#endif