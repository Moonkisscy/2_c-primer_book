#include <iostream>
#include <climits>
int main(int argc, char const *argv[])
{
	using namespace std;
	int n_int=INT_MAX;
	short n_short=SHRT_MAX;
	long  n_long=LONG_MAX;
	long long  n_llong=LLONG_MAX;
	//unsigned int u_int=UNIT_MAX;

	cout<<"------各整型最大长度-------\n";
	cout<<"int  short  long  longlong "<<endl;
	
	cout<<sizeof(int)<<" "<<sizeof n_short<<" "<<sizeof n_long<<" "<<sizeof n_llong;
	//对类型名，使用sizeof需要括号，变量名可选
	cout<<"Maxium expectively"<<n_int<<" "<<n_short<<" "<<n_long<<" "<<n_llong<<endl;

	//cout<<"Maxium of unsigned int"<<un_int;

	//3.3 三种进制,cout最终输出都为十进制
	int chest=42;
	int waist=0x42;
	int inseam=042;
	cout<<chest<<waist<<inseam<<endl;
	cout<<oct;
	
	cout<<"chest="<<chest<<endl;
	
	return 0;
}