#include<iostream>

using namespace std;
float chuviHCN(float n , float m ){
	 
	return (m+n)*2;
}
float dientichHCN(float n , float m ){

	return (n*m);
}
int main() {
	float n;
	float m;
	cout << " nhap chieu dai: " ;
	cin >> n;
	cout << " nhap chieu rong : ";
	cin >> m;
	cout << " chu vi HCN la : ";
	cout <<  chuviHCN(n,m)<< endl;
	cout << " dien tich HCN la : ";
	cout << dientichHCN( n,m);
return 0;
}

