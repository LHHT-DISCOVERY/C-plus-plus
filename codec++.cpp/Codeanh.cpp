#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int i,a,pw;

	do{
		cout << " HAY NHAP MAT KHAU CUA BAN  ^^ \n  MAT KHAU CUA BAN LA  : ";
		cin >> pw;
		if(pw!=2001){
		cout << " SAI MAT KHAU  \n";
		Sleep(1000);
		
		int e = 0 ;
		while (e <= 10)
		{
			cout << "  NHAP LAI MAT KHAU SAU 10S NUA \n  vui long doi sau " << e << "s /10s "  << endl ;
			e++ ;
			Sleep(1000);
			system("cls");
			Sleep(0.0001);
		}
		cout << "  XIN MOI NHAP LAI ! \n  " ;
	}
		
	}
	while(pw!=2001);
	cout << " START LOADING ... \n";
	Sleep(1000);
	system("cls");
	char j=177 , k=209;
	cout << endl ;
	std::cout<<"\t\t\t\t\t\t\t\t\t\t\t\tloading...\n";
	std::cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	for(int i=0;i<26;i++)
	{
		std::cout<<j;
	}
	std::cout<<"\r";
	std::cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	for(int i=0;i<26;i++)
	{
		std::cout<<k;
		Sleep(100);
	}
	cout << endl;
	Sleep(1000);
	for (int k = 0 ; k <= 100 ; k++){
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t LOADING  " << k  << " % "  << endl;
		k += 4 ;
		Sleep(100);
	}
	string line;
	getline(cin,line);
	ifstream file("E:\\EMM.txt");
	while(!file.eof())
	{
	getline(file,line);
	cout<<line<<endl;;
	Sleep(20);
	}
	}	
	
