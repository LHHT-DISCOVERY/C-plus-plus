#include<iostream>

using namespace std;
class SP{
	private:
	double r;
	double i;
	public:
	// khoi tao ham 0 doi so
	SP()
	{
	this->r=0;
	this->i=0;
	}
	// khoi tao ham hai tham so r;i
	SP (double r , double i)
	{
		this->r=r;
		this->i=i;
	}
	// ham huy
	~SP()
	{
	this->r=0;
	this->i=0;
	}
	// ham goi khoi tao thong thuong;
	void show(){
		cout << "r = " << r<< endl;
		cout <<"i = " << i << endl;
	}
	//ham goi khoi tao thong thuong +,-;
	void show2 (){
	cout << "r + i = " << r+i << endl;
	cout << "r- i = " << r-i << endl;
	}
	// Operator Overloading nhap
	friend istream &operator>>(istream &is, SP &h){
	cout << "nhap r : " << endl;
	is >> h.r;
	cout << "nhap i : " << endl;
	is >> h.i;
	return is;
	}
	// Operator Overloading xuat
	friend ostream &operator<<(ostream &os, SP  h){
	os<< "r + i = " << h.r + h.i << endl ;
	os<< "r - i = " << h.r-h.i << endl;
	return os;
	}
	
};
int main() {
	SP h2;
	cout << " VI DU : " << endl;
	SP h1(3,4);
	h1.show();//c1: dung de goi khoi tao th�ng thuong
	h1.show2();//c1: goi ham khoi tao ham hai tham so r;i ; +,-;
//	cout << h1; //c2:Operator Overloading xuat
	cin >> h2;//c2:Operator Overloading nhap
	cout << "kq la : " << endl;
	cout << h2;//c2:Operator Overloading xuat
return 0;
}

