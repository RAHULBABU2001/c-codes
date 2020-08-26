#include<iostream>
using namespace std;
#define MAX 10
class student{
private:
	char name [30];
	int rollno,total;
	float perc;
public:
	void getdetails(void);
	void putdetails(void);
	
};
void student ::getdetails(void){
	cout<<"Enter name: "<<endl;
	cin>>name;
	cout<<"Enter the roll number: "<<endl;
	cin>>rollno;
	cout<<"Enter the total marks out of 500: "<<endl;
	cin>>total;
	
	perc=(float)total/500*100;
}
void student::putdetails(void){
	cout<<"student details:"<<endl;
	cout<<"name"<<name<<"rollno"<<rollno<<"total"<<total;
	
}
int main(){
	 student std[MAX];
	int n,loop;
	cout<<"enter the total number of student"<<endl;
	cin>>n;
	for(loop=0;loop<n;loop++){
		cout<<"Enter the details of student "<<loop+1<<endl;
		std[loop].getdetails();
		
	}
	for(loop=0;loop<n;loop++){
			cout<<" details of student "<<loop+1<<endl;
			std[loop].putdetails();
	
}}
