#include<iostream>
using namespace std;
class phaso 
{

   private:
   float tu , mau;
   public:
   phaso( ){ tu = mau =0;};
   phaso(float , float);
   ~phaso(){cout << "ham huy ";};
   void nhap();
   void xuat();
   phaso operator+(phaso);
   phaso operator-(phaso);
   phaso operator*(phaso);
   phaso operator/ (phaso);

};
phaso ::phaso ( float tu ,float mau){
   cout << " ham tao ";
   this -> tu = tu;
   this -> mau = mau;

}
void phaso ::nhap(){
   cout << " tu = ";
   cin >> tu;
   cout << " mau = ";
   cin >> mau;
}
void phaso ::xuat(){
   cout << tu << "/" << mau;
}
phaso phaso ::operator+(phaso p){
   phaso kq;
   kq.tu = this-> tu * mau + this -> mau * tu;
   kq.mau = mau*mau;
   return kq;
}
phaso phaso ::operator-(phaso p){
   phaso kq;
   kq .tu = this -> tu * mau - this -> mau * tu;
   kq.mau = mau*mau;
   return kq;
}
phaso phaso ::operator*(phaso p){
   phaso kq;
   kq.tu = this -> tu * tu;
   kq.mau = this -> mau *mau;
   return kq;
}
phaso phaso::operator/ ( phaso p){
   phaso kq;
   kq.tu = this -> tu * mau;
   kq.mau = this -> mau*tu;
   return kq;
}
int main(){
   phaso p(12,32);
   p.xuat();
   phaso ps1,ps2 , kq;
   ps1.nhap();
   ps2.nhap();
   kq = ps1 + ps2 ;
   ps1.xuat() ; cout << " + " ; ps2.xuat() ; cout << " = "; kq.xuat() ; cout << endl;
   kq = ps1 - ps2 ;
   ps1.xuat() ; cout << " - " ; ps2.xuat() ; cout << " = "; kq.xuat(); cout << endl;
    kq = ps1 * ps2 ;
   ps1.xuat() ; cout << " * " ; ps2.xuat() ; cout << " = "; kq.xuat(); cout << endl;
    kq = ps1 / ps2 ;
   ps1.xuat() ; cout << " / " ; ps2.xuat() ; cout << " = "; kq.xuat() ; cout << endl;
   
   


   
   return 0;
}