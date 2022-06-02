#include<iostream> 
using namespace std ;
int main () {
     int n,i , sum;
     nhap(n);
     cout << " kq la : " << tinh(n) << endl;
     //xuatq(n);
     //return 0;
 }
 void nhap (int &n ){
     
     cout << " nhap n : ";
     cin >> n;}
     
 
 float tinh(int n) {
     float sum = 0 ;int i =0;
     do {
     
        sum = sum + (float)(1/(i*i + 4*i + 1)); 
        i++; 
        }

    while ( i <= n );
    return  sum;}
    
 void xuatq (int n ){
     cout << " gia tri n la : " << n << endl;
     cout << " kq cua day la : " << tinh(n);
 }
//  int main () {
//      int n,i , sum;
//      nhap(n);
//      cout << " kq la : " << tinh(n) << endl;
//      //xuatq(n);
//      return 0;
//  }