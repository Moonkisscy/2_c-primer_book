#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	int updates=6;
	int *p_updates;
	p_updates=&updates;

	cout<<"values:update="<<updates;
	cout<<", *p_updates="<<*p_updates;

	cout<<"&updates="<<&updates;
	cout<<"p_updates="<<p_updates;

	*p_updates=*p_updates+1;
	cout<<"updates="<<updates<<endl;

	return 0;
}