// #include <iostream>
// using namespace std;
// int main()
// {
// 	int a=2;
// 	cout<<a<<"hello word"<<endl;

// 	return 0;
// }
//以上为测试 
#include <iostream>
#define ZERO 0
#include <climits>
int main(int argc, char const *argv[])
{
	using namespace std;
	short sam=SHRT_MAX;
	unsigned short sue=sam;
	cout<<"Sam has"<<sam<<"dollars and Sue has"<<sue;
	cout<<"dollars deposited."<<endl
		<<"Add $1 to each account."<<endl<<"Now";
	sam=sam+1;
	sue=sue+1;
	cout<<"Sam has"<<sam<<"dollars and Sue has"<<sue;
	cout<<"dallars deposited.\nPoor Sam!"<<endl;
	sam=ZERO;
	sue=ZERO;

	return 0;
}
