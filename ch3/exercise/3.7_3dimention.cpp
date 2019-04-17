#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	const int Factor=60;
	float degree,minutes,seconds;
	cout<<"Enter a latitude in degree,minutes,and seconds:"<<endl
	<<"First,enter the degree:";
	cin>>degree;
	cout<<"minutes:";
	cin>>minutes;
	cout<<"seconds:";
	cin>>seconds;
	cout<<"="<<degree+minutes/Factor+seconds/Factor/Factor;


	return 0;
}