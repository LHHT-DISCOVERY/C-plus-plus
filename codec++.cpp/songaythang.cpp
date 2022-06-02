#include <iostream>
using namespace std;

int main() {
    int  month;
    cout << " nhap thang : ";
    cin >> month;
  
 
                switch(month) {
                        
                        case 1:
                        case 3:
                        case 5:
                        case 7:
                        case 8:
                        case 10:
                        case 12:
                        {
                          cout << " co 31 ngay ";
                        break;
                        }
                        case 2 :
                        {
						cout << " 28 hoac 29 ngay";
						break;
						}
                        case 4:
                        case 6:
                        case 9:
                        case 11:
                            {
                            cout << " co 30 ngay ";
                                
                            break;
                            }
                        default:
                        cout << "XIN LOI ! ko ton tai thang nay! ";
                        }
                
        
    


    return 0;
        }
