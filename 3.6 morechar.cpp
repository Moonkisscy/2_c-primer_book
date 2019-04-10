#include <iostream>
int main()
{
	using namespace std;
	char ch='M';
	int i=ch;
	cout<<"The ASCII code for"<<ch<<"is"<<i;
	cout<<"Add one to the character code:"<<endl;
	ch=ch+1;
	i=ch;
	cout<<i;

	cout<<"Displaying char ch using cout.put(ch):";
	cout.put(ch);
	cout.put('!');
	cout<<endl<<"Done"<<"\a"<<endl;
	for(i=1;i<10;i++)
	{
		cout<<endl<<"Done"<<"\a"<<endl;
	}
	cout<<"fge"<<'\n';
	cout<<"wanli"<<"\n";
	cout<<"caonima";
	return 0;
}