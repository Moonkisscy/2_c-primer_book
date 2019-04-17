#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	//const int Hour=24,Minute=60,Seconds=6;
	int day,hour,minute,second;
	long seconds;
	cout<<"Enter the number of Seconds:";
	cin>>seconds;
	day=seconds/86400;
	hour=(seconds%86400)/3600;
	minute=(seconds-day*86400-hour*3600)/60;
	second=seconds-day*86400-hour*3600-minute*60;
	cout<<seconds<<"seconds="<<day<<"days,"<<hour<<"hours,"
	<<minute<<"minutes,"<<second<<"seconds";
	
	return 0;
}