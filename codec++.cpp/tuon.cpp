#include<iostream>
using namespace std;
#include<cstring>
 class sinhvien{
     friend void xapxep ( sinhvien[], int);
     friend float timkiemdiemcao(sinhvien [] , int );
     private: 
     char hoten[100];
     int mssv;
     char gioitinh[100];
     int tuoi;
     float diem;
     char tennganh[100];
     char hocphi[100];
     public:
     // hàm khoi tao
     sinhvien(){
         this -> hoten[0]='\0';
         this -> tennganh[0]='\0';
         this -> diem = 0;
     }
     sinhvien(char *hoten , char *tennganh , float diem){
         strcpy_s(this -> hoten,50,hoten);
         strcpy_s(this -> tennganh , 50 , tennganh);
         this -> diem = diem;

     }
     ~sinhvien(){};
     void show();
     void nhap();
     void xuat();
     
 };
 
 void sinhvien::show(){
     cout << " ho ten : " << hoten << endl;
     cout << " ten nganh : " << tennganh << endl;
     cout << " diem : " << diem << endl ;
 }
 void sinhvien::nhap(){
     cout << " nhap ho ten sv : " ;
     fflush(stdin);
     cin.getline(hoten,50);
     cout << " nhap mssv : ";
     cin >> mssv;
     cout << " nhap gioi tinh : ";
     fflush(stdin);
     cin >> gioitinh;
     cout << " nhap tuoi : ";
     cin >> tuoi;
     cout << " nhap diem : " ;
     cin >> diem;
     cout << " nhap ten nganh : ";
     fflush(stdin);
     cin.getline( tennganh , 100);
     cout << " nhap hoc phi : ";
     cin >> hocphi;

 }
 void sinhvien::xuat(){
     cout << " ho ten la : " << hoten << endl;
     cout << " ma so sinh vien la : " << mssv << endl;
     cout << " gioi tinh : " << gioitinh << endl;
     cout << " so tuoi : "<< tuoi << " tuoi" << endl;
     cout << " so diem : "<<diem <<" diem" <<endl;
     cout << " ten nganh : " << tennganh << endl;
     cout <<" hoc phi : " << hocphi << " trieu dong " << endl;
 }
 void nhapds( sinhvien a[], int &n){
     cout << " xin moi nhap so luong sv : " ;
     cin >> n;
     for ( int i = 0 ; i < n ; i++){
         a[i].nhap();
     }
 }
 void hienthids(sinhvien a[] , int n ){
     cout << "----------------------------------------------------" << endl;
     for ( int i = 0 ; i < n ; i++){
          a[i].xuat();
     }
 }
 float timkiemdiemcao(sinhvien a[] , int n){
     float max = a[0].diem;
     for ( int i=0 ; i< n ; i++){
         if(a[i].diem > max){
             max = a[i].diem;
         }
     }
     return max;

 };
 void xapxep ( sinhvien a[], int n){
     sinhvien temp;
     for ( int i = 0 ; i < n-1 ; i ++ ){
         for ( int j = i+1 ; j < n ; j++)
         if ( a[i].diem < a[j].diem){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
         }
     }
 }
 int main () {
     sinhvien sv[100];
     int n;
     char *hoten = new char [50];
     strcpy_s(hoten, 49, "huu tri");
     char* tennganh = new char[50];
     strcpy_s(tennganh ,49, "DTVT");
     sinhvien sv1(hoten,tennganh,10);
     sv1.show();
     nhapds(sv,n);
      cout << " danh sach vua nhap la : " << endl;
     hienthids (sv,n); cout << endl;
     cout << " -----------------------------------------" << endl;
     cout << " kq sau sap xe la : " << endl;
     xapxep(sv,n);
     hienthids(sv,n);
     cout <<" sv co diem cao nhat la : " << timkiemdiemcao(sv,n);
     return 0;

 }