#include<iostream> 
using namespace std;
 class SP{
     public:
     char *ten;
     char *ID;
     float thanhtien;
     private: 
     float donggia;
     float soluong;
     float tinhthanhtien();
     
     SP( char *ten , char *id , float thanhtien , float donggia , float soluong){
         strcpy( this -> ten,ten);
         strcpy (this -> ID , id);
         this -> thanhtien = thanhtien;
         this -> donggia = donggia;
         this -> soluong = soluong;
     }
     
     ~ SP(){ cout << " ham huy ";};
 };
 
 
 int main (){
     SP s1();
     
     
     
     return 0;

 }
