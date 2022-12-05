#ifndef Baibao_h
#define Baibao_h
#include<bits/stdc++.h>
#include"congtrinhkhoahoc.h"
using namespace std;
class Baibao : public CongTrinhKhoaHoc {
    string tenBaiBao;
    int soLuongTacGia;
    public : 
    Baibao();
    Baibao(string maCongTrinh ,int namXuatBan ,bool khuVucXuatBan ,string tenBaiBao ,int soLuongTacGia);
    ~Baibao();
    friend istream &operator >>(istream& in, Baibao& baiBao);
	friend ostream &operator <<(ostream& out, Baibao& baiBao);
	const Baibao& operator = (const Baibao& a);
    void setTenBaiBao(string tenBaiBao);
    void setSoLuongTacGia(int soLuongTacGia);
    string getTenBaiBao();
    int getSoluongTacGia();
};
#endif