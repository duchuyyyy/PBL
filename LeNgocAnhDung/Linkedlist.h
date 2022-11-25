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
    void writeFile(int sel);
    void readFile();
    void readFileByRegion1();
    void readFileByRegion2();
    void readFileByRegion3();
    void readFileByRegion4();
    void readFileByRegion5();
    void readFileByRegion6();
    void readFileByRegion7();
    void readFileByRegion8();
    void readFileXeMay();
    void readFileOTo();
    int getSize();
    void printList();
    void insertNode(Node* node, int pos);
    void pushBackOTo(oTo pt);
    int deleteNode(string canCuocCongDan,string &khuvuc,int sel);
    void deleteNodeKhuVuc(string canCuocCongDan);
    void deleteBienSo(string bienSo);
    int searchNode();
    void sortList();
    void docFile(int n, int sel);
    void writeFileKhuVuc(string khuvuc);
    int update(string canCuocCongDan,string &khuvuc,string &hoTen,string &canCuoc,string &mauXe);
    void updateKhuVuc(string canCuocCongDan,string hoTen,string canCuoc,string mauXe);
};
#endif
