#include "PhieuNhapKhoHang.h"

PhieuNhapKhoHang::PhieuNhapKhoHang(string maHang, string tenHang, string donViTinh, int ngayNhap, int soLuong, float donGia)
{
	this->maHang = maHang;
	this->tenHang = tenHang;
	this->donViTinh = donViTinh;
	this->ngayNhap = ngayNhap;
	this->soLuong = soLuong;
	this->donGia = donGia;
}

PhieuNhapKhoHang::~PhieuNhapKhoHang()
{}

istream& operator>>(istream& i, PhieuNhapKhoHang& pNKH)
{
	cout << "Ma hang: "; i >> pNKH.maHang;
	cout << "Ten hang: "; i >> pNKH.tenHang;
	cout << "Don vi tinh: "; i >> pNKH.donViTinh;
	do {
		cout << "Ngay nhap: ";
		i >> pNKH.ngayNhap;
	} while (pNKH.ngayNhap > 31);
	cout << "So luong: "; i >> pNKH.soLuong;
	cout << "Don gia: "; i >> pNKH.donGia;
	return i;
}

ostream& operator<<(ostream& o, const PhieuNhapKhoHang& pNKH)
{
	o << "Ma hang: " << pNKH.maHang << endl;
	o << "Ten hang: " << pNKH.tenHang << endl;
	o << "Ngay nhap: " << pNKH.ngayNhap << endl;
	o << "So luong: " << pNKH.soLuong << endl;
	o << "Don gia: " << pNKH.donGia << " / " << pNKH.donViTinh << endl;
	return o;
}

double PhieuNhapKhoHang::thanhTien()
{
	double thanhTien = this->soLuong * this->donGia;
	if (this->soLuong > 100) thanhTien = thanhTien * 0.85; else
		if (this->soLuong > 50) thanhTien = thanhTien * 0.9;
	return thanhTien;
}