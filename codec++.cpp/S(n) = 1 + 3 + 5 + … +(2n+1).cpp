#include<stdio.h>
int main(){
	int i,n,s=0;
    printf("Nhap n=");
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i=i+2)
    {
    s=s+i;
    }
    printf("Gia tri bieu thuc la: %d ", s);
return 0;
}


