#include <iostream>
using namespace std;
int main() {
    int n;
    do {  
        cout << " nhap n : ";
        cin >> n;
        if(n<0){
            cout << " nhap sai,yeu cau nhap lai" << endl ;
        }
    }
    while ( n < 0 );
        float s ;
        s = 0;
        for ( int i = 0 ; i <= n; i++){
           s = s + (float) i/(((i+1)*(i+1)));
        }
    cout << " kq : "<< s;
return 0;
}
 
