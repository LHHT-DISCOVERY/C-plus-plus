#include<iostream>
using namespace std;
void nhapmang(int E[], int n ){
    cin >> n;
    cout << "nhap mang " << endl;
    for(int i=0 ; i<n ; i++){
        cout << "E[" << i << "] = " ;
        cin >> E[i];
    }
}
void sapxep(int E[], int n)
{
 int i, j;
 for (i = 0; i < n - 1;i++)
 for (j = i + 1; j < n;j++)
 if ((E[i] % 2 != 0 && E[j] % 2 == 0) 
  || (E[i] % 2 == 0 && E[j] % 2 == 0 && E[i]>E[j]) 
  || (E[i] % 2 != 0 && E[j] % 2 != 0 && E[i]>E[j]))
 {
  int t = E[i];
  E[i] = E[j];
  E[j] = t;
 }
}
void xuatmang(int E[] , int n){
    for (int i= 0 ; i< n ; i++){
        cout <<" mang vua nhap la : " << E[i];
    }
}
int main(){
    int E[100];
    int n;
    nhapmang (E,n);
    //xuatmang(E,n);
    sapxep(E,n);
}
