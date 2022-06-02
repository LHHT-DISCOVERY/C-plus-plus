#include<iostream>

using namespace std;

void sapxep(int E[], int left, int right){
	int pivot = E[(left+right)/2];
	int i = left, j = right;
	while (i <=j){
		while (E[i] < pivot){
			i++;
		}
		while (E[j] > pivot){
			j--;
		}
		if (i <= j){
			int temp = E[i];
			E[i] = E[j];
			E[j] = temp;
			i++;
			j--;
		}
	}
	if (i < right){
		sapxep(E, i, right);
	}
	if (left < j){
		sapxep(E, left, j);
	}
}
void Sx_chan_le ( int E[], int n ){
int i=0 , j = n-1 ;
while (i < j){
While ( E[i] % 2 == 0 && i < j )
i = i ++ ;
while ( E[j] % 2 == 1 && i < j )
j = j -- ;
if (i < j ){
int a = E[i] ;
E[i]= E[j];
E[j]= a ;
i = i + 1 ;
j = j - 1 ;
}
}
if ( E[i] % 2 == 0 ){
sapxep(b,0, k-1);
    
else
{
sapxep(E,0, i-1);

}
}
void xuatmang(int E[], int n){
    for (int i = 0; i < n; i++){
    	cout << E[i] << " ";
	}
}
int E[100001], b[100001];int c[100001];int d[100001];
int main(){
    int n;
    cout << " nhap size mang : " ;
    cin >> n;
    cout << " nhap cac phan tu cua mang can sap xep : " << endl;
    for (int i = 0; i < n; i++){
        cout << " E[" << i << "]: ";
        cin >> E[i];
    }
int i=0 , j = n-1 ;
while (i < j){
While ( E[i] % 2 == 0 && i < j )
i = i ++ ;
while ( E[j] % 2 == 1 && i < j )
j = j -- ;
if (i < j ){
int a = E[i] ;
E[i]= E[j];
E[j]= a ;
i = i + 1 ;
j = j - 1 ;
}
}
if ( E[i] % 2 == 0 ){
sapxep(b,0, i-1);
    
else
{
sapxep(E,0, i-1);

}

    // int k = 0;
    // for (int i = 0; i < n; i++){
    // 	if (E[i] %2 == 0){
    // 		b[k] = E[i];  
	// 		k ++ ;  		
	// 	}
   
	// }
    // cout << "-----------------" << endl;
    // int m =0 ;
    // for (int i = 0; i < n; i++){
    // 	if (E[i] %2 != 0){
    // 		c[m] = E[i];  
	// 		m ++ ;  		
	// 	}
    
	// }
	// sapxep(b,0, k-1);
    // sapxep(c,0, m-1);
    // cout << " Mang sau sap xep la : " << endl;
    // // k = 0;
	// // for (int i = n-1; i >= 0; i--){
	// // 	if (E[i] %2 != 0){
	// // 		E[i] = c[m];
	// // 		k ++;
	// // 	}
	// // }
	// // for (int i = 0; i < n; i++){
	// // 	if (E[i] %2 == 0){
	// // 		E[i] = b[k];
	// // 		k ++ ;
	// // 	}
	// // }
    xuatmang(b,n);
    xuatmang(c,n);
    
}
