#include<iostream>
#include<conio.h>
using namespace std;
 class tinh {
    private:
    float a,b;
    public:
   void nhap(){
   };
   void xuat(){ cout << " a " <<  a << " ," << "b " << b;};

 };
 void tinh ::nhap (){
      cout << " nhap a: \n";
      cin >> a ;
      cout << " nhap b : \n";
      cin >> b;
   };
int main() {
    float a, b;
    int key;
    bool danhap = true;
    while (true)
    {
       system("cls");
       cout << " --chuong trinh tinh --\n" ;
       cout << " --1.nhap--\n";
       cout << " --2.xuat --\n";
       cout << " ** bat dau nhap lua chon cua ban** \n";
       cin >> key;
       switch(key)
       {
          case 1:
          cout << " ban da chon nhap hai so a,b : \n";
          nhap(a,b);
          cout << " da nhap thanh cong \n";
          danhap = true;
          cout << " nhan bat ki phim nao de tiep tuc ";
          getch();
          case 2:
          if(danhap){
          cout << " ban da chon xuat hai so : \n";
          xuat();
          }
          else {
             cout <<" vui long nhap 2 so a,b truoc : \n";
          }
          cout << " bam enter de tiep tuc \n";
          break;
          default:
          cout << " ban da  nhap sai !!  vui long nhap dung \n";
          cout << " nhan enter de tiep tuc \n";
       }
    }
    
    

 }