#ifndef listCTKH_h
#define listCTKH_h
#include"congtrinhkhoahoc.h"
#include"Baibao.h"
#include"Sach.h"
#include"Node.h"
template<typename T>
class List 
{
private:
	int n;
	Node<T> *pHead;
	Node<T> *pTail;
	string tenCaNhan;
public:
    List();
	List(const List &l );
    ~List();
	template<typename U>
	friend istream &operator >> (istream& in, List<U>& l);
	template <typename U>
	friend ostream &operator << (ostream& out, List<U>& l);
	T &operator [](const int i) const;	
	const List& operator = (const List& x);
	void setSize(int);
	int getSize();
	void addfirst(const T&);
	void addlast(const T&);
	void addindex(const T&, int index);
	void deletefirst();
	void deletelast();
	void delete1(int);
	// int interpolationSearch1(T ctkh[], int n, int x);
	// int imterpolationsearch(int);
	// void shellSort( bool Comfunc( int,  int));
};
bool ascending(int l, int r);
bool descending(int l, int r);
#endif 
