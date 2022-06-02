#include<iostream>
using namespace std;
void nhap ( int &y){
    cout << " Y = "<< y << endl;
    y = 2;
    cout << " y = "<< y << endl;
}
int main (){
    int x(1);
    cout << " x = "<< x << endl ; 
    nhap (x);
    cout << " x = "<< x << endl;
    return 0;
}