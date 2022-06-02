#include <iostream>
using namespace std;

void nhapmang(float A[] ,int &n){
    for ( int i = 0 ; i < n ; i++){
        cout << " nhap vao phan tu A ["<< i << "] : " ;
        cin >> A[i];
    }

}
void insoam( float A[] , int &n){
    for ( int i = 0 ; i < n ; i++){
        if ( A[i] < 0 ){
            cout <<" so am tai vi tri A["<< i << "] la: " << A[i] << endl;
        }
}}
float tinhtrungbinhcongcuamang( float A[] , int &n){
    float sum = 0 ;
     for ( int i = 0 ; i < n ; i++){
        sum = (sum+A[i]);
     }
  	 float r = sum/n;
     return r;
}
void xuatmang( float A[] , int &n){
    cout << " _________ gia tri cua mang A la __________" << endl;
    for ( int i = 0 ; i < n ; i++){
    cout << " A["<< i <<"] = " << A[i] << " \t " << " \n" ;
    } 
}
int main () {
    int n ;
    float A[20];
    float sum ;
    do {
    cout << " nhap vao so phan tu A : ";
    cin >> n;
    if ( n < 0 ){
        cout << "--- xin nhap lai so phan tu A ---" << "\n";
    }
    }
    while ( n < 0);
    nhapmang(A,n);
    xuatmang( A ,n);
    insoam( A ,n);
   cout <<  " trung binh cua mang la : "<< tinhtrungbinhcongcuamang( A,n);
    return 0;
}
