#include <iostream>
#include <cstring>
int main(int argc, char const *argv[])
{
	using namespace std;
	const int size=20;
	char first_name[size],last_name[size];
	char name[2*size];
	cin.getline(first_name,size);
	cin.getline(last_name,size);
	//char name[strlen(first_name)+strlen(last_name)];
	//cout<<strcat(first_name,last_name);
	//cout<<last_name<<","<<first_name<<endl;
	strcpy(name,last_name);
	strcat(name,",");
	strcat(name,first_name);
	cout<<name;
	return 0;
}