#include<stdio.h>
int main(){
	int a[50];
    int i,n,tg,max,j,s=0; 
    printf("nhap vao so phan tu: "); 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {        
    scanf("%d", &a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
    if(a[i]>max)
    {
    max =a[i];
    }
    }
    printf("\nSo lon nhat =%d",max);
    printf("\nvi tri cua gia tri lon nhat trong day la: ");
    for(i=0;i<n;i++)
    {
    if (a[i]==max)
    {
    printf("%6d", i+1);
    }
    }
//sap xep day so theo thu tu tang dan
    for(i=0;i<n-1;i++)
    for(j=i+1; j<n; j++)
    {
    if(a[i]>a[j])
    {
    tg=a[i];
    a[i]=a[j];
    a[j]=tg;
    } 
    }
    printf("\nday so sau khi sap xep la:");
    for(i=0;i<n;i++)
    {
    printf("%6d",a[i]);
    }
//Tinh tong va trung binh cong cac so trong day
    for(i=0;i<n;i++)
    {
    s=s+a[i];
    }
    printf("\nTong cac so trong day la: %d",s);
    printf("\nTrung binh cong cac so trong day la: %f", (float)s/n);
return 0;
}


