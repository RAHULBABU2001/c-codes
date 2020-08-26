#include<iostream>
using namespace std;
/*== equlity operator
 != not Equal to
 < less than
 > greater than
 <= less than equal
 >= greater than equal
*/
int main()
{
	int value=7;
	int value1=8;
	if(value>=7){
		cout<<"Condition1:true"<<endl;
	}else{
		cout<<"Conditional2:false"<<endl;
	}
	if(value==7 && value1==4){
		cout<<"Condition3:true"<<endl;
	}else{
		cout<<"Conditiona4:false"<<endl;
	}
	if(value==7 || value1==4){
		cout<<"Condition5:true"<<endl;
	}else{
		cout<<"Conditional6:false"<<endl;
	}
	if(value!=8 && value1==7|| value<10){
		cout<<"Condition7:true"<<endl;
	}else{
		cout<<"Condition8:false"<<endl;
	}
	bool condition1=(value!=8 && value1==7);
	cout<<condition1<<endl;
	bool condition2=value<10;
	cout<<condition2<<endl;
	
	if(condition1||condition2){
		cout<<"Condition5:true"<<endl;
	}else{
		cout<<"Conditional6:false"<<endl;
	}
			
		
	return 0;
}

