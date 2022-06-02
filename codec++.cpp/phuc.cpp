#include<iostream>
using namespace std;
class phuc{
	
	private:
	float thuc,ao;
	public:
	
	phuc(){ thuc = ao = 0;};
	phuc ( float , float);
	~phuc(){ };
	void nhap();
	void xuat();
	phuc operator+(phuc);
	phuc operator-(phuc);
};
phuc::phuc(float thuc , float ao) {
	this -> thuc = thuc ;
	this -> ao = ao;
}
 


void phuc ::nhap(){
	cout << " nhap phan thuc : ";
	cin >> thuc;
	cout << " nhap phan ao : ";
	cin >>ao;
}
void phuc::xuat(){
	cout << "("<< thuc << "+"<<ao << "i )";
}
phuc phuc::operator+(phuc p){
	phuc kq;
	kq.thuc = this->thuc + p.thuc;
	kq.ao =  this->ao + p.ao;
	return kq;
}
phuc phuc:: operator-(phuc p){
	phuc kq;
	kq.thuc = this->thuc - p.thuc;
	kq.ao =  this->ao - p.ao;
	return kq;
}

int main (){
	phuc sp1, sp2,kq;
	cout << " Ham Tao " << endl;
	phuc p(2,4); // hàm tạo có đối số ngầm định là (2,4)
	p.xuat() ; cout << endl;
	sp1.nhap();
	sp2.nhap();
	kq = sp1+sp2;
	sp1.xuat();cout << " + " ; sp2.xuat() ; cout<< "= " ; kq.xuat();
	cout << endl;
	kq = sp1-sp2;
	sp1.xuat();cout << " - " ; sp2.xuat() ; cout<< "= " ; kq.xuat();
	return 0;
}
