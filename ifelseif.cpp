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
	if(value==1){
		cout<<" Adding new record"<<endl;
	}
	else if(value==2){
			cout<<"Deleteing record"<<endl;
		
	}
	else if(value==3){
	cout<<"Viewing record"<<endl;
   }
   	else if(value==4){
	cout<<"searching record"<<endl;
   }
   	else if(value==5){
	cout<<"Quiting record"<<endl;
   }
   else if(value>=5){
	cout<<"Invalid character"<<endl;
   }
	return 0;
}

