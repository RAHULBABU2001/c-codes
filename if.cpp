#include<iostream>
using namespace std;
int main()
{
	int password=123;
	cout<<"Plese enter your passsword> "<<endl;
	int input;
	cin>>input;
     cout<<password<<endl;
     if(input==password){
     	cout<<"the password accepted"<<endl;
	 }
	 if(input !=password){
	 	cout<<"The password is incorrect"<<endl;
	 }
	return 0;
}

