#include <iostream>
#include <cstring>
using namespace std;
char *getname(void);//返回一个指向输入字符串的指针
int main(int argc, char const *argv[])
{
	char *name;

	name=getname();
	cout<<name<<" at "<<(int *)name<<"\n";
	delete [] name;
	return 0;
}
char *getname()
{
	char temp[80];
	cout<<"enter last name: ";
	cin>>temp;
	char *pn=new char[strlen(temp)+1];
	strcpy(pn,temp);

	return pn;
}