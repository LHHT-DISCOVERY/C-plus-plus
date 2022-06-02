#include<iostream>

using namespace std;

int main() {
    int a;
    char b[100];
    cin >> a;                
    // cin.ignore();           
    // gets(b);    
    fflush(stdin);
    gets(b);  
    cout << a << " " << b << " ";  
    cout << "Ket thuc";
return 0;
}

