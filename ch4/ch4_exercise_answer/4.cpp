#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
	using namespace std;
	string name,first_name,last_name;
	getline(cin,first_name);
	getline(cin,last_name);
	name=last_name+','+first_name;
	cout<<name;

	return 0;
}