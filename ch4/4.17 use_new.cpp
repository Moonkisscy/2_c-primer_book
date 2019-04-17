#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	int nights=1001;
	int *pt=new int;
	*pt=1001;

	cout<<"nights="<<nights<<endl<<&nights<<endl;
	cout<<"int value="<<*pt<<"\npt="<<pt<<endl;

	double* pd=new double;
	*pd=1001.0;

	cout<<"*pd"<<*pd<<" location="<<pd<<"\nlocation of pointer pd:"<<&pd;
	cout<<"size of pt="<<sizeof(pt);
	cout<<"size of *pt="<<sizeof(*pt)<<endl;

	cout<<sizeof(pd)<<sizeof(*pd);



	return 0;
}