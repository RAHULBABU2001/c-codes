#include<iostream>
#include<conio.h>
using namespace std;
class stu{
	private:
		int id;
		char name[20];
	public:
		void readstu(){
			cout<<"Enter the name and ID"<<endl;
			cin>>id>>name;
		}
		void showstu();
	};
	void stu::showstu(){
		cout<<"stu id = "<<id<<endl;
		cout<<"name = "<<name;
	}
	int main(){
		stu s;
		s.readstu();
		s.showstu();
		return 0;
	}

