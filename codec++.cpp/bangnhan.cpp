#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Bang cuu chuong cua " << n << ":" << endl;
    for(int i = 1; i <= 10; i++) {
    	cout << "   " << n << " x " << i << " = " << n*i << endl;
    }


return 0;
}

