#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	
	string first_name,last_name;
	char grade;
	int age;
	cout<<"first name:"<<endl;
	getline(cin,first_name);
	cout<<"last_name"<<endl;
	getline(cin,last_name);
	cout<<"grade\n";
	//getline(cin,grade);
	cin>>grade;
	cin>>age;
	// int grade2=grade+1;
	// char grade3=grade2;
	grade++;
	cout<<"Name:"<<last_name<<","<<first_name<<endl<<"grade:"<<grade<<endl
	<<"age:"<<age;


	return 0;
}