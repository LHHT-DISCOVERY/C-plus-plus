#include<iostream>
using namespace std;
struct sophuc
{
	float thuc,ao;
};
sophuc nhap(sophuc &sp1,sophuc &sp2)
	{
	cout<<"nhap so phuc 1 "<<endl;
	cout<< "Nhap phan thuc : ";
	cin>>sp1.thuc;
	cout<< "nhap phan ao : ";
	cin>>sp1.ao;
	cout<<"nhap so phuc 2  "<<endl;
	cout<< "Nhap phan thuc : ";
	cin>>sp2.thuc;
	cout<< "nhap phan ao : ";
	cin>>sp2.ao;
	}
sophuc cong(sophuc sp1,sophuc sp2)
	{
		sophuc sp3; 
		sp3.thuc = sp1.thuc + sp2.thuc;
		sp3.ao = sp1.ao + sp2.ao;
		return sp3;
	}
sophuc chia(sophuc sp1,sophuc sp2)
	{
		sophuc sp3;
		sp3 = sp1.thuc * sp2.thuc + sp1.ao * sp2.ao + sp1.thuc*sp2.ao + sp1.ao*sp2.thuc;
		cout<< "/" << (sp2.thuc*sp2.thuc + sp2.ao*sp2.ao);
		return sp3;
	}
	void xuat(sophuc sp3)
	{
		//if( sp3.ao >0)
		cout<<sp3.thuc << "+"<<sp3.ao<<"i"<<endl;
		// cout<<"so phuc"<<sp3.thuc<<sp3.ao<<"i";
	}
main()
{
	sophuc sp1,sp2,sp3;
	nhap(sp1,sp2);
	cout << " so phuc vua nhap la : " << endl;
	xuat(sp1);
	xuat(sp2);
	cout<< " ket qua cong 2 so phuc la : " << endl;
	sp3 = cong(sp1,sp2);
	xuat(sp3);
	cout<< " ket qua tru 2 so phuc la : " << endl;
	xuat(sp3);
	sp3 = chia(sp1,sp2);
	return 0;
	
}
