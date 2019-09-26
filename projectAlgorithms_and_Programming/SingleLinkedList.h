#pragma once
#include"Node.h"
#include<iomanip>
class SingleLinkedList
{
public:
	Node* head;
public:
	SingleLinkedList();
	~SingleLinkedList();
	int IsEmpty();
	Node* CreateNode(PhieuNhapKhoHang);
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