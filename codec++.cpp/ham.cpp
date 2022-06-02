#include<iostream>
using namespace std;
void nhap(int x ){
    cout << x << endl;
    cin >> x;
}
int tong(int x , int y){
    return x + y;
}
int main(){
    nhap();
    cout << tong( 69 , 9) <<endl;
    int a=1;
    nhap(a+1);
    return 0;
}
