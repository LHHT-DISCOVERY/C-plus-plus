#include<iostream>
#include<conio.h>
#include<fstream>
 
using namespace std;
class CMatrix
{
    int r;
    int c;
    int **a;
public:
    CMatrix(void);
    CMatrix(int r, int c, int**x);
    CMatrix(const CMatrix& x);
    CMatrix& operator=(const CMatrix&);
    CMatrix operator+(const CMatrix&);
    CMatrix operator-(const CMatrix&);
    CMatrix operator*(const CMatrix&x,CMatrix& p );
    void print();
    void input();
   
   
    ~CMatrix(void);
};
 
 
CMatrix::CMatrix(void)
{
    a=0;
    r=0;
    c=0;
}
 
CMatrix::~CMatrix(void)
{
    for(int i=0;i<r;i++)
       delete []a[i];
    delete []a;
}
CMatrix::CMatrix(int r, int c, int**x)
{
  this->r=r;
  this->c=c;
  a=new int*[this->r];
  for(int i=0;i<this->r;i++)
  {
      a[i]=new int[this->c];
      for(int j=0;j<this->c;j++)
          a[i][j]=x[i][j];
  }
}
CMatrix::CMatrix(const CMatrix& x)
{
      this->r=x.r;
      this->c=x.c;
      a=new int*[this->r];
      for(int i=0;i<this->r;i++)
      {
          a[i]=new int[this->c];
          for(int j=0;j<this->c;j++)
              a[i][j]=x.a[i][j];
      }
}
 
CMatrix& CMatrix::operator=(const CMatrix& x)
{
   if(this->a)
       delete []this->a;
   this->r=x.r;
   this->c=x.c;
   a=new int*[this->r];
      for(int i=0;i<this->r;i++)
      {
          a[i]=new int[this->c];
          for(int j=0;j<this->c;j++)
              a[i][j]=x.a[i][j];
      }
      return *this;
}
void CMatrix::print()
{
    for(int i=0;i<this->r;i++)
    {
        for(int j=0;j<this->c;j++)
            cout<<this->a[i][j]<<" ";
        cout<<endl;
    }
}
void CMatrix::input()
{
    /*cin>>this->r;
    cin>>this->c;
    a=new int*[this->r];
    for(int i=0;i<this->r;i++)
    {
      a[i]=new int[this->c];
      for(int j=0;j<this->c;j++)
          a[i][j]=rand()%4;
    }*/
   
    cout<<"Enter the number of rows for the matrix:";
    cin>>this->r;
    cout<<"Enter the number of column for the matrix:";
    cin>>this->c;
    cout<<"Enter the element of the matrix:"<<endl;
    a = new int*[this->r];
    for(int i = 0; i<this->r ; i++)
    {
        a[i] = new int[this->c];
        for(int j = 0; j<this->c; j++)
            cin>>a[i][j];
    }
 
}
CMatrix CMatrix::operator+(const CMatrix&p)
{
   CMatrix x;
   if(this->c!=p.c||this->r!=p.r)
       return x;
   /*Arr c;
        c.n=x.n;
        c.a=new int[c.n];
        for(int i=0;i<c.n;i++)
            c.a[i]=this->a[i]+x.a[i];
        return c;*/
   x.r=p.r;
   x.c=p.c;
   x.a=new int*[x.r];
      for(int i=0;i<x.r;i++)
      {
          x.a[i]=new int[x.c];
          for(int j=0;j<x.c;j++)
              x.a[i][j]=this->a[i][j]+p.a[i][j];
      }
      return x;
}
CMatrix CMatrix::operator*(const CMatrix& x,const CMatrix& p)
{
   
   if(x.c!=p.r)
       return x;
   CMatrix kq;
   kq.r=x.r;
   kq.c=p.c;
   kq.a=new int*[x.r];
      for(int i=0;i<kq.r;i++)
          kq.a[i]=new int[p.c];
    for( int i=0; i< kq.r; i++)
        for( int j=0; j< kq.c; j++)
        {
           
            kq.a[i][j] = 0;
            for( int k=0; k< kq.c; k++)
                kq.a[i][j] = x.a[i][k] * p.a[k][j];
        }
        return kq;
}
 
CMatrix CMatrix::operator-(const CMatrix&p)
{
   CMatrix x;
   if(this->c!=p.c||this->r!=p.r)
       return x;
   x.r=p.r;
   x.c=p.c;
   x.a=new int*[x.r];
      for(int i=0;i<x.r;i++)
      {
          x.a[i]=new int[x.c];
          for(int j=0;j<x.c;j++)
              x.a[i][j]=this->a[i][j]-p.a[i][j];
      }
      return x;
}
void main()
{
    CMatrix h;
    h.input();
    h.print();
    CMatrix n;
    n.input();
    n.print();
    cout<<endl;
    CMatrix t;
    t=h+n;
    t.print();
    CMatrix mt1;
    mt1 = h*n;
    mt1.print();
}