
#include<iostream>
using namespace std;
class Matrix {

    public:

        Matrix (const short rows, const short cols);

        ~Matrix (void)  {delete []elems;}

        double&  operator () (const short row,const short col);

        friend  ostream& operator << (ostream &os, Matrix &mt);

        friend  istream& operator >>(istream &is, Matrix &mt);

        friend  Matrix&  operator  + (Matrix&, Matrix&);

        friend  Matrix&  operator  - (Matrix&, Matrix&);

    private:

         const short  rows;    // so hang

         const short  cols;    // so cot

         double  **elems;    // cac phan tu 

};

Matrix::~Matrix(){
delete []elems[0];
delete []elems;
}
ostream &operator<<(ostream &os,const Matrix &mt){
cout<<"So hang: ";os<<mt.rows;
cout<<"\n";
cout<<"So cot: ";os<<mt.col;
cout<<"Phan tu : ";
for(int i=0;i<mt.row;i++)
for(int j=0;j<mt.col;j++)
{os<<mt.elems[i][j];cout<<" , ";}
cout<<"\n";
return os;
}
istream &operator >>(istream &is, Matrix &mt){
cout<<"Nhap so Hang:"; is>>mt.rows;
cout<<"Nhap so Cot:"; is>>mt.cols;
cout<<"Nhap ptu :";
for(int i=0;i<mt.rows;i++)
for(int j=0;j<mt.cols;j++)
is>>mt.elems[i][j];
return is;
}




int main(){}

