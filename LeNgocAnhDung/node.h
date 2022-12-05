#ifndef node_h
#define node_h
#include"congtrinhkhoahoc.h"
#include"Sach.h"
#include"Baibao.h"
#include<bits/stdc++.h>
template<typename T>
class Node
{
public:
    T ctkh;
    Node<T> *next =NULL;
    Node<T> *prev = NULL;
public:
    Node(T ctkh);
    ~Node();
};
#endif
