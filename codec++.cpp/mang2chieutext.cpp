#include <stdio.h>
#include <conio.h>
void nhap(int a[][10],int &n,int &m)
{
   for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
      {
         printf("[%d][%d]= ",i+1,j+1);
         scanf("%d",&a[i][j]);
      }
}
void xuat(int a[][10],int n,int m)
{
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
         printf("%5d ",a[i][j]);
      printf("\n");
   }
}
int tong(int a[][10],int n,int m,int k)
{
	int tong=0;
	for(int j=0;j<m;j++)
		tong = tong + a[k][j];
	return tong;
}

int main()
{
	int n,m,x[10][10],a,k;
	printf(" nhap so hang cua ma tran:");scanf("%d",&n);
	printf("nhap so cot cua ma tran:");scanf("%d",&m);
	nhap(x,n,m);
	xuat(x,n,m);
	printf("Nhap so hang can tinh tong : ");scanf("%d",&k);
	a=tong(x,n,m,k-1);
	printf("gtln la:%d",a);
	getch();
}
