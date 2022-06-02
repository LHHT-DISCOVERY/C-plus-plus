#include<iostream>
using namespace std;
void bangnhan(){
   for(int i = 1 ;i < 11 ; i ++){
      for ( int j = 1 ; j < 10; j++)
      cout << i << "*"<<j << "=" << i*j << "\t";
      cout << "\n";
   }
}
int main (){
   int i , j;
   bangnhan();
   return 0;
}