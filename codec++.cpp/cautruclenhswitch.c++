#include<iostream>

using namespace std;

int main() {
	int month, day;
	cout << "month : " << endl;
	cin >> month;

	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			day = 31;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			day = 30;
			break;
		}
		default: {
			day = 28;
		}
	}
	cout << day;
return 0;
}

