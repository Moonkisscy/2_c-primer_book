#include <iostream>
#include <cstring>
//#include <string>
int main(int argc, char const *argv[])
{
	using namespace std;
	char animal[20]="bear";
   // string bird="wren";
	//指向char的指针变量
	const char * bird="wren";
	char *ps;
	char flower[10]="rose";
	cout<<flower<<"s are red\n";

	cout<<animal<<"and";
	cout<<bird<<"\n";

	cin>>animal;
	ps=animal;
	cout<<ps<<"!\n";
	cout<<animal<<"at"<<(int *)animal<<endl;
	
	cout<<ps<<"at"<<(int *)ps<<endl;
	

	ps=new char[strlen(animal)+1];
	strcpy(ps,animal);

	cout<<animal<<"at"<<(int *)animal<<endl;
	cout<<ps<<"at"<<(int *)ps<<endl;
	delete [] ps;
	return 0;

	return 0;
}