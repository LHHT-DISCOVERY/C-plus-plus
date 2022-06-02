#include<iostream>
using namespace std;

class Matrix{
public:
int row,col;
float **data;
public:
Matrix(int r=0,int c=0,float v=0);
~Matrix();
friend ostream &operator <<(ostream &OUT,const Matrix &obj);
friend istream &operator >>(istream &IN,Matrix &obj);
float &operator ()(int r,int c);
friend Matrix &operator +(const Matrix &x,const Matrix &y);
friend Matrix &operator -(const Matrix &x,const Matrix &y);
const Matrix &operator =(const Matrix &v);
};
//======================================//
Matrix::Matrix(int r,int c,float v){
int i,j;
row=r;
col=c;
data=new float*[row];
float *temp=new float[row*col];
for(i=0;i<row;i++){
data[i]=temp;
temp+=col;
}

for(i=0;i<row;i++)
for(j=0;j<col;j++)
data[i][j]=v;
}
Matrix::~Matrix(){
delete []data[0];
delete []data;
}
ostream &operator<<(ostream &OUT,const Matrix &obj){
cout<<"So hang: ";OUT<<obj.row;
cout<<"\n";
cout<<"So cot: ";OUT<<obj.col;
cout<<"Phan tu : ";
for(int i=0;i<obj.row;i++)
for(int j=0;j<obj.col;j++)
{OUT<<obj.data[i][j];cout<<" , ";}
cout<<"\n";
return OUT;
}
istream &operator >>(istream &IN, Matrix &obj){
cout<<"Nhap so Hang:"; IN>>obj.row;
cout<<"Nhap so Cot:"; IN>>obj.col;
cout<<"Nhap ptu :";
for(int i=0;i<obj.row;i++)
for(int j=0;j<obj.col;j++)
IN>>obj.data[i][j];
return IN;
}
Matrix &operator +(const Matrix &x,const Matrix &y){
static Matrix t(x.row,x.col);
for(int i=0;i<x.row;i++)
for(int j=0;j<x.col;j++)
t.data[i][j]=x.data[i][j]+y.data[i][j];
return t;
}
Matrix &operator -(const Matrix &x,const Matrix &y){
static Matrix t(x.row,x.col);
for(int i=0;i<x.row;i++)
for(int j=0;j<x.col;j++)
t.data[i][j]=x.data[i][j]-y.data[i][j];
return t;
}

const Matrix &Matrix::operator =(const Matrix &x){
if(this!=&x){
row=x.row;
col=x.col;
delete []data[0];
delete []data;
data=new float*[row];
float *temp=new float[row*col];
for(int i=0;i<row;i++){
data[i]=temp;
temp+=col;
}
for(int i=0;i<row;i++)
for(int j=0;j<col;j++)
data[i][j]=x.data[i][j];
}
}
float &Matrix::operator ()(int r,int c){
return data[r][c];
}
//================================================== ====//
int main(){
Matrix p,t,c,d,e;
cout<<"Nhap du lieu matrix 1:\n";
cin>>p;
cout<<"Nhap du lieu matrix 2:\n";
cin>>t;
d = p;
c = p + t;
e = p - t;
cout<<"Du lieu Matrix d=p:"<<endl;
cout<<d;
cout<<"Matrix tong cua 2 matrix da nhap:"<<endl;
cout<<c;
cout<<"Matrix hieu cua 2 matrix da nhap:"<<endl;
cout<<e;
system("PAUSE");
return EXIT_SUCCESS;
}