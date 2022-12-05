#include "Node.h"
#include<iostream>
using namespace std;
template<typename T>
Node<T>::Node(T ctkh)
{
    this->ctkh=ctkh;
    this->next=NULL;
    this->prev=NULL;
}
template<typename T>
Node<T>::~Node()
{}