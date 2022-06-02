// //  tìm số nguyen tố ;
// // #include<iostream>
// // #include<math.h>

// // using namespace std;
// // bool isPrime(int n){
// // 	if (n < 2) return false;
// // 	for (int i = 2; i <= sqrt(n); i++){
// // 		if (n%i == 0){
// // 			return false;
// // 		}
// // 	}
// // 	return true;
// // }
// // int main(){
// // 	int a[100];
// // 	int n;
// // 	cin >> n;
// // 	for (int i = 0; i < n; i++){
// // 		cin >> a[i];
// // 	}
// // 	for (int i = 0; i < n; i++){
// // 		if (isPrime(a[i])){
// // 			cout << a[i] << " ";	
// // 		}
// //     }
// //     return 0;
	
// // }

// //  tìm số lần suất hiện của số
// // 


// //  kiem tran day so
// // #include<iostream>

// // using namespace std;

// // int a[100001];
// // int main(){
// //     int n;
// //     cin >> n;
// //     for (int i = 0; i < n; i++){
// //         cin >> a[i];
// //     }
// //     bool kt1 = true; // kiểm tra dãy tăng.
// //     bool kt2 = true; // kiểm tra dãy giảm.
// //     for (int i = 1; i < n; i++){
// //         if (a[i] <= a[i-1]) kt1 = false;
// //         if (a[i] >= a[i-1]) kt2 = false;
// //     }
// //     if (kt1 || kt2) cout << "YES";
// //     else cout << "NO";
// //     return 0;
// // }
// // node timnode (node k , int x ){
// //     if(k==null){
// //         return null;
// //     }
// //     if(k!=null){
// //         if (x<k )
// //             return timnode(k.left , x);
// //         else if ( x>k)
// //             return timnode(k.right,x);
// //         else {
// //             return k;
// //         }
// //     }
// // }{
    
// //     return 0;
// // }
// // 
// // using namespace std;
// // int main (){
// //     float diem;
// //     do{
// //         cout << " nhap diem cua ban : ";
// //         cin >> diem;
// //         if(diem<0||diem>10){
// //             cout << " diem khong hop le "<< endl << " xin nhap lai !!! " << endl;
// //         }
// //      } while (diem<0||diem>10);
// //     if(diem>=0 && diem <= 3){
// //         cout << " KEM ";
// //     }
// // //    if(diem = 4 ){
// // //        
// // //        cout << "YEU";
// // //    }
// //     else if (diem >=5 && diem <=6){
// //         cout << "TRUNG BINH";
// //     }
// //     else if (diem >=7 && diem <=8){
// //         cout << "KHA";
// //     }
// //     else if(diem >=9 && diem <= 10){
// //         cout << "GIOI";
// //     }else{cout << " chua xac dinh duoc";}
// //     return 0;
// //     }
// #include<iostream>
// using namespace std;
// #include<conio.h>
// #include <stdio.h>
// #include<string.h>
// void Duide(float dongia , int soluong , float thanhtien){
//     do{
//         cout << " nhap don gia cua loai dui de : ";
//             cin >> dongia;
//             cout << " BAN DA CHON DUI DE VOI LOAI GIA 1 KG la :  " << dongia << " VND" << endl;
//         if(dongia<0){
//             cout << " xin sai xin nhap lai don gia mat hang !" << endl;
//         }
//     }while ((dongia<0));
//     do{
//         cout << " nhap so luong : ";
//             cin >> soluong;
//             cout << " so luong vua nhap la : " << soluong << " KG Dui De" << endl;
//         if ( soluong < 0 ){
//             cout << " nhap sai xin nhap lai so luong mat hang !" << endl;
//     }    
//     }while(soluong < 0);
//     thanhtien = dongia * soluong; 
//     cout << " thanh tien la : " << thanhtien << "VND" <<  endl;
//     if (thanhtien > 100){
//         cout << " `-`-`-`-`-`CHUC MUNG QUY KHACH DUOC GIAM GIA 3%`-`-`-`-`-`- " << endl;
//         cout << "     So tien quy khach can phai thanh toan la : " << thanhtien - thanhtien*0.03 << " VND";
//     }
//     else {cout << " so tien quy khach can thanh toan la : " << thanhtien;}
// }
// void Dehap(float dongia , float soluong , float thanhtien){
//   do{
//   cout << "BAN MUON MUA LAU BAO NHIEU TIEN : ";
//   cin >> dongia;
//   if(dongia<0){
//     cout << " ban da nhap sai vui long nhap lai ! ";
//   }
//   }
//   while (dongia < 0 );
//   do {
//   cout << "nhap so lau : ";
//   cin >> soluong;
//   if (soluong < 0 ){
//     cout << " nhap sai xin vui long nhap lai ! ";
//   }}
//   while(soluong < 0);

// }
// int main (){
//     int key;
//     float dongia;
//     int soluong;
//     float thanhtien;
//     cout << " ||| DAC SAN DE NUI ||| " << endl;
//     cout << "  WELLCOME TO DE NGHIA " << endl;
//     while(true)
//    {
//        system("cls");
//        cout <<"**----------------------------------------------------------**\n";
//        cout <<"**|||||-          CAC MON DAC SAN CUA DE NGHIA -       |||||**\n";
//        cout <<"**|--------------------------------------------------------|**\n";
//        cout <<"**|      1. DUI DE                                         |**\n";
//        cout <<"**|      2. DE HAP                                         |**\n";
//        cout <<"**|      3. DE GIA CAY                                     |**\n";
//        cout <<"**|      4. DE THUI                                        |**\n";
//        cout <<"**|      5. DE NUONG                                       |**\n";
//        cout <<"**|      0. THOAT CHUONG TRINH                             |**\n";
//        cout <<"**----------------------------------------------------------**\n";
//        cout <<"**************************************************************\n";
//        cout <<"**======= XIN MOI NHAP LUA CHON MA BAN MUON THUC HIEN =======**\n";
       
//        cout << " BAT DAU NHAP : ";
//        cin >> key;
       
//        switch(key)
//        {
           
//            case 1:
//            cout << " BAN MUON MUA DUI DE " << endl;
//            Duide(dongia,soluong,thanhtien);
//            getch();
//            break;
//            case 2:
//            cout << " BAN MUON MUA DE HAP "<< endl;
//            Dehap(dongia,soluong,thanhtien);
//            getch();
//            break;
//            case 0 : 
//            cout << " BAN CHON THOAT CHUONG TRINH"  << endl;
//            getch();
//            return 0;
//            default :
//            cout << " BAN DA NHAP SAI , XIN MOI NHAP LAI " << endl;
//            getch();
//            break ;
//        }
//    }
//     return 0;
// }
#include<iostream>
using namespace std;
int main (){
    int x,y;
    if(x>0&&y<0){
        x=23;
    }
    cout << x << " " <<y;
    return 0;
}
 
  
