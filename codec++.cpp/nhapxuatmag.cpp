#include<iostream>

using namespace std;

void nhapmangA(float A[], int &n)
{
	cout << " Nhap vao so phan tu A : ";
	cin >> n;
	for (int i = 0 ; i < n ; i++){
		cout <<	"Nhap vao phan tu A[" << i << "] : ";
		cin >> A[i];
	}
}
void nhapmangB(float B[], int &m) {
	cout << " nhap so phan tu B : ";
	cin >> m;
 	for ( int i = 0 ; i < m; i++ ){
 		cout << "Nhap vao phan tu B[" << i << "] : ";
 		cin >> B[i];
		B[i] = (float) i/(i+1);
	}
}
void nhapmangC(float A[] ,float B[], float C[], int &k){
	cout << "nhap so phan tu C : ";
	cin >> k;
	for ( int i = 0; i < k ; i++){
		cout << " nhap vao phan tu C["<< i << "] : ";
		cin >> C[i] ;
		C[i] = (float)(A[i]*B[i]+B[i+1]) ;
	}
}
void xuatmangA(float A[], int n)
{
	cout << "-----Gia tri cua mang A la : ------" << endl;
	for (int i = 0 ; i < n ; i++){
		cout <<	"Gia tri cua A[" << i << "] = "<< A[i] << endl ;
	}
}
void xuatmangB( float B[], int m){
	cout << "-----Gia tri cua mang B la : ------" << endl;
	for ( int i = 0 ; i < m ; i++ ){
		cout << "Gia tri cua B[" << i << "] = " << B[i] << endl;
	}
}
void xuatmangC(float A[] , float B[] ,float C[] , int k ){
	cout <<  "-----Gia tri cua mang C la : ------" << endl;
	for ( int i = 0 ; i < k ; i++){
	cout << " gia tri cua C ["<<i<<"] = " << C[i] <<endl;
	}
}
int main() {
	float B[20];
	float A[10];
	float C[10];
	int n;
	int m;
	int k;
	nhapmangA(A, n);
	nhapmangB(B, m);
	nhapmangC(A,C, B, k);
	xuatmangA(A, n);
	xuatmangB(B, m);
	xuatmangC(A,B,C, k);
return 0;
}

