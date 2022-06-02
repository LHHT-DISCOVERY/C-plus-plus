#include<iostream>

using namespace std;

 void nhapmangA(float A[][7], int m ,int n){
 for ( int i = 0 ; i < n ; i++){
 	for ( int j = 0 ; j< m ; j++){
 	cin >> A[i][j];
 }}
	
 }
  void xuatmangA(float A[][7], int m, int n){
  for (int i = 0 ; i < n ; i++ ){
  	for (int j = 0 ; j < m; j++){
  	cout << A[i][j] << " \t ";
  	}cout << "\n";
  	}}
  int nhapx( int &x){
  	cout << " nhap X : ";
  	cin >> x;
  	return x; }
  void timgiatri(float A[][7], int &x, int m , int n ){
  	float b = 2*x+1;
  	for ( int i=0 ; i <n; i++){
  		for ( int j = 0; j < m ; j++){
  		if (A[i][j]>b){
  		cout << " kq la : "<< A[i][j];
  		}}}
  }

int main() {
	float A[5][7];
	int n,m,x;
	cout << " nhap so hang n : ";
	cin >> n;
	cout << " so cot m : ";
	cin >> m;
	cout << " nhap vao ma tran : "<< endl ;
	nhapmangA(A,m,n);
	cout << " ma tran vua nhap la : " << endl;
	xuatmangA(A,m,n);
	nhapx(x);
	timgiatri(A,x,n,m);
return 0;
}

