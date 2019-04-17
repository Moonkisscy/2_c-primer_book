#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long global_people,american_people;
	
	cout<<"Enter the world's people:____\b\b\b";
	cin>>global_people;
	cout<<"Enter the us's people:____\b\b\b";
	cin>>american_people;
	float percent=(double(american_people)/double(global_people))*100;
	cout<<"us percent"<<percent<<"%";



	return 0;
}