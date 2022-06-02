#include<iostream>

using namespace std;
class hcn{
	private:
	float d ,r ,cv,dt;
	public:
	// khoi tao ham 0 doi so
	hcn()
	{
	this->d=0;
	this->r=0;
	}
	// khoi tao ham hai tham so r;i
	hcn (float d , float r)
	{
		this-> d=d;
		this-> r = r;
	}
	// ham huy
	~hcn()
	{
	this-> d=0;
	this-> r= 0;
	}
	// ham goi khoi tao thong thuong;
	void show(){
		cout << "d = " << d<< endl;
		cout <<"r = " << r << endl;
	}
	//ham goi khoi tao thong thuong +,-;
	void show2 (){
	cout << " cv = " << (d+r)*2 << endl;
	cout << "dt = " << d*r << endl;
	}
	// Operator Overloading nhap
	friend istream &operator>>(istream &is, hcn &h){
	cout << "nhap r : " << endl;
	is >> h.d;
	cout << "nhap i : " << endl;
	is >> h.r;
	return is;
	}
	// Operator Overloading xuat
	friend ostream &operator<<(ostream &os, hcn  h){
	os<< "cv = " << (h.d + h.r)*2 << endl ;
	os<< "dt = " << h.d * h.r << endl;
	return os;
	}
	
};
int main() {
	hcn h2;
	cout << " VI DU : " << endl;
	hcn h1(3,4);
	 h1.show();//c1: dung de goi khoi tao th�ng thuong
	// h1.show2();//c1: goi ham khoi tao ham hai tham so r;i ; +,-;
	cout << h1; //c2:Operator Overloading xuat
	cin >> h2;//c2:Operator Overloading nhap
	cout << "kq la : " << endl;
	cout << h2;//c2:Operator Overloading xuat
return 0;
}
