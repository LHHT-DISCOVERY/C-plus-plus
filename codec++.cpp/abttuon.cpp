#include<iostream>
using namespace std;
struct CAUTRUC
{
    int songuyen;
    float sothuc;
}MANG[10][20];
// câu a 
void nhap( CAUTRUC MANG[][20] , int &m , int &n)
{ do{

	cout << " nhap vao so hang : " ; cin >> n ;
	
	}while (n <= 0 || n > 10);
	do {
		cout << " nhap vao so cot : " ; cin >> m;
	}
	while (m <= 0 || m > 20);
	
    for(int i = 0; i < n;i++)
    {
        for(int j = 0;j < m;j++ )
        {
            cout<<"MANG NGUYEN ["<<i+1<<"]["<<j+1<<"]= "<<"  ";
            cin>>MANG[i][j].songuyen;
            cout<<"MANG THUC ["<<i+1<<"]["<<j+1<<"]= "<<"  ";
            cin>>MANG[i][j].sothuc;
        }
    }
}
void xuatmang(CAUTRUC MANG[][20], int m , int n)
{
    cout<<"xuat mang so nguyen : "<<endl;

    for(int i =0;i < n;i++)
    {
        for(int j=0;j <m;j++)
        {
            cout<<MANG[i][j].songuyen<<"\t";

        }
        cout << endl;
    }
    cout<<"xuat mang so thuc : "<<endl;

    for(int i =0;i < n;i++)
    {
        for(int j=0;j <m;j++)
        {
            cout<<MANG[i][j].sothuc<<"\t";
        }
        cout << endl;
}
}
//cau b
void Hamtinhmang(CAUTRUC MANG[][20], int n , int m)//cau B
{
    for(int i =0;i <n;i++)
    {
        for(int j =0;j <m;j++)
        {
            if(MANG[i][j].songuyen > MANG[i][j].sothuc)
            {
            
                cout << MANG[i][j].songuyen;
            }
            else 
             {cout << "\t"<<-1 << "\t" ;};
        }
    }
}
//câu c
 int tinhtong_cot_j(CAUTRUC MANG[][20],int x, int m ,int n)
{
    int s = 0;
    for(int i=0;i < n;i++)
    {
     
         s = s +  MANG[i][x].songuyen; 
         
    }
    return s;
}
//câu d
main()
{
    int s,n,m,x;
    CAUTRUC MANG[10][20];
    int ptr[10][20];
    // câu a 
    nhap(MANG,m,n);
    xuatmang(MANG,m,n) ; cout << endl;
    // câu b
    cout << " xuat mang ptr "<< endl;
    Hamtinhmang(MANG,n,m); cout << endl;
    // câu c
    do {
    cout << " nhap phan tu cua cot trong mang SONGUYEN can tinh tong : "; cin >> x;
   }
    while(x < 0 || x>5);
    s = tinhtong_cot_j(MANG,x-1,m,n);
    cout<< "kq la : " << s;
    return 0;
}