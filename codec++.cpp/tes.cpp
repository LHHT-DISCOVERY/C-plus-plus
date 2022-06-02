#include <iostream>
using namespace std; 
int  gtln( int a[100],int n){

         int max = a[0];
         for ( int i =0 ; i < n ; i++){
         if ( a[i] > max){
             max=a[i];
         }
         
     }
     return max;
     }
int tongsole(int a[100], int n){
    int sum = 0;
for ( int i = 0 ; i < n ; i++){
    if ( a[i] % 2 !=0 ){
        sum = sum + a[i];
    }
}
    return sum ;
}
int main (){
    int a[100] ;
    int n;
    do{
         cout << " nhap n : ";
         cin >> n ;}
         while (n <= 0 );
         for( int i =0 ; i < n; i ++){
             cin >> a[i];
     }
     cout << " cac so vua nhap la : ";
     for ( int i = 0 ; i < n; i++){
         cout << a[i] << "\t";
     }
     cout << endl << " gia tri lon nhat la : "; 
     cout << gtln(a,n);cout << endl;
     cout << " tong so le la : " << endl;
     cout <<tongsole(a,n);
      return 0;
}
