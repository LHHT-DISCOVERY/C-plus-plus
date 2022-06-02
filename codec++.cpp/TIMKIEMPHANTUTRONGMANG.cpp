#include<iostream>

using namespace std;
void nhapmangA( float A[], int &n){
	cout << " nhap vao so phan tu cua mang  A: ";
	cin >> n;
	for ( int i = 0 ; i < n ; i++){
		cout <<	"Nhap vao phan tu A[" << i << "] : ";
		cin >> A[i];	
	}

}
void xuatmangA( float A[], int n){
	cout << " gia tri cua mang A : "<< endl;
for(int i = 0 ; i < n ; i++){
		cout << " gia tri cua A ["<<i<<"] = " << A[i] <<endl;
	}
}
void timkiemphantu( float A[], int n , int x){
	for (int i = 0;i < n ;i++){
		if (A[i] == x){
		cout <<  "  \ngia tri  " << x <<endl <<  "co o trong phan tu cua mang A["<<i<<"]";
	}
}
}

int main() {
	float A[10];
	int n;
	nhapmangA(A, n);
	xuatmangA(A, n);
	int x;
	cout << " nhap gia tri  can tim : ";
	cin >> x;
	timkiemphantu(A,n,x);
	cout << endl;
	int a ,b;
return 0;
}

