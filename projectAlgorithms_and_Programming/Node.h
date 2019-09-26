#pragma once
#include"PhieuNhapKhoHang.h"
class Node
{
public:
	PhieuNhapKhoHang data;
	Node* next;
public:
	Node(PhieuNhapKhoHang);
	virtual ~Node();
	void print();
	friend class LinkedList;
	friend class QLNK;
};
