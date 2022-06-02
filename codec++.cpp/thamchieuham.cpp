#include <iostream>
using namespace std ;
void tinh(int a , int b , int &tong , int &hieu , int &nhan , float &chia){
    tong = a + b;
    hieu = a - b;
    nhan = a * b;
    chia = (float) a/b;
}
int main(){
    int a ,b;
    int tong ; int hieu ; int nhan ; float chia;
    cout << " nhap a : ";
    cin >> a;
    cout << " nhap b : ";
    cin >>b;
    tinh(a, b, tong, hieu, nhan, chia);
    cout << " a + b = " << tong << endl;
    cout << " a - b = " << hieu << endl;
    cout << " a * b = " << nhan << endl;
    cout << " a / b = " << chia << endl;
    return 0;
}