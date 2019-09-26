#include "Node.h"
Node::Node(PhieuNhapKhoHang data)
{
	this->data = data;
}
Node::~Node()
{}
void Node::print()
{
	cout << this->data << endl;
}