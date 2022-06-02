#include<iostream>
using namespace std ;
#include<math.h>

int main ()
{
    int a,b,n;
    
    do{
    cout << "nhap a : " ;
    cin >> a;
    if (a <= 0){
        cout << " ERROR "<<endl;
    }
    cout << " nhap b : ";
    cin >> b;
    if (b<= 0){cout << " ERORR"<< endl;}}
    while (a<=0||b<=0);
    float sum = (float) a/b;
    do{
    cout << " nhap n : ";
    cin >> n;
    if ( n <= 0 ) {
        cout << "   ERROR !!!  " << endl;
    }}
    while (n<0);
    for(int i = 0 ; i<= n ; i++){
        sum += (float)(pow(-1,i)* ((float)(a+i)/(b+i+1)));
    }
    cout <<  sum;
   return 0;

 }
