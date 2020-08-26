#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int value=6;
	float value1=6.44;
	cout<<value<<endl;
	cout<< setprecision(20)<<value1<<endl;
	cout<<fixed<<value1<<endl;
    cout<<scientific<<value1<<endl;
	cout<<"size of float: "<<sizeof(float)<<endl;
	double dvalue=76.4;
	cout<< setprecision(20)<<dvalue<<endl;
	long double lvalue=789.938948934;
		cout<<fixed<<lvalue<<endl;
		cout<<"size of float: "<<sizeof(dvalue)<<endl;
		cout<<"size of float: "<<sizeof(lvalue)<<endl;
	
	return 0;
}

