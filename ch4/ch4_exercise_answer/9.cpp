#include <iostream>
#include <string>
struct CandyBat{
	//char brand[30];
	std::string brand;
	float weight;
	int calorie;
	} ;
int main(int argc, char const *argv[])
{
	using namespace std;

	//参考书118
	CandyBat *candybat=new CandyBat [3];//candybat相当于是结构数组指针，而数组指针跟数组名同等作用
	for(int i=0;i<3;i++)
		// candybat[i]="Mocha Munch";
		// candybat[i]=2.3;
		// //candybat[i]->calorie=350;
		// candybat[i]=350;
		candybat[i]={"MochMunch",2.3,350};

	

	for(int i=0;i<3;i++)
	{
	//	cout<<candybat[i]->brand<<"\n"<<candybat[i]->weight<<"\n"<<candybat[i]->calorie<<endl;
	cout<<candybat[i].brand<<"\n"<<candybat[i].weight<<"\n"<<candybat[i].calorie<<endl;


	}
	delete [] candybat;
	return 0;
}