#include <iostream>
using namespace std;
int main () {
   int n ;
   int a[1000];
   cin >> n ;
   for ( int i = 0 ; i < n ; i++){
      cin >> a[i];
   }
   for ( int i = 0 ; i < n ; i++){
      for ( int j = i + 1 ; j < n ; j++){
         if ( a[i] > a[j]){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
   for ( int i = 0 ; i < n ; i++){
      cout << a[i] << " ";
   }
   return 0;
}
/*#include<iostream>

using namespace std;

int main() {
    int n ;
    int arr[1000];
    cin >> n ;
    for ( int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    for ( int i = 0 ; i < n ; i++){
for ( int j = i+1 ; j < n ; j++){
    if ( arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp ;
    }
}
    }
    for ( int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
