#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;	
};
int main(int argc, char const *argv[])
{
	using namespace std;
	inflatable guest;
	//guest.name='test';
	guest.price=20;
	inflatable guest2={"chen",12,11};
	cout<<guest.price;
	cout<<guest2.price;
	return 0;
}
