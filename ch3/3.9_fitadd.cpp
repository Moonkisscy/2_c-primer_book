#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	float a=2.4E+22f;
	float b=a+1.0f;
	cout<<"a"<<a<<endl;
	cout<<"b-a="<<b-a<<endl;
	//float 类型只能表示数字中的前6位或前7位。
	double c=50.25;
	double d=11.17;
	cout.setf(ios_base::fixed,ios_base::floatfield);
	cout<<"c/d="<<c/d<<endl;
	const int Lbs_per_stn=14;
	int lbs=181;
	cout<<lbs/Lbs_per_stn<<" "<<lbs%Lbs_per_stn<<endl;
	//类型转换
	float tree=3;

	int guess(3.9832);
	int debt=7.3E6;
	cout<<tree<<" "<<guess<<" "<<debt<<endl;

	//以{}方式初始化时进行的转换
	const int code =66;
	int x=66;
	//char c1 {31325};
	char c2= {66};
	char c3 {code};
	//char c4= {x};
	x=31325;
	char c5=x;

	cout<<x<<" "<<" "<<c2<<" "<<c3<<" "<<" "<<c5<<endl;

	//强制类型转换
	int ausks , bats, coots;
	ausks=19.99+11.99;
	bats=(int)19.9+(int)11.99;
	coots=int(19.99)+int(11.99);
	cout<<ausks<<" "<<bats<<" "<<coots<<endl;

	char ch='Z';
	cout<<"The code for"<<ch<<"is";
	cout<<int(ch)<<endl;
	cout<<"yes,the code is"<<static_cast<int>(ch)<<endl;
    char pro= {88};
    cout<<pro<<endl<<char(88)<<endl<<3/4<<endl<<6/4<<endl<<3%4<<endl<<6*3/4<<endl;

    char grade=65;
    int grade2=65;
    cout<<grade<<endl<<grade2<<endl;
    double x1=3.3,x2=5.0;
    int c1=x1+x2;
    int pos=int(x1)+int(x2);
    cout<<c1<<endl<<pos<<endl;
   // c1=x1+x2;

	return 0;

}