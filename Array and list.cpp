#include<iostream>
using namespace std;
int main()
{ 
    int value[3];
        value[0]=80;
        value[1]=81;
        value[2]=82;
		   cout<<value[0]<<endl;
		   cout<<value[1]<<endl;
		   cout<<value[2]<<endl;
		   
		   double number[4]={4.5,5.6,5.7,6.7};
		   for(int i=0;i<4;i++){
		   	cout<<"element of index=="<<number[i]<<endl;

		   }
		   string text[3]={"apple","banana","mango"};
		   for(int i=0;i<3;i++){
		   cout<<"fruits==  "<<text[i]<<endl;}
	return 0;
}

