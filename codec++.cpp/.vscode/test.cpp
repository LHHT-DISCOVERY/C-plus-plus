#include<iostream>
// #include<string>
using namespace std;
int main(){
    while(1){
    char m[10] ;
    char M[10] ;
    char N[10] ;
    char L[10] ;
    cout << "Ban dang yeu ai ?" << endl;
    cout << "* M" << endl;
    cout << "* N" << endl;
    cout << "* L" << endl;
    cout << " vui long nhap ten : " ;
    cin >> m;
    if (m == "N" ){
        cout << " hmm ..." << endl;
        cout << " yeu L nha !" << endl;

    }
    else {
        cout << " nhap sai roi";
        break;
    }
    }
   return 0; 
}