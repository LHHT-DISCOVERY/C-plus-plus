#include<iostream>
#include<cstdio>
using namespace std;
struct sinhvien {
    char masv[12];
    char hoten[30];
    int tuoi;
    float diem;
};
void nhapsv1( sinhvien &sv){
    cout << " nhap ma sv : ";
    gets(sv.masv);
    cout << " nhap ho ten : ";
    fflush(stdin);
    gets(sv.hoten);
    cout << " nhap tuoi : ";
    cin >> sv.tuoi;
    cin >> sv.diem;
}
void xuatsv1( sinhvien sv){
cout << " ma sv : " << sv.masv<<endl;
cout << " ho ten : " << sv.hoten<< endl;
cout << " tuoi : " << sv.tuoi<<endl;
cout << " diem : " << sv.diem << endl ;
}
int main (){
sinhvien x;
nhapsv1(x);
xuatsv1(x);
return 0;
}
