#include<iostream> 
using  namespace std ;
int main () {
   int m , n;
   cout << " nhap so hang, so cot :  " << endl;
   cin >> n >> m;
   cout << " nhap vao ma tran : " << endl;
   int arr[100][100];
   for ( int i = 0 ; i < n ; i ++){
      for ( int j = 0 ; j < m ; j++){
      cin >> arr[i][j];

      }
   }
   cout << " ma tran vua nhap la : "<< endl;
   for( int i = 0 ; i < n ; i++){
      for ( int j = 0 ; j < m ; j++){
         cout << arr[i][j] <<"\t" ;
      }
         cout <<"\n";
   }
    int sum = 0;
   for ( int i = 0 ; i < n ; i++){
      for ( int j = 0 ; j < m ; j++){
       //if ( arr[i][j] % 5 == 0 ){
         sum = sum + arr[i][j];
       //}
      }
   }
   cout << " tong cua ma tran la : "<< sum ;
   int max = arr[0][0];
   for (int i = 0 ; i < n ; i++ ){
      for ( int j = 0 ; j < m ; j++){
         if ( arr[i][j] > max ){
            max = arr[i][j];
      }
   }
   cout << max;
   
   }
return 0;
}  