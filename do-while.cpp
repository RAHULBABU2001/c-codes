#include<iostream>
using namespace std;
int main()
{

/*	cout<<"Enter your password"<<endl;
     string input;
	cin>>input;*/
	
/*	if(input==password){
		cout<<"Password accepted"<<endl;
		}
		else{
			cout<<"Password denied"<<endl;
		}*/
			const string password="hello";
			string input;
		do{	
		cout<<"Enter your password"<<endl;
	     cin>>input;
	     }
		while(input!=password);
			cout<<"password Accepted"<<endl;
			return 0;}
		
		
	



