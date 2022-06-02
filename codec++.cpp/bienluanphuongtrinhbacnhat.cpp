#include<iostream>
using namespace std;
int main (){
   float a,b, X;
   cout<<" nhap a : ";
   cin >>a;
   cout<<" nhap b : ";
   cin>>b;
   if(a == 0 && b != 0 ){
      cout << " he pt vo nghiem ! ";
   }
   else if( a != 0 && b != 0 ){
      cout << " nghiem la X = "<< float (-b/a);
   }
   else if ( a == 0 && b == 0 ){
      cout << " he pt vo so nghiem ! ";
   }
   else {
      cout << " pt co nghiem la X = 0 ";
   }
   return 0;
}