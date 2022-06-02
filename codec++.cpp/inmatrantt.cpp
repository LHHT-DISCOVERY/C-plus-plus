#include<iostream>
using namespace std;
int main () {
    int n,m;
    int a[100][100];
    cout << " nhap so hang : ";
    cin >> n;
    cout << " nhap so cot : ";
    cin >> m;
    cout << " nhap vao ma tran : "<< endl;
    for( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    cout << " ma tran vua nhap la : "<< endl;
    for( int i = 0 ; i < n ; i++){
      for ( int j = 0 ; j < m ; j++){
         cout << a[i][j] <<"\t" ;
        }
         cout <<"\n";
    }
    int sum = 0;
    for(int i= 0 ;i < n ;i++)
    {
       // sum = sum + (int) a[i];
        for(int j = 0 ;j < m ;j++)
        {
            sum = sum + a[i][j];
        }
        cout << "tong cua ma tran la : " << sum ;
    }    
         return 0;
}