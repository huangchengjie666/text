#include<iostream>
#define pai 3.14
using namespace std;
int main()
{
	double r, h,V;
	cout << "��ֱ�����Բ׶�İ뾶�͸�" << endl;
	cin >> r >> h;
	V = (pai * r * r * h) / 3;
	cout << "��Բ׶�����=" << V << endl;
	return 0;
}