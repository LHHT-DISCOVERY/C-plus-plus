#include<iostream>
using namespace std;
#include<cstring>

class Hamtao{
    private:
    char namev[50];
    char nameF[50];
    int nam;
    public:
    Hamtao(){
    cout << " + ham khoi tao khong doi so " << endl;
    this -> namev[0] = '\0';
    this -> nameF[0] = '\0';
    this -> nam = 0;
    }
    
    Hamtao (char* name, char *f , int N){
    cout << " + ham tao 3 doi tuong  " << endl;
    strcpy_s ( this ->namev , 49, name);
    strcpy_s ( this ->nameF , 49, f);
    this -> nam = N;

}
void show(){
    cout << "xuat ra 3 gia tri : "<< endl;
    cout <<namev << " ,";
    cout << nameF << " , ";
    cout << nam;
    cout << endl;
}
~Hamtao (){
    cout << " HAM HUY";
}

};

int main (){
    char *namev = new char[50];
    strcpy_s (namev , 50 , " VINFAST ");
    char *nameF = new char[50];
    strcpy_s ( nameF , 49 , "Fadil");
    //Hamtao p;// đây là dùng để gọi hàm tao không có giá trị
    Hamtao p1(namev,nameF, 2021);
    //p.show();// hien thi ra ket qua ham tao khong doi so
    p1.show();//hien thi ra ket qua ham tao 3 giá trị
    return 0;
}
