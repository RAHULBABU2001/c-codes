#include<iostream>
using namespace std;
int main()
{
/*	for(int i=0;i<5;i++){
		cout<<"i is:"<<i<<endl;
		if(i==3){
			break;
		}
		cout<<"Looping...."<<endl;
	}
	cout<<"denied"<<endl;*/
	
	for(int i=0;i<5;i++){
		cout<<"i is:"<<i<<endl;
		if(i==3){
			continue;
		}
		cout<<"Looping...."<<endl;
	}
	return 0;
}

