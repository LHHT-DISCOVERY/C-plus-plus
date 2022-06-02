#include<iostream>
using namespace std;
void sapsep( int arr[1000] , int n){
   for ( int i = 0 ; i < n ; i++){
      for ( int j = i + 1 ; j < n ; j++){
         if ( arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}
int main () {
   int arr[1000] , n ;
   cin >> n ;
   for ( int i = 0 ; i < n ; i++){
      cin >> arr[i];
   }
  sapsep ( arr , n );
   for ( int i = 0 ; i < n ; i++){
      cout << arr[i] << " ";
   }
   return 0;
}