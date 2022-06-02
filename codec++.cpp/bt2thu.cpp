#include<iostream>
using namespace std;
struct CAUTRUC
{
    int songuyen;
    float sothuc;
}MANG[3][5];

void nhap( CAUTRUC MANG[][5])//cau A
{
    for(int i = 1; i <= 3;i++)
    {
        for(int j = 1;j <= 5;j++ )
        {
            cout<<"MANG["<<i<<"]["<<j<<"]= "<<"  ";
            cin>>MANG[i][j].songuyen;
            cout<<"MANG THUC ["<<i<<"]["<<j<<"]= "<<"  ";
            cin>>MANG[i][j].sothuc;
        }
    }
}
void xuatmang(CAUTRUC MANG[][5])//cau A
{
    cout<<"xuat mang so nguyen "<<endl;

    for(int i =1;i <= 3;i++)
    {
        for(int j=1;j <= 5;j++)
        {
            cout<<"MANG["<<i<<"]["<<i<<"]= "<<" "<<MANG[i][j].songuyen<<endl;
            cout<<"MANG["<<i<<"]["<<i<<"]= "<<" "<<MANG[i][j].sothuc<<endl;
        }
    }
}
void tinhmang(CAUTRUC MANG[][5],int ptr[][5])//cau B
{
    for(int i =1;i <= 3;i++)
    {
        for(int j =1;j <= 5;j++)
        {
            if(MANG[i][j].sothuc > 0)
            {
                ptr[i][j] = (int)MANG[i][j].sothuc;
            }
            else ptr[i][j] = -1;
        }
    }
}

 int tinhtong_cot_j(CAUTRUC MANG[][5],int x)
{
    int s = 0;
    for(int i=1;i <= 3;i++)
    {
     while(x > 0 && x <5)
     {
         s += MANG[i][x].songuyen; 
         break;
     }   
    }
    return s;
}
main()
{
    int s;
    CAUTRUC MANG[3][5];
    nhap(MANG);
    s = tinhtong_cot_j(MANG,3);
    cout<<s;
}

