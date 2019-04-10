/*2019/4/10*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int height;
	const int factor=12;
	cout<<"Please Enter Your Height(inch)____\b\b\b";
	cin>>height;

	cout<<"Your heigt is:"<<height/factor<<"foot"<<height%factor<<"inch"<<endl;


	return 0;
}