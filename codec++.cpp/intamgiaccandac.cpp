#include<iostream>
using namespace std;
void in_tam_giac_can_dac(int h){
   for(int i = 1 ; i < h ; i++){
  	 for(int j = 1; j < 2*h -1 ; j++){
   		if( i >= h - i + 1 && i <= h + i -1 ){
      		cout << "*";
      		}
   		else {
     		cout << " ";
   				}
			}
   cout << endl;
   		}	
	}
   int main () {
   int h;
   do {
     cout << " nhap chieu cao : ";
     cin >> h;
     if( h <= 0 ){
        cout << " xin nhap lai ";
     }
}
   while( h <= 0);
   cout << " TAM GIAC DAC ";
   in_tam_giac_can_dac(h);
   return 0;
}
