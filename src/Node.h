#ifndef Node_h
#define Node_h
#include<iostream>
#include "oto.h"
class Node {
public:
    oTo pt;
    Node* next = NULL;
public:
    Node(oTo pt);
    ~Node();
    string getCanCuocCongDan();
    void printData();
};
#endif
