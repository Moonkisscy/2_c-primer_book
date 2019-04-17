#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	struct  Pizza
	{
		char name[20];
		float diameter;
		float weight;	
	};
	Pizza pizza;
	cin.getline(pizza.name,20);
	cin>>pizza.diameter;
	cin>>pizza.weight;
	cout<<pizza.name<<endl<<pizza.diameter<<endl<<pizza.weight<<endl;

	return 0;
}