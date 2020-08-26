#include<iostream>
using namespace std;
int main()
{
    string animals[][3]={
	{"fox","dog","cat"},{"mouse","squ","parr"}
	};
	cout<<sizeof(animals[0])<<endl;
	cout<<sizeof(animals)<<endl;
	return 0;
}
