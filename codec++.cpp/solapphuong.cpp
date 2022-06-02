#include<iostream>
using namespace std;
int lapphuongsoa(int a){
   cout << " lap phuong so " << a << " la : "<< a*a*a;
}
int main (){
   int a;
   cout << " nhap so a : ";
   cin >>a;
   lapphuongsoa(a);
   return 0;
}