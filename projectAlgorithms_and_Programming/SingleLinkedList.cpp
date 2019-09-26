#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList()
{
	this->head = NULL;
}

SingleLinkedList::~SingleLinkedList()
{}

int SingleLinkedList::IsEmpty()
{
	return (this->head == NULL);
}

Node* SingleLinkedList::CreateNode(PhieuNhapKhoHang data)
{
	Node* temp = new Node(data);
	if (temp)
	{
		temp->data = data;
		temp->next = NULL;
	}
	return temp;
}

void SingleLinkedList::Print()
{
	Node* temp = head;
	while (temp != NULL)
	{
		temp->print();
		temp = temp->next;
	}
}

void SingleLinkedList::AddFirst(PhieuNhapKhoHang data)
{
	Node* temp = new Node(data);
	if (this->head == NULL)
	{
		this->head = temp;
		return;
	}
	temp->next = this->head;
	this->head = temp;
}

void SingleLinkedList::AddLast(PhieuNhapKhoHang data)
{
	Node* temp = new Node(data);
	Node* tmp;
	if (this->head == NULL)
	{
		this->head = temp;
		return;
	}
	tmp = this->head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = temp;
}


void SingleLinkedList::AddAt(PhieuNhapKhoHang data, const int& position) 
{
	if (position == 0 || IsEmpty()) {
		AddFirst(data); 
	}
	else {
		int i = 1;
		Node* tmp = this->head;
		while (tmp != NULL && i != position) {
			tmp = tmp->next;
			++i;
		}

		if (i != position) {
			AddLast(data);
		}
		else {
			Node* temp = CreateNode(data);
			temp->next = tmp->next;
			tmp->next = temp;
		}
	}
}

void SingleLinkedList::DeleteFirst()
{
	if (!IsEmpty())
	{
		this->head = this->head->next;
	}
}

void SingleLinkedList::DeleteLast()
{
	if (!IsEmpty())
	{
		Node* temp = this->head;
		while (temp->next->next != NULL) {
			temp = temp->next;
		}
		temp->next = temp->next->next;
	}
}

void SingleLinkedList::DeleteAt(const int& position)
{
	if (position == 0 || IsEmpty()) {
		DeleteFirst();
	}
	else {
		int i = 1;
		Node* temp = this->head;
		while (temp->next->next != NULL && i != position) {
			temp = temp->next;
			++i;
		}

		if (i != position) {
			DeleteLast();
		}
		else {
			temp->next = temp->next->next;
		}
	}
}

void SingleLinkedList::Sort()
{
	Node* P, * Q;
	PhieuNhapKhoHang temp;
	for (P = this->head; P->next != NULL; P = P->next)
		for (Q = P->next; Q != NULL; Q = Q->next)
			if (P->data.ngayNhap > Q->data.ngayNhap)
			{
				temp = P->data;
				P->data = Q->data;
				Q->data = temp;
			}
}

Node* SingleLinkedList::Search(string maHang)
{
	Node* temp;
	temp = (this->head);
	while (temp != NULL && temp->data.maHang != maHang)
		temp = (*temp).next;
	return temp;
}

void SingleLinkedList::StatisticalTables()
{
	Node* temp = this->head;
	while (temp != NULL) 
	{
		cout << "|" << setw(6) << temp->data.ngayNhap << "|" << setw(15) << temp->data.thanhTien() << "|" << endl;
		temp = temp->next;
	}
}

void SingleLinkedList::DemandDelete()
{
	int i = 0;
	Node* tmp = this->head;
	while (tmp != NULL)
	{
		if (tmp->data.donViTinh == "hop" || tmp->data.maHang.find("mh1") == 0) DeleteAt(i);
		tmp = tmp->next;
		i++;
	}
}