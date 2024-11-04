#include < iostream >
using namespace std;
int main()
{
	cout << " CHUONG TRINH DIEM XEP HANG\n";
	double diem;
	cout << "nhap diem"; cin >> diem;
	if (diem < 5)
		cout << "yeu";
	else if (diem <= 6)
		cout << "tb";
	else if (diem <= 8)
		cout << "kha";
	else if (diem > 8)
		cout << "gioi";
	return 0;
}