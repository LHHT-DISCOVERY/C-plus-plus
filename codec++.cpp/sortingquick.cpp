#include<iostream>
using namespace std;
void nhapmang(int E[] , int &n){
cout << " nhap sizze mang : "<< endl;
	cin >>n;
	cout << " nhap vao phan tu cua mang : " << endl;
	for (int i =0 ; i< n ; i++){
		cout << "E[" << i << "] : " ;
		cin >> E[i];
	}
}
int partition(int E[], int left , int right){
	int i = left ;
	int j = right;
	int pivot = E[right];
	while (i<j){
		while (E[i] < pivot && i<j){
			i++;
		}
		while (E[j-1] >= pivot && i<j){
			j--;
		}
		if(i<j){
			int t = E[i];
			E[i]=E[j-1];
			E[j-1]=t;
			i++;j--;
		}
	}
	if(pivot < E[i]){
		int t = E[i];
		E[i]=E[right];
		E[right]=t;}
return i;
}
void quicksort(int E[], int left , int right){
	if(right>left){
		int i = partition (E,left,right);
		quicksort(E, left, i-1); 
		quicksort(E, i+1, right);
	}
}
//void Chantrailephai(int E[], int n)
//{
//    int i, j;
//    i = 0;j = n - 1;
//    while(i <j)
//    {
//        while(E[i] %2 == 0&& i < j)  
//           { i++;}
//        while(E[j] %2 != 1&& i < j) 
//            {j--;}
//        if(i < j)  
//        {
//            int t = E[i];
//			E[i] = E[j];
//			E[j] = t;
//            i++;j--;
//        }
//		for (int i=0 ; i<n ; i++ ){
//			cout << E[i] << " ";
//		}
//    }
//}
void xuatmang(int E[], int n){
	for(int i = 0 ; i< n ; i++){
		cout << E[i] << " ";
	}	
}
int main(){
	int E[100];
	int n;
	nhapmang(E,n);
	quicksort(E,0,n-1);
	xuatmang(E,n);
	return 0;
		
}

