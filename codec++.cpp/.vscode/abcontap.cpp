#include<iostream>
using namespace std;
class  doibong
{
private:
    char *name;
    int tranthang , tranhoa, tranthua, banthang, banthua;
public:
// câu a
     doibong(){
         this -> name = "";
         this -> tranthang = 0;
         this-> tranthua = 0;
         this -> tranhoa = 0;
         this -> banthang = 0;
         this ->  banthua = 0; 
     }
     doibong(char *name , int tranthang, int tranhoa,int tranthua, int banthang,int banthua ){
         
         this -> name = name;
         this -> tranthang=tranthang;
         this -> tranhoa = tranhoa;
         this -> tranthua = tranthua;
         this -> banthang = banthang;
         this -> banthua = banthua;
     }
     ~doibong(){
         cout << " ham huy";
     }
     // câu b
     friend istream &operator>> (istream &is , doibong &db){
    cout << " nhap ten doi bong : ";
    is >> db.name;
    cout << " nhap so tran thang : " ;
    is >> db.tranthang;
    cout << " nhap so tran thua : " ;
    is >> db.tranthua;
    cout << " nhap so tran hoa : ";
    is >> db.tranhoa;
    cout << " nhap so ban thang : " ;
    is >> db.banthang;
    cout << " nhap so ban hoa : " ;
    is >> db.banthua;
    return is;
    

}

friend ostream &operator << (ostream &os , doibong db){
    os << " ten doi bong : " << db.name << endl;
    os << " so tran thang : " << db.tranthang << endl;
    os << " so tran thua : " << db.tranthua << endl;
    os << " so tran hoa : " << db.tranhoa << endl;
    os << " so ban thang : " << db.banthang << endl;
    os << " so ban thua : " << db.banthua  << endl;
    return os ;

}
int tinhtongdiem ( doibong db);
int tinhhieu (doibong db);
};
// câu C
int doibong :: tinhtongdiem (doibong db){ 
    int kq1 = 0;

    kq1 =  db.tranthang *3  + db.tranhoa*1+ db.tranthua *0; 

    return kq1;
};
// câu d 
int doibong::tinhhieu (doibong db){
    int kq2 = 0;
    kq2 = db.banthang - db.banthua;
    return kq2;
}
int main (){
    doibong db2;
    doibong db;
    cout << db;
    cout << "===========================================" << endl;
    doibong db1("Paris Saint - Germain",1,2,3,4,5);
    cout << db1;
    cout << " xin moi nhap doi bong : " << endl;
     cin >> db2;
     cout << " xuat doi bong ";
     cout << db2;
     

    return 0;
}



    
