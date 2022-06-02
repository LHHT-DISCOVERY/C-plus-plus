#include <iostream>
using namespace std;

class Box
{
   private :
   double chieudai , chieurong,chieucao;
   public:

      
      void setChieuDai( double chieudai )
      {
         this -> chieudai = chieudai;
      }

      void setChieuRong( double chieurong )
      {
         this -> chieurong = chieurong;
      }

      void setChieuCao( double chieucao )
      {
         this -> chieucao = chieucao;
      }
      double tinhTheTich()
      {
         return chieudai * chieurong * chieucao;
      }
      double tinhdientich(){
	   return chieudai * chieurong ;
	   }
      void nhap();
      void xuat();
      // Nap chong toa tu + de cong hai doi tuong Box.
      Box operator+(const Box& b);

};
void Box ::nhap (){
   cout << " Nhap chieu dai : " << endl;
   cin >> chieudai;
   cout << " Nhap chieu rong : " << endl;
   cin >> chieurong;
   cout << " Nhap chieu cao : " << endl;
   cin >> chieucao;
}
void Box::xuat() {
   cout << " Chieu dai la : " << chieudai << endl << " Chieu rong la : " << chieurong<< endl << " Chieucao la : " << chieucao << endl;
}
 Box Box :: operator+(const Box& b)
      {
         Box box;
         box.chieudai = this->chieudai + b.chieudai;
         box.chieurong = this->chieurong + b.chieurong;
         box.chieucao = this->chieucao + b.chieucao;
         return box;
      }
// ham main cua chuong trinh
int main( )
{
   Box Box1;                // Khai bao Box1 la cua kieu Box
   Box Box2;                // Khai bao Box2 la cua kieu Box
   Box box;  
   Box Boxa;
   Box Boxb;
   Box Boxc;              // Khai bao Box3 la cua kieu Box
   double thetich = 0.0;     // Luu giu the tich cua mot box tai day
 
   // thong tin chi tiet cua box 1
   Box1.setChieuDai(2.0); 
   Box1.setChieuRong(3.0); 
   Box1.setChieuCao(4.0);
 
   // thong tin chi tiet cua box 2
   Box2.setChieuDai(5.0); 
   Box2.setChieuRong(6.0); 
   Box2.setChieuCao(7.0);
 
   // the tich cua box 1
   Box1.tinhTheTich();
   cout << "The tich cua Box1 la: " <<  Box1.tinhTheTich() <<endl;
   Box1.tinhdientich();
   cout << "Dien tich cua Box1 la : " << Box1.tinhdientich() << endl;
 
   // the tich cua box 2
   thetich = Box2.tinhTheTich();
   cout << "The tich cua Box2 la: " << thetich <<endl;
   Box2.tinhdientich();
   cout << "Dien tich cua Box2 la : " << Box2.tinhdientich() << endl;

   // cong hai doi tuong nhu sau:
   box = Box1 + Box2;

   // the tich cua box 3
   thetich = box.tinhTheTich();
   cout << "The tich cua Box3 la: " << thetich <<endl;
   box.tinhdientich();
   cout << "Dien tich cua Box3 la : " << box.tinhdientich() << endl;

   Boxa.nhap();
   Boxa.xuat(); 
   // the tich cua box a
   Boxa.tinhTheTich();
   cout << "The tich cua Boxa la: " <<  Boxa.tinhTheTich() <<endl;
   Boxa.tinhdientich();
   cout << "Dien tich cua Boxa la : " << Boxa.tinhdientich() << endl;

   Boxb.nhap();
   Boxb.xuat(); 
   // the tich cua box b
   Boxb.tinhTheTich();
   cout << "The tich cua Boxb la: " <<  Boxb.tinhTheTich() <<endl;
   Boxb.tinhdientich();
   cout << "Dien tich cua Boxb la : " << Boxb.tinhdientich() << endl;

    Boxc = Boxa + Boxb;
    Boxc.tinhTheTich();
    cout << " the tich cua Boxc la: " << Boxc.tinhTheTich() << endl;
    Boxc = Boxa + Boxb;
    Boxc.tinhdientich();
    cout << " dien tich cua Boxc la: " << Boxc.tinhdientich() << endl;


   return 0;
}
