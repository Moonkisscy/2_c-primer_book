#include <iostream>
int main()
{
	using namespace std;
	const int Size=20;
	char name[Size];
	char dessert[Size];
	cout<<"Eenter our name:\n";
	cin.get(name,Size).get();
	cout<<"Enter your favorite dessert:\n";
	cin.get(dessert,Size).get();
	cout<<"I have some delicious "<<dessert;
	cout<<"for you, "<<name<<".\n";
	return 0;
}