#include <iostream>
struct  antarctica_year_end
{
	int year;
	
};
int main(int argc, char const *argv[])
{
	antarctica_year_end so1,so2,so3;
	so1.year=1998;
	antarctica_year_end *pa=&so2;
	pa->year=1999;
	antarctica_year_end trio[3];
	trio[0].year=2003;//结构名就用点运算符访问。
	std::cout<<trio->year<<std::endl;
	const antarctica_year_end *arp[3]={&so1,&so2,&so3};
	std::cout<<arp[1]->year<<std::endl;
	const antarctica_year_end **ppa=arp;
	auto ppb=arp;
	std::cout<<(*ppa)->year<<std::endl;//箭头运算符是指针作用访问。*ppa是&so1（&so1是指针，所以需要用箭头运算符）
	std::cout<<(*(ppb+1))->year<<std::endl;

	return 0;
}