#include<iostream>
using namespace std;
int main(){
   int luachon ;
   float a,b;
   cout << "======== MENU ======="<<endl;
   cout << "1.cong"<<endl;
   cout << "2.tru"<<endl;
   cout << "3.nhan"<<endl;
   cout << "4.chia"<<endl;
   cout << " nhap a : ";
   cin >> a;
   cout << " nhap b : ";
   cin >>b;
   cout << " nhap su lua chon (1-5) :  ";
   cin >> luachon;
   switch(luachon){
      case 1 :
      cout << " cong hai so la : "<< a+b ;
      break;
      case 2 :
      cout << " tru hai so la : "<< a-b;
      break;
      case 3 :
      cout << " nhan hai so la : "<< a*b;
      break;
      case 4 : 
      cout << " chia hai so la : " << (a/b);
      break;
      default :
      cout << " !!!! khong hop le vui long chon muc tu 1 den 5 tren Menu !!!" << endl << " \n\t\t xin cam on ! ";
   }
return 0;
}