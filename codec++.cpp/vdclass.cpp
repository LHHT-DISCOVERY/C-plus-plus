#include <iostream>

using namespace std;

class Rectangle {
public:
    float cd;
    float cr;
   void nhap(){
   	cout << " nhap chieu dai : ";
    cin >> cd;
    cout << " nhap chie rong : ";
    cin >> cr;
   }
   float dientich(){
       return cd*cr;
   }
   float chuvi(){
       return (cd + cr)*2;
   }
   void xuatkq(){
       cout << " Area: " << dientich()<<endl;
       cout << " Perimeter: " << chuvi()<< endl;
   }
};

int main() {
    Rectangle r1;
    r1.nhap();
    r1.xuatkq();
    Rectangle r2;
    r2.nhap();
    r2.xuatkq();
    return 0;
}
