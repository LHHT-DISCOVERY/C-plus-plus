//Ten:Ly Huynh Huu Tri . lop: 19DTCLC2. Nhom: 19NH38

#include<iostream>
using namespace std;
float A[10], B[20], C[10];
void nhapphantumangA()
{
	for (int i = 0; i < 10; i++) {
        cout << "Nhap vao phan tu A[" << i << "] : ";
        cin >> A[i];
    }
}
void nhapphantumangB()
{
	for (int i = 0; i < 20; i++)
	{
		B[i]=(1.0*i)/(i+1);
	}
	for (int i = 0; i < 20; i++) {
        cout << "Nhap vao phan tu B[" << i << "] : ";
        cout << B[i] << endl;
    }
}
void tinhmangC()
{
	for(int i=0;i<10;i++)
	C[i]= A[i]*B[i]+B[i+1];
}
int main()
{
	nhapphantumangA();
	cout << endl;
	nhapphantumangB();
	cout << endl;
	tinhmangC();
	cout << "Xuat mang A"<< endl;
	for(int i=0;i<10;i++)
	{
		cout << "A[" << i << "] : " << A[i] << endl;
	}
	cout << "Xuat mang B"<< endl;
	for(int i=0;i<20;i++)
	{
		cout << "B[" << i << "] : " << B[i] << endl;
	}
	cout << "Xuat mang C"<< endl;
	for(int i=0;i<10;i++)
	{
		cout << "C[" << i << "] : " << C[i] << endl;
	}
}

