#include <bits/stdc++.h>
using namespace std;
 
class connguoi
{
public:
    string hoten;
    int tuoi;
 
public:
    void set()
    {
        cout << "Nhap Ho Ten: ";
        fflush(stdin); // xoa bo nho dem 
        getline(cin, this->hoten);
 
        cout << "Nhap Tuoi: ";
        cin >> this->tuoi;
    }
};
 
int main()
{
    connguoi obj; //khai bao obj la 1 doi tuong trong lop con nguoi 
 
    obj.set();
 
    cout << "Ho Ten: " << obj.hoten << endl;
    cout << "Tuoi: " << obj.tuoi << endl;
 
    return 0;
}
