#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	const int Size=15;
	char name1[Size];
	char name2[Size]="C++OWBOY";
	char dessert[Size];
	cout<<"Howdy! I'm"<<name2;
	cout<<"what's your name\n";
	//cin>>name1;
	cin.getline(name1,Size);
    cout<<"enter your deeset";
    cin.getline(dessert,Size);
	cout<<"your name has"<<strlen(name1)<<"letters and"<<sizeof name1<<"bytes\n";
	cout<<"your initial is"<<name1[0];
	name2[3]='\0';
	cout<<"here are the first 3 characters of my name:";
	cout<<name2<<endl;
	return 0;
}