#include <iostream>
#include <array>
using namespace std;
int main(int argc, char const *argv[])
{
	array<float,3> run;
	float sum=0;
	for(int i =0;i<3;i++)
	{
		cin>>run[i];
		
		sum+=run[i];
	}
	cout<<3<<endl<<sum/3<<endl;
	return 0;
}