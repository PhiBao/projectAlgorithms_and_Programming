#pragma once
#include"SingleLinkedList.h"
class QLNK
{
public:
	SingleLinkedList* List;
public:
	QLNK();
	virtual ~QLNK();
	void Print();
	void AddFirst(PhieuNhapKhoHang);
	void AddLast(PhieuNhapKhoHang);
	void AddAt(PhieuNhapKhoHang, const int&);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAt(const int&);
	void Sort();
	Node* Search(string);
	void StatisticalTables();
	void DemandDelete();
};