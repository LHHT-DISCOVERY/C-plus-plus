
	// TEN: LY HUYNH HUU TRI , LOP: 19DTCLC2 , Nhom: 38.
#include<iostream>

using namespace std;

struct phanso 
{
int tu,mau;
};
void nhap(phanso &ps1 , phanso &ps2){
	cout << "------ nhap phan so thu nhat ------: " << endl;
	cout << " nhap tu so : " << endl;
	cin >>ps1.tu;
	cout << " nhap mau so : " << endl;
	cin>>ps1.mau;
	cout << " phan so thu nhat la : " << ps1.tu <<"/"<<ps1.mau << endl ;
	cout << " ------ nhap phan so thu hai ------ " << endl;
	cout << " nhap tu so : " << endl;
	cin >>ps2.tu;
	cout << " nhap mau so : " << endl;
	cin>>ps2.mau;
	cout << " phan so thu hai la : " << ps2.tu <<"/"<<ps2.mau<<endl;
}
phanso cong(phanso ps1,phanso ps2){
	phanso ps3;
	ps3.tu = (ps1.tu*ps2.mau)+(ps2.tu*ps1.mau);
	ps3.mau = ps1.mau*ps2.mau;
	return ps3;
}
phanso hieu(phanso ps1 , phanso ps2)
	{
	phanso ps3;
	ps3.tu = ps1.tu*ps2.mau-ps2.tu*ps1.mau;
	ps3.mau = ps1.mau*ps2.mau;
	return ps3;
	}
phanso tich (phanso ps1 , phanso ps2){
	phanso ps3;
	ps3.tu = ps1.tu*ps2.tu;
	ps3.mau = ps1.mau*ps2.mau;
	return ps3;
}
phanso thuong(phanso ps1 , phanso ps2){
	phanso ps3;
	ps3.tu = ps1.tu*ps2.mau;
	ps3.mau = ps1.mau*ps2.tu;
	return ps3;
	}
void xuat(phanso ps3){
	cout << " ket qua la : "<< ps3.tu<<"/"<<ps3.mau << endl ;
	}

int main() {
	phanso ps1,ps2,ps3;
	nhap(ps1,ps2);
	cout << " ------ KET QUA THUC HIEN PHEP TINH ------ " << endl;
	ps3 = cong(ps1,ps2);
	xuat(ps3);
	ps3 = hieu(ps1,ps2);
	xuat(ps3);
    ps3 = tich(ps1,ps2);
    xuat(ps3);
	ps3 = thuong(ps1,ps2);
	xuat(ps3);
return 0;
}

