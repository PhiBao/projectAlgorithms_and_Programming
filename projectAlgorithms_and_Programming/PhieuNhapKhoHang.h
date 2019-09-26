#pragma once
#include<string>
#include<iostream>
using namespace std;
class PhieuNhapKhoHang
{
public:
	string maHang;
	string tenHang;
	string donViTinh;
	int ngayNhap;
	int soLuong;
	float donGia;
public:
	PhieuNhapKhoHang(string = "TXA12769", string = "Ao Unisex", string ="VND" , int = 19, int = 200, float = 35000.35);
	virtual ~PhieuNhapKhoHang();
	friend istream& operator>>(istream&, PhieuNhapKhoHang&);
	friend ostream& operator<<(ostream&, const PhieuNhapKhoHang&);
	double thanhTien();
	friend class Node;
	friend class LinkedList;
};

