#include<iostream>
 using namespace std ;
  class phanso{
     private :
      float tu , mau ;
      public:
      void nhap();
      void xuat();
      phanso operator+(phanso);

  };
  void phanso::nhap (){
     cout << " nhap tu : ";
      cin >> tu ;
       cout <<  " nhap mau : ";
        cin >> mau ;
  }
  void phanso :: xuat () {
     cout << tu << "/" << mau<< endl;
  }
  phanso phanso::operator+ (phanso p){
     phanso kq;
     kq.tu = this -> tu * p.mau + this -> mau * p.tu;
     kq.mau = this -> mau * p.mau;
     return kq;
  }
  int main () {
     phanso p, q,kq;
     p.nhap();
     p.xuat();
     q.nhap();
     q.xuat();
     kq = p + q;
     p.xuat() ; cout << "+"; q.xuat() ; cout << "="; kq.xuat();
  }
