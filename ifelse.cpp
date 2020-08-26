#include<iostream>
using namespace std;
int main()
{
	cout<<"1.\t Add new record"<<endl;
	cout<<"2.\t Delete record"<<endl;
	cout<<"3.\t View record"<<endl;
	cout<<"4.\tSearch record"<<endl;
	cout<<"5.\tquit"<<endl;
	
	cout<<"Enter the selection"<<""<<flush;
	int value;
	cin>>value;
	 
	 if(value < 3){
	 	cout<<"Insufficient to open"<<endl;
	 	
	 }
	 else{
	 	cout<<"sufficient to open"<<endl;
	 }
	 if(value = 5){
	 	cout<<"Quitting"<<endl;
	 	
	 }
	 else{
	 	cout<<"not Quitting..."<<endl;
	 }
	return 0;
}

