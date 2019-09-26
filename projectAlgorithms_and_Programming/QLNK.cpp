#include "QLNK.h"

QLNK::QLNK()
{
	this->List = new SingleLinkedList;
}

QLNK::~QLNK()
{
	delete[] this->List;
}

void QLNK::Print()
{
	this->List->Print();
}

void QLNK::AddLast(PhieuNhapKhoHang data)
{
	this->List->AddLast(data);
}

void QLNK::AddFirst(PhieuNhapKhoHang data)
{
	this->List->AddFirst(data);
}

void QLNK::AddAt(PhieuNhapKhoHang data, const int& position)
{
	this->List->AddAt(data, position);
}

void QLNK::DeleteFirst()
{
	this->List->DeleteFirst();
}

void QLNK::DeleteLast()
{
	this->List->DeleteLast();
}

void QLNK::DeleteAt(const int& position)
{
	this->List->DeleteAt(position);
}

void QLNK::Sort()
{
	this->List->Sort();
}

Node* QLNK::Search(string maHang)
{
	return this->List->Search(maHang);
}

void QLNK::StatisticalTables()
{
	this->List->StatisticalTables();
}

void QLNK::DemandDelete()
{
	this->List->DemandDelete();
}