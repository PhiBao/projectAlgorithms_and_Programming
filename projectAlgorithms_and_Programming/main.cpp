#include"QLNK.h"
void Menu()
{
	cout << "_________________MENU_______________" << endl;
	cout << "1.Them:" << endl;
	cout << "2.Xoa:" << endl;
	cout << "3.Sap xep:" << endl;
	cout << "4.Tim kiem:" << endl;
	cout << "5.In bang thong ke:" << endl;
	cout << "6.Xoa theo yeu cau:" << endl;
	cout << "7.Exit." << endl;
	cout << "_____________________________________" << endl;
}
int main()
{
	PhieuNhapKhoHang Shirt, Pants("mh1", "Jogger", "Chiec", 29, 99, 700000), Sushi("J123", "Sushi", "hop", 31, 300, 150000);
	QLNK nhaKho1999;
	nhaKho1999.AddFirst(Shirt);
	nhaKho1999.AddFirst(Pants);
	nhaKho1999.AddFirst(Sushi);
	int choose;
	bool start = true;
	while (start)
	{
		Menu();
		cout << "Lua chon:" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			int i;
			PhieuNhapKhoHang pNKH;
			cout << "Nhap thong tin cua hang can them:" << endl;
			cin >> pNKH;
			cout << "Chon vi tri can them:" << endl;
			cout << " (0)-->Dau tien." << " (-1)-->Cuoi cung." << " So khac--> Vi tri xac dinh." << endl;
			cin >> i;
			if (i == 0) nhaKho1999.AddFirst(pNKH);
			else if (i == -1) nhaKho1999.AddLast(pNKH);
			else nhaKho1999.AddAt(pNKH, i);
			break;
		}
		case 2:
		{
			int i;
			cout << "Chon vi tri de xoa:" << endl;
			cout << " (0)-->Dau tien." << " (-1)-->Cuoi cung." << " So khac--> Vi tri xac dinh." << endl;
			cin >> i;
			if (i == 0) nhaKho1999.DeleteFirst();
			else if (i == -1) nhaKho1999.DeleteLast();
			else nhaKho1999.DeleteAt(i);
			break;
		}
		case 3:
		{
			nhaKho1999.Sort();
			break;
		}
		case 4:
		{
			string maHang;
			cout << "Tim kiem theo ma hang:" << endl;
			cout << "Ma hang la: "; cin >> maHang;
			cout << "\n" << "Result search:" << endl;
			if (nhaKho1999.Search(maHang) == NULL) cout << (nhaKho1999.Search(maHang)) << endl;
			else nhaKho1999.Search(maHang)->print();
			break;
		}
		case 5:
		{
			cout << "Bang thong ke: " << endl;
			nhaKho1999.StatisticalTables();
			break;
		}
		case 6:
		{
			nhaKho1999.DemandDelete();
			break;
		}
		case 7: 
		{
			exit(0);
		}
		default:
			start = false;
			break;
		}
	}
	system("pause");
	return 0;
}