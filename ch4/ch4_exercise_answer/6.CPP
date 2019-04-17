#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	struct CandyBat{
		char band[20];
		float weight;
		int calorie;
	} ;
	
	CandyBat CandyBat[3]={
		{"Mocha Munch", 2.3,350},
		{"Mocha Munch", 2.3,350},
		{"Mocha Munch", 2.3,350}
	};
	for(int i=0;i<3;i++)
	{
		cout<<CandyBat[i].band<<"\n"<<CandyBat[i].weight<<"\n"<<CandyBat[i].calorie<<endl;

	}
	return 0;
}