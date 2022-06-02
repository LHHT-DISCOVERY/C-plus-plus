#include<iostream>
using namespace std;
class Hamtao{
    private: 
    string nameV;
    string nameF;
    int nam;
    public:
    Hamtao(){
        cout << " + ----ham tao ko doi so---- " << endl;
        this -> nameV = '\0';
        this -> nameF = '\0';
        this ->nam = 0;

    }
    Hamtao ( string v , string f , int n){
        cout << " + ----ham tao 3 doi so---- " << endl ;
        this ->nameV = v;
        this -> nameF =f;
        this -> nam = n;
    }
    void show();
};
void Hamtao ::show (){
    cout << " - se xuat ra ba gia tri la : " << endl;
    cout << "     "<<nameV << ", ";
    cout << nameF << ", ";
    cout << nam << endl;

}
int main (){
   // Hamtao p;
    Hamtao p1( "VINFAST","FADIL",2021);
    //p.show();
    p1.show();
}