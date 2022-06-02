#include<iostream>
using namespace std;
#include<conio.h>
#include <stdio.h>
#include<string.h>
struct CauThu{
   char hoten[100];
   char suckhoe[100];
   char quequan[100];
   char gioitinh[100];
   char vitrithidau[100];
   float cannang , chieucao, luong;
      int tuoi ,soao , cmnd;
      
};
   typedef CauThu CT;
   void nhap(CT &ct);
   void nhapN(CT a[], int n);
   void xuat(CT ct);
   void xuatN(CT a[], int n);
   void timmax(CT a[],int n);
   void sapxepT(CT a[], int n);
   void timct_Ten(CT a[],int n,char hoten[30]);
int main()
   {
   int key;
   int n;
   bool daNhap = false ;
   
   
   do
       {
       cout <<"\n XIN  MOI NHAP SO LUONG CAU THU TRONG CAU LAC BO: " ;
       cin >> n;
       }
   while(n <= 0);
   CT a[n];
   while(true)
   {
       system("cls");
       cout <<"**----------------------------------------------------------**\n";
       cout <<"**|||||- CHUONG TRINH QUAN LY CAU THU TRONG CAU LAC BO-|||||**\n";
       cout <<"**|--------------------------------------------------------|**\n";
       cout <<"**|      1. BAT DAU NHAP THONG TIN CAU THU                 |**\n";
       cout <<"**|      2. IN DANH SACH CAC CAU THU TRONG CAU LAC BO      |**\n";
       cout <<"**|      3. IN CAU THU CO CHIEU CAO LON NHAT               |**\n";
       cout <<"**|      4. SAP XEP THEO LUONG TANG DAN CUA CAU THU        |**\n";
       cout <<"**|      5. TIM KIEM THONG TIN CUA BAT KI CAU THU NAO      |**\n";
       cout <<"**|      0. THOAT CHUONG TRINH                             |**\n";
       cout <<"**----------------------------------------------------------**\n";
       cout <<"**************************************************************\n";
       cout <<"**======= XIN MOI NHAP LUA CHON MA BAN MUON THUC HIEN =======**\n";
       
       cout << " BAT DAU NHAP : ";
       cin >> key;
       
       switch(key)
       {
           
           case 1:
               
               cout<< "\nBAN DA CHON NHAP DANH SACH CAU THU!";
               nhapN(a, n);
               cout << "\nBAN DA NHAP THANH CONG !";
               daNhap = true;
               cout << "\n\t\t\tBAM PHIM ENTER DE TIEP TUC!";
            
               getch();
               break;
               
           case 2:
               
               if(daNhap)// tuong duong voi kiem ta daNhap == true
               {
                   cout << "\n**BAN DA CHON XUAT DANH SACH CAC CAU THU !**";
                   xuatN(a, n);
               }
               else
               {
                   cout << "\nVUI LONG NHAP DANH SACH CAU THU TRUOC !!!!";
               }
               cout << "\n\t\t\tBAM PHIM ENTER DE TIEP TUC!";
               getch();
               break;
               
           case 3:
               
               if(daNhap)// tuong duong voi kiem ta daNhap == true
               {
                   cout << "-----BAN DA CHON TIM CAU THU CO CHIEU CAO LON NHAT-----  " << endl;
                   timmax(a,n);
               }else{
                   cout << "\nVUI LONG NHAP DAH SACH CAC CAU THU TRUOC DE THUC HIEN DUOC CAC BUOC TIEP THEO!!!";
               }
               cout << "\n\t\t\tBAM PHIM ENTER DE TIEP TUC!";
             
               getch();
               break;
                
           case 4:
               
               if(daNhap)//// tuong duong voi kiem ta daNhap == true
               {
                   cout << "\nBAN DA CHON SAP XEP THEO LUONG TANG DAN ";
                   sapxepT(a, n);
                   xuatN(a, n);
               }
               else
               {
                   cout << "\nVUI LONG NHAP DAH SACH CAC CAU THU TRUOC DE THUC HIEN DUOC CAC BUOC TIEP THEO!";
               }
               cout << "\n\t\t\tBAM PHIM ENTER DE TIEP TUC!!";
             
               getch();
               break;
               
           case 5:
               
               if(daNhap)// tuong duong voi kiem ta daNhap == true
               {
                   cout << "\nTIM THONG TIN CAU THU TRONG CAU LAC BO : ";
                   
                   char ten[30];
                   fflush(stdin);
                   cout << "\nVUI LONG NHAP TEN CAU THU BAN MUON BIET THONG TIN :  ";
                   cin.getline(ten,50);
                   timct_Ten(a,n,ten);
               }
               else
               {
                   cout << "\nVUI LONG NHAP DANH SACH CAU THU TRUOC DE THUC HIEN CAC BUOC TIEP THEO ";
               }
               cout << "\n\t\t\tBAM PHIM ENTER DE TIEP TUC!";
        
               getch();
               break;
                         
           case 0:
               
               cout << "\nBAN DA CHON THOAT CHUONG TRINH";
               getch();
               return 0;
               
           default:
               
               cout << "\nBAM SAI VUI LONG BAM LAI THEO KHUNG TREN";
               cout << "\n\t\t\tBAM PHIM ENTER DE TIEP TUC!";
         
               getch();
               break;
       }
   }
}


void nhap(CT &ct)
   {
       cout << "Nhap Ho va Ten: ";
       fflush(stdin);
       cin.getline(ct.hoten,50);
       
       cout << "Nhap gioi tinh: ";
       cin.getline(ct.gioitinh,50);
       
       cout << "Nhap Que Quan: ";
       fflush(stdin);
       cin.getline(ct.quequan,50);
       
       cout << "Nhap Chung Minh Nhan Dan : ";
       cin >> ct.cmnd;
       
       cout << "Vi Tri Thi Dau: ";
       fflush(stdin);
      cin.getline( ct.vitrithidau,60);
       
       cout << "So Ao Thi Dau : ";
       cin >> ct.soao;
       
       cout << "Nhap Tuoi: ";
       cin >> ct.tuoi;
       
       cout << "Nhap Can Nang: ";
       cin >> ct.cannang;
       
       cout << "Nhap Chieu Cao: ";
       cin >> ct.chieucao;
       
       cout << "Nhap Tinh Trang Suc Khoe: ";
       fflush(stdin);
      cin.getline(ct.suckhoe,50);
        
       cout << "Nhap luong: ";
       cin >> ct.luong;
   }
   
   
void nhapN(CT a[], int n)
   {
   cout <<"\n____________________________________\n";
   for(int i = 0; i< n; ++i)
       {
       cout << "\nNhap cau thu " <<i+1 << ":" << endl;
       
       nhap(a[i]);
       }
   cout <<"\n____________________________________\n";
   }
   
   
void xuat(CT ct)
{
       cout << "\t\t\t Ho va Ten: " << ct.hoten << endl;
       cout << "\t\t\t Gioi Tinh : " << ct.gioitinh << endl;
       cout << "\t\t\t Que Quan: " << ct.quequan << endl;
       cout << "\t\t\t Chung Minh Nhan Dan : " << ct.cmnd << endl;
       cout << "\t\t\t Vi Tri Thi Dau : " << ct.vitrithidau << endl;
       cout << "\t\t\t So Ao Thi Dau: " << ct.soao << endl;
       cout << "\t\t\t Tuoi: " << ct.tuoi << endl;
       cout << "\t\t\t Can Nang: " << ct.cannang <<"KG" << endl;
       cout << "\t\t\t Chieu cao: " << ct.chieucao <<"M"<< endl;
       cout << "\t\t\t Suc Khoe: " << ct.suckhoe << endl;
       cout << "\t\t\t Luong : " << ct.luong <<"$"<< endl;
   }
   
   
void xuatN(CT a[], int n)
   {
   cout <<"\n_________________________________________________________\n";
   
   for(int i = 0;i < n;++i)
       {
       cout <<"\nTHONG TIN CAU THU THU " << i+1 << ":" << endl;
       
       cout <<"\n------------------------------------\n";
       xuat(a[i]);
       
       cout <<"\n_________________________________________________________\n";
       }
   cout <<"\n__________________________________________________________\n";
   }
   
   
void timmax(CT a[],int n)
// tim kiem cau thu co chieu cao lon nhat
{
   float max=(a[0].chieucao);
       for(int i=0;i<n;i++)
       {
           if(a[i].chieucao>max)
           {
           max=a[i].chieucao;
           
           cout <<"CAU THU CAO NHAT DO LA : "<< "---" << a[i].hoten << "---" <<"--->" << " VOI CHIEU CAO :" << max << "m";
           }
       }
}


void sapxepT(CT a[], int n){
   //Sap xep theo luong tu thap den cao
   CT tmp;
   for(int i = 0; i < n - 1; i++)
   {
       for(int j = i + 1; j < n; j++)
       {
           if(a[i].luong > a[j].luong)
           {
               tmp = a[i];
               a[i] = a[j];
               a[j] = tmp;
           }
       }
   }
}


void timct_Ten(CT a[],int n,char hoten[30]){
   // tim kiem ten mot cau thu
   int i;
   for(i=0;i<n;++i)
   {
      if(strcmp(a[i].hoten,hoten)==0)
      {
       cout <<"\t\t\t+ Ho Ten :" << a[i].hoten << endl;
       cout <<"\t\t\t+ Gioi Tinh: " <<a[i].gioitinh << endl;
       cout <<"\t\t\t+ Que Quan : " <<a[i].quequan << endl;
       
       cout <<"\t\t\t+ Chung Minh Nhan Dan : " << a[i].cmnd  << endl;
       cout <<"\t\t\t+ Vi Tri Thi Dau : " <<a[i].vitrithidau << endl;
       cout <<"\t\t\t+ So Ao : " <<a[i].soao << endl;
       
       cout <<"\t\t\t+ Tuoi : " <<a[i].tuoi <<" tuoi" << endl;
       cout <<"\t\t\t+ Can Nang : "  <<a[i].cannang << "KG" << endl;
       cout <<"\t\t\t+ Chieu Cao : "  <<a[i].chieucao << "M"<< endl;
       
       cout <<"\t\t\t+ Tinh Trang Suc Khoe : " <<a[i].suckhoe << endl;
       cout <<"\t\t\t+ Muc Luong : "  <<a[i].luong << "$"<< endl;
      }
   }
}
