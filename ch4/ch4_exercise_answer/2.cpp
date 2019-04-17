#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
	using namespace std;
	//const int size=20;
	string name,dessert;

	cout<<"name:\n";
	getline(cin,name);
	cout<<"dessert:";
	getline(cin,dessert);
	cout<<name<<"\n"<<dessert;
	return 0;
}