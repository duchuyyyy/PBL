#include<bits/stdc++.h>
#include"listCTKH.h"
using namespace std;
template<typename T>
List<T>::List(){
	this->n=0;
	this->pHead=NULL;
	this->pTail=NULL;
	this->tenCaNhan=" ";
}
template<typename T>
List<T>::~List() {}
template <typename T>
List<T>::List(const List<T> &l)
{
	this->n=0;
	this->pHead=NULL;
	this->pTail=NULL;
	this->tenCaNhan=" ";
	Node<T> *temp=l.pHead;
	while (temp!=NULL)
	{
        this->addlast(temp->ctkh);
		temp=temp->next;
	}
	
}
template<typename T>
int List<T>::getSize() {
	return this->n;
}
template <typename T>
void List<T>::setSize(int n) {
	this->n = n;
}
// template <typename T>
// void List<T>::show()
// {
// 	Node<T> *temp=this->pHead;
// 	int n= this->getSize();
// 	for (int i = 0; i < this->n; i++)
// 	{
// 		cout<<temp->ctkh;
// 		temp=temp->next;
// 	}
// }
template<typename T>
T &List<T>::operator[] (const int k) const
{
	int index=k;
    Node<T> *temp =this->pHead;
    while (temp!=NULL&& index>0)
	{
		temp=temp->next;
		index--;
	}
    return temp->ctkh;	
}
template <typename T>
istream& operator >>(istream& in, List<T>& lis) {
	cout<< "Ten ca nhan : ";
	in>>lis.tenCaNhan;
	cout << "So phan tu list: ";
	in >> lis.n;
	Node<T> *temp=lis.pHead;
	for (int i = 1; i <= lis.n; ++i) {
		cout << "Gia tri cua phan tu list thu " << i << endl;
		in >> temp->ctkh;
		temp=temp->next;
	}
	return in;
}
template <typename T>
ostream& operator << (ostream& out, List<T>& lis) {
	Node<T> *temp=lis.pHead;
	out << "Gia tri cac phan tu list"<<endl;
	for (int i = 0; i < lis.n; ++i) {
		out << "Gia tri cua phan tu list thu " << i << endl;
		out << temp->ctkh;
		temp=temp->next;
	}
	return out;
}
template <typename T>
const List<T>& List<T>::operator = (const List<T>& a) {
	this->n = a.n;
	delete[] this->ctkh; 
	this->ctkh = new T [this->n];
	for (int i = 0; i < this->n; i++) {
		this->ctkh[i] = a.ctkh[i];
	}
	return *this;
}
template <typename T>
void List<T>::addindex(const T& data, int index) {
	Node<T> *temp= new Node<T>(data);
  if (this->pHead=NULL)
  {
    pHead=pTail=temp;
  }
  else
  {
    Node<T> *temp2=this->pHead;
    for (int i = 1; i < index; i++)
    {
      temp2=temp->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
    temp->prev=temp2;
    temp->next->prev=temp;
  }
    int n=this->getSize();
	n++;
	this->setSize(n);
}
template <typename T>
void List<T>::addfirst(const T& data) {
	Node<T> *temp= new Node<T>(data);
  if (this->pHead=NULL)
  {
    pHead=pTail=temp;
  }
  else
  {
      temp->next=this->pHead;
      this->pHead->prev=temp;
      this->pHead=temp;
  }
	int n=this->getSize();
	n++;
	this->setSize(n);
}
template <typename T>
void List<T>::addlast(const T& data) {
	Node<T> *temp= new Node<T>(data);
    if (this->pHead==NULL)
    {
       pHead=pTail=temp; 
    }
    else
    {
        temp->prev=this->pTail;
        this->pTail->next=temp;
        this->pTail=temp;
    }
	int n=this->getSize();
	n++;
	this->setSize(n);
}
template <typename T>
void List<T>::delete1(int index) {
	if(this->pHead==NULL)
   {
    cout<<"Danh sach rong"<<endl;
   }
   else
   {
    if (this->pHead->next==NULL)
    {
      Node<T> *p= this->pHead;
      this->pHead=p->next;
      p->next=NULL;
      this->pHead=this->pTail=NULL;
      delete p;
    }
    else
    {
      Node<T> *p = this->pHead;
      for (int i = 0; i < index-1; i++)
      {
        p=p->next;
      }
      Node<T> *temp=p->next;
      Node<T> *p2=temp->next;
      p->next=p2;
      p2->prev=p;
      delete temp;
    }
  }
	int n=this->getSize();
	n--;
	this->setSize(n);
}
template <typename T>
void List<T>::deletelast() {
	if (this->pHead==NULL)
   {
    cout<<"Danh sach rong"<<endl;
   }
   else
   {
    if (this->pHead->next==NULL)
    {
      Node<T> *p= this->pHead;
      this->pHead=p->next;
      p->next=NULL;
      this->pHead=this->pTail=NULL;
      delete p;
    }
    else
    {
      Node<T> *p=this->pTail->prev;
      Node<T> *temp=this->pTail;
      p->next=NULL;
      this->pTail=p;
      delete temp;
    }
  }
	int n=this->getSize();
	n--;
	this->setSize(n);
}
template <typename T>
void List<T>::deletefirst() {
	if (this->pHead==NULL)
   {
    cout<<"Danh sach rong"<<endl;
   }
   else
   {
    if (this->pHead->next==NULL)
    {
      Node<T> *p= this->pHead;
      this->pHead=p->next;
      p->next=NULL;
      this->pHead=this->pTail=NULL;
      delete p;
    }
    else
    {
      Node<T> *p=this->pHead->next;
      Node<T> *temp=this->pHead;
      p->prev=NULL;
      this->pHead=p;
      delete temp;
    }
  }
	int n=this->getSize();
	n--;
	this->setSize(n);
}

bool ascending(int l, int r)
{
	return l > r;
}
bool descending(int l, int r)
{
	return l < r;
}
// template <typename T>
// void List<T>::shellSort(bool Comfunc(int, int))
// {
// 	int interval, i, j;
// 	T temp;
// 	for (interval = this->n / 2; interval > 0; interval /= 2) {
// 		for (i = interval; i < this->n; i++) {
// 			temp = this->ctkh[i];
// 			for (j = i; j >= interval && Comfunc(this->ctkh[j - interval].getNamXuatBan(), temp.getNamXuatBan());
// 			 j -= interval) 
// 		    {
// 				this->ctkh[j] = this->ctkh[j - interval];
// 			}
// 			this->ctkh[j] = temp;
// 		}
// 	}
// }
// template<typename T>
// int List<T>::interpolationSearch1(T ctkh[], int n, int x) 
// { 
    
//     int lo = 0, hi = (n - 1); 
//     while (lo <= hi && x >= ctkh[lo].namXuatBan && x <= ctkh[hi].namXuatBan) 
//     { 
//         if (lo == hi) 
//         { 
//             if (ctkh[lo].namXuatBan == x) 
// 			return lo; 
//         } 
//         int pos = lo + (((double)(hi - lo) / 
//             (ctkh[hi].namXuatBan - ctkh[lo].namXuatBan)) * (x - ctkh[lo].namXuatBan)); 
//         if (ctkh[pos].namXuatBan == x) 
//             return pos; 
//         if (ctkh[pos].namXuatBan < x) 
//             lo = pos + 1; 
//         else
//             hi = pos - 1; 
//     } 
//     return -1; 
// } 
// template <typename T>
// int List<T>::imterpolationsearch(int year)
// {
// 	int check;
// 	this->shellSort(ascending);
// 	check=interpolationSearch1(this->ctkh,this->n-1,year);
// 	if (check==-1)
// 	{
// 		cout<<"Khong thay !!"<<endl;
// 	}
// 	else
// 	{
// 		cout<<"Da tim thay "<<endl;
// 	}
// 	return check;
// }