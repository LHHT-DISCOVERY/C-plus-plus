#include<iostream> 
using namespace std;
#include<cstring>
class Hoadon{
    public:
    char * sp;
    static int sosanpham;
    float tongtien ;
    private:
    char *tenkhachhang;
    char *diachi;
    Hoadon(char *ten , char *diachi , char *sp , int sosp , float tongtien ){
        strcpy(this -> tenkhachhang ,ten);
        strcpy ( this ->diachi,diachi);
        strcpy ( this -> sp,sp);
        this -> sosanpham = sosp;
        this -> tongtien = tongtien;
        
    }
    ~Hoadon() { 

    };
    friend istream &operator >> ( istream &is , Hoadon hd){
        cout << " nhap ten khach hang : ";
        is >> hd.tenkhachhang;
        cout << " nhap dia chi : ";
        is >> hd.diachi;
        cout << " nhap ten sp : ";
        is >> hd.sp;
        cout << " nhap so sp : ";
        is >> hd.sosanpham;
        cout << " nhap tong tien : " ;
        is>>hd.tongtien;
        return is;

    }
    friend ostream &operator<< ( ostream &os, Hoadon hd ){
        os << " khach hang : " << hd.tenkhachhang << endl;
        os << " dia chi : "  << hd.diachi << endl;
        os << " sp : " << hd.sp << endl;
        os << " so luong : " << hd.sosanpham << endl;
        os << " tong tien: " << hd.tongtien;
        return os;

    }
    
};
