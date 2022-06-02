#include<iostream>
using namespace std;
class nguoi {
   private :
   char ten[30];
   int tuoi;
   char gioitinh[10];
   public:
   void nhap();
   void xuat();
};
void nguoi::nhap(){
   cout << " nhap ten : " << endl;
   fflush(stdin);
   cin.getline(ten,100);
   cout << " nhap tuoi : " << endl;
   cin >> tuoi;
   cout << " nhap gtinh : " << endl;
   fflush(stdin);
   cin.getline(gioitinh,100);
}
void nguoi ::xuat(){
   cout << ten <<"," << tuoi << ", " << gioitinh << endl;
}
class sinhvien : public nguoi{
   friend void xapxep(sinhvien[], int);
   friend void svdiemcaonhat( sinhvien[], int);
   private:
   float diem;
   char nganh[100];
   float hocphi;
   public:
   void nhap();
   void xuat();
};
void sinhvien::nhap(){
   nguoi::nhap();
   do {cout << " nhap  diem :" << endl;
   cin >> diem;}while( diem < 0 || diem >10);
   cout << " nhap ten nganh : " << endl;
   cin >> nganh;
   cout << " nhap hoc phi : " <<endl;
   cin >> hocphi;
}
void sinhvien::xuat(){
   nguoi ::xuat();
   cout << diem  << " DIEM "<< "," << nganh << "," << hocphi << " $" << endl;;
}

void nhapDS( sinhvien a[] , int &n){
   cout << " nhap so luong sinh vien : " << endl;
   cin >> n;
   for (int i =0 ; i <n ; i++){
      a[i].nhap();
   }
}
void xuatds(sinhvien a[], int n){
   for(int i = 0 ; i < n ; i++){
      a[i].xuat();
   }
}
void xapxep (sinhvien a[], int n){
   sinhvien temp;
   for( int i =0 ; i <n-1 ; i++){
      for ( int j = i+1 ; j < n ; j ++){
         if( a[i].diem > a[j].diem){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

         }
      }
   }
}
void svdiemcaonhat( sinhvien a[], int n){
   float max=(a[0].diem);
   for ( int i =0 ; i < n ; i++){
      if(a[i].diem > max){
         max = a[i].diem;
         cout << " sv co diem cao nhat la : " << max;
      }
   }
}
int main (){
   sinhvien sv[100];
   int n;
   cout << "___ xin moi nhap danh sach sinh vien ___ " << endl;
  nhapDS(sv,n);
  cout << " danh sach vua nhap : " << endl;
  xuatds(sv,n);
  cout << endl;
  cout << " danh sach sau xap sep : " << endl;
  xapxep(sv,n);
  xuatds(sv,n);
  svdiemcaonhat(sv,n);
return 0;
}
