#include<iostream>
using namespace std;
void soliensau( int n ){
   n++;
   cout << n << " ";
}
int main () {
   int n;
   cout << " nhap so n : ";
   cin >> n;
   cout << " so lien sau "<< n << " la : " ;
  soliensau(n);
   return 0;
}
