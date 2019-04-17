#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	struct CandyBat{
		char band[20];
		float weight;
		int calorie;
	} ;
	CandyBat snack={"Mocha Munch", 2.3,350};
	//snack={"Mocha Munch", 2.3,350};
	cout<<snack.band<<" "<<snack.weight<<" "<<snack.calorie;
	return 0;
}