#include<iostream>
using namespace std;
void showmenu(){
	cout<<"1.search"<<endl;
		cout<<"2.View Content"<<endl;
			cout<<"3.Quit"<<endl;
}
int rahul(){
		cout<<"Enter your selection"<<endl;
		int input;
		cin>>input;
	return input;
	
}
int main()
{    
     showmenu();  
     	int inputoranyothername=rahul();
     		switch(inputoranyothername){
			case 1:
				cout<<"Searching...."<<endl;
				break;
			case 2:
				cout<<"Viewing...."<<endl;
				break;	
			case 3:
				cout<<"Quitting...."<<endl;
				break;
				default:
				cout<<"Invalid"<<endl;
		}

	return 0;
}
