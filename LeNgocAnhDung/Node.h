#ifndef Node_h
#define Node_h
#include<iostream>
#include "PBL.h"

class Node {
public:
    phuongTien pt;
    Node* next = NULL;
public:
    Node(phuongTien pt);
    ~Node();
    string getCanCuocCongDan();
    void printData();
};
#endif