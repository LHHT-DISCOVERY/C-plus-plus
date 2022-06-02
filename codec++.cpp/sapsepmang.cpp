#include<iostream>

using namespace std;
void nhapmangA( float A[] , int &n){
	cout << " nhap vao so phan tu cua mang A : ";
	cin >> n;
	for ( int i = 0 ; i < n ; i++){
	cout << " nhap vao phan tu A[" <<i<< "] : ";
	cin >> A[i];
	}
}
void xuatmang(float A[], int n){
	for ( int i = 0; i < n ; i++){
		cout << "gia tri cua A["<<i<<"]= " << A[i]<< endl;
	}
}
void ssmangA(float A[], int n){
for ( int i = 0 ; i < n ; i++){
      for ( int j = 0 ; j < n ; j++){
         if (A[i] < A[j]){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
         }
      }
   }
   for ( int i = 0 ; i < n ; i++){
      cout <<"A["<<i<<"]="<< A[i] << endl;
   }
}

int main() {
	int n ;
	float A[20];
	nhapmangA(A, n);
	cout << " mang A la : "<< endl;
	xuatmang(A, n);
	cout << "mang dc sap sep lai la : " << endl;
	ssmangA(A, n);
return 0;
}

