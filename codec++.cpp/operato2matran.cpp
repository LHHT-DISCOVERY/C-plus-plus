#include<iostream>
using namespace std;
class matran {
    private: 
    int n;
    int a[100][100];
    public:
    matran();
    ~matran (){};
    friend istream& operator >> (istream &is , matran &p){
        cout << " nhap kich thuoc ma tran : ";
        cin >> p.n;
        for( int i=0;i<p.n ;i++){
            for(int j=0 ; j<p.n;j++){
                cout << "A[" << i +1 <<"][" << j+1<<"] = " ;
                is >> p.a[i][j];
            }
        }
        return is;
    }
    friend ostream& operator << ( ostream &os , matran p){
        for(int i=0;i<p.n;i++){
            for (int j=0 ; j< p.n;j++){
                os << p.a[i][j] << "\t";
            }
            cout << endl;
        }
        return os;
    }
    matran operator+(matran u);
    matran operator*(matran u);
};
matran ::matran(){
    n = 0;
}
matran matran :: operator+(matran u){
    matran kq;
    kq.n = u.n;
    for ( int i =0 ; i<u.n;i++){
        for (int j=0;j<u.n;j++){
            kq.a[i][j] = this -> a[i][j] + u.a[i][j];
        }
    }
    return kq;
}
matran matran::operator*(matran u){
    matran kq;
    kq.n = u.n;
    for(int i=0;i<u.n;i++){
        for(int j =0; j <u.n ;j++){
            kq.a[i][j]= this -> a[i][j] * u.a[i][j];
        }
    }
    return kq;
}
int main (){
    matran mt1,mt2,kqtong,kqtich;
    cout << " vui long nhap matran 1 : " << endl;
    cin >> mt1;
    cout << " matran vua nhap la : " << endl;
    cout << mt1;
    cout << " vui long nhap matran 2 : " << endl;
    cin >> mt2;
    cout << " matran vua nhap la : " << endl;
    cout << mt2;
    cout << " kq qua tai toan tu tong : " << endl;
    kqtong = mt1 + mt2;
    cout << kqtong;
    cout << " kq qua tai toan tu tich : " << endl;
    kqtich = mt1*mt2;
    cout << kqtich;
    return 0;
}