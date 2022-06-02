#include<iostream>
using namespace std;
 class cong{
     private:
     float a,b;
     public:
     void nhap();
     void xuat();
     void tinh();
     cong(){
         this -> a = 0;
         this -> b =0;
     }
     cong ( float a , float b){
         this -> a = a;
         this -> b = b;

     }
     ~cong (){cout << "ham huy";}
     void show();

 };
 void cong :: show(){
     cout << "a = " << a;
     cout << "b = " << b;
 }
 void cong ::nhap(){
     cout <<" nhap a : "  << endl;
     cin >> a;
     cout << " nhap b : ";
     cin >>b;
 }
 void cong ::xuat (){
     cout << " gia tri cua a la : " << a << endl;
     cout << " gia tri cua b la : " << b << endl;

 }
 void cong ::tinh (){
     cout << " kq la : " << a + b ;
 }
 int main (){
     cong c;
     cong c1(12,7);
     c.show();
     c1.show();
     c.nhap();
     c.xuat();
     c.tinh();
     return 0;
 }