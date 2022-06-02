
#include<iostream>
//#include<string>
using namespace std;
int main (){
   char hoten[50];
   //string hoten;
   float diemtrungbinh;
   float  toan , ly , hoa;
   cout << " ho ten la : ";
   fflush(stdin);
	cin.getline(hoten, 50);
   //getline(cin, hoten);
   cout << " nhap diem toan : " << endl;
   cin >> toan ;
   cout << " nhap diem ly : "<< endl;
   cin >> ly ;
   cout << " nhap diem hoa : "<< endl;
   cin >> hoa ;
   diemtrungbinh = float(( toan + ly + hoa)/3);              
   cout<< " diem trung binh la : " << diemtrungbinh << endl;
  	if ( diemtrungbinh >=0 && diemtrungbinh < 5){
      cout << " dat loai yeu ";
   }
	else if ( diemtrungbinh < 6.5){
		cout << " dat loai trung binh ";
   }
	else if( diemtrungbinh < 8){
		cout << " dat loai kha ";
	}
	else {
		cout <<" dat loai gioi ";}
	return 0;
}
