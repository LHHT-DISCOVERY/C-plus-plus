// TEN : LY HUYNH HUU TRI // LOP: 19DTCLC2 // NHOM: 38.

#include<iostream>

using namespace std;

struct sinhvien{
	char hoten[50];
	float diem[50],dtb;
	int somon;
};
// khai báo hàm nhap vào
void nhap(sinhvien &sv){
	cout << " nhap ho ten : " ;
		cin >> sv.hoten;
	cout << " nhap so mon hoc : ";
		cin >> sv.somon;
	for( int i=0 ; i < sv.somon ;i++){
		cout << " nhap diem lan luot so mon hoc : ";
			cin >> sv.diem[i];
}
}
// khai bao ham tinh diem trung binh 
float tinhdiemtrungbinh( sinhvien &sv){
	float sum = 0 ;//tao gia tri ban dau bang 0 de tinh tong trong vong lap for;
	for(int i= 0 ; i < sv.somon ; i++){
	sum += sv.diem[i];// thuc hien tinh tong cac phan tu trong mang 
}
// lay ket qua tu tong cac mon trong vong lap for thuc hien chia cho so mon hoc , roi return lai ket qua trung binh ;
		return sum/sv.somon;
}
// xuat ket qua tu ham
float xuat( sinhvien sv){
	cout << " ten sinh vien la : "<< sv.hoten << endl;
	cout << " so luong mon hoc : "<< sv.somon << endl ; 
	for ( int i = 0 ; i < sv.somon ; i++ ){
		cout << " diem so mon hoc thu : "<< i << " cua " << sv.hoten << " la : "  << sv.diem[i] << " diem"<< endl;
}
}

int main() {
	// khai bao lai bien 
	char hpten[50];
	float diem[50], dtb;
	int somon;
	sinhvien sv1;
	//lan luot goi cac ham nhap ; xuat ; tinh diem trung binh 
	nhap(sv1);
	cout << " diem trung binh la : " << tinhdiemtrungbinh(sv1) << endl;
	xuat(sv1);
	
return 0;
}

