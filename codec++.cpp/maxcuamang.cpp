#include<iostream>
using namespace std;
int maxcuamang( int arr[1000] , int n ){
   int maxvalue = arr[0];
   for ( int i = 0 ; i < n ; i++){
      if ( arr[i] > maxvalue){
         maxvalue = arr[i];
      }
   }
   return maxvalue;
}
int main () {
   int n1;
   int n2 ;
 int arr1[1000]; 
 int arr2[1000];
 cin >> n1;
 for ( int i = 0 ; i < n1 ; i++){
    cin >> arr1[i];
 }
 cin >> n2;
 for ( int i = 0 ; i < n2 ; i++){
    cin >> arr2[i];
 }
 cout << maxcuamang (arr1 , n1)<< " " << maxcuamang ( arr2 , n2) << " ";
 return 0;
}

