#include<iostream>
using namespace std; 
class phanso {
   private: 
   
   float tu , mau;
 
   public:
   friend istream &operator >> (istream &is , phanso &ps){
   cout << " nhap tu so " << endl;
   is >> ps.tu ;
   do{
      cout << " nhap mau so " << endl; 
      is >> ps.mau;}
   while (ps.mau < 0);
   return is;
   }
   friend ostream &operator << ( ostream &os , phanso &ps){
      cout << ps.tu << "/" << ps.mau;
      return os;
   };
    phanso operator + ( phanso ps);

};
phanso phanso :: operator + ( phanso ps) {
      phanso kq;
      kq.tu = this -> tu * ps.mau + this -> mau * ps.tu;
      kq.mau = this -> mau * ps.mau;
      return kq;
   };
int main (){
   phanso h,h1,h2,kq;
 
   cin >>h1;
  
   cin >> h2;

    kq = h1 + h2 ;
    cout << " kq la : " << h1 << " + " << h2  << " = "<< kq << endl;
}
