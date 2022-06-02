#include<iostream>
#include<math.h>
using namespace std;
int main(){
   float a,b,c,X1,X2;
do{
   cout << " nhap a (a khac 0) : ";
   cin >>a;
   cout << " nhap b : ";
   cin >>b;
   cout << " nhap c : ";
   cin >>c;
   if (a==0)  { 
   cout << "ket qua la : " << -c/b << endl ;
   }
   
}
while(a==0);
//cout<<" co phuong trinh la: "<< a << "X^2" << " + "<< b << "X"<<" + "<<c << "\n";
      float delta = b*b-4*a*c;
      if( delta < 0){
      cout << " pt vo nghiem ";
      }
      else if( delta > 0 ){
         cout << " pt co 2 nghiem phan biet la : "<<endl;
         cout << " X1= "<< ((-b-sqrt(delta))/(2*a))<<endl;
         cout << " X2= "<< ((-b+sqrt(delta))/(2*a));
      }
   else {
      cout << " pt co nghiem kep la : "<< "X= "<< -b/(2*a);
      }
return 0;
}
