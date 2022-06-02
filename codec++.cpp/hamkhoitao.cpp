#include<iostream>
using namespace std;
#include <string.h>
class animals{

	public:
	char name[20];
	int age;
	float weight;
	char colors[20];
	animals()
	{
		cout<< "call non destruction "<<endl;
		this->name[0]= '\0';
		this->colors[0]= '\0';
		this->weight= 0;
		this->age = 0;
	}
	animals(char*name)
	{
		cout<< "call 1 contruction "<<endl;
		strncpy(this->name,name,19);
		this->colors[0]= '\0';
		this->weight= 0;
		this->age = 0;
	}
	void show()
	{
		cout<<"====================="<<endl;
		cout<<" name : "<< name<<endl;
		cout<<" colors : "<<colors<<endl;
		cout<<" weight : "<<weight<<endl;
		cout<<" age : "<<age<<endl;
		cout<<"====================="<<endl;
	}
	~animals()
	{
		cout<< "call destruction "<<endl;
	}
	
};
int main(int argc,char* argv[])
{
	//char*name = new char[20];
	//strncpy(name,"nguyen van a",19);
	animals s;
	//animals s1(name);
/*	animals s2;
	animals s3;*/
	s.show();
//	s1.show();
	return 0;
}