#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int height_foot,height_inch,body_pound;
	//char name;
	const  int foot_inch=12;
	//const int inch_m=0.0254;这是个严重的错误，把0.0254声明为int，大小其实为0，导致后面一直算错
	const float inch_m=0.0254;
	const float body_factor=1/2.2;
	//cout<<"Please enter your name:"<<endl;
	//cin>>name;
	cout<<"Please enter your height,foot:____\b\b\b";
	cin>>height_foot;
	cout<<"inch:"<<"____\b\b\b";
	cin>>height_inch;
	cout<<"Please enter yout body(pound):___\b\b\b";
	cin>>body_pound;
	double BMI_body=body_pound*body_factor;
	double BMI_height=pow((height_foot*foot_inch*inch_m+height_inch*inch_m),2);
	double BMI=BMI_body/BMI_height;
	cout<<"Your BMI is:"<<BMI<<endl;

	
	return 0;
}