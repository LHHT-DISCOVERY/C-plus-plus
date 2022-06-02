/* #include<iostream>
using namespace std;
void show( string s ) {
   for ( int i = 0 ; i < s.size() ; i++){
      if ( s[i] >= 'A' && s[i] <= 'Z'){
         s[i] = s[i] + 32;
      }
   }
   cout << s << endl;
}
int main () {
   string s1, s2, s3;
   cin >> s1 >> s2 >> s3;
   show(s1);
   show(s2);
   show(s3);
   return 0;
}*/
#include<iostream>
using namespace std;
int main (){
   string s1,s2,s3;
   cin >> s1 >> s2 >> s3 ;
   for (int i = 0 ; i < s1.size(); i++){
      if ( s1[i]  >='A' && s1[i] <= 'Z'){
         s1[i] = s1[i] + 32 ;
      }
   }

   for (int i = 0 ; i < s2.size(); i++){
      if ( s2[i]  >='A' && s2[i] <= 'Z'){
         s2[i] = s2[i] + 32 ;
      }
   } 

   for (int i = 0 ; i < s3.size(); i++){
      if ( s3[i] >='A' && s3[i] <= 'Z'){
         s3[i] = s3[i] + 32 ;
      }
   }
   cout << s1 << endl << s2 << endl << s3 << endl ;
   return 0 ;
}