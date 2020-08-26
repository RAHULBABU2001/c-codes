#include<iostream>
#include<math.h>
using namespace std;
class SimpleInterest {
private:
	float principal, rate, si;
	int time;
public:
	void input();
	void calculate();
	void output();
};
void SimpleInterest::input() {
	cout << "Input the principal"<<endl;
	cin >> principal;
	cout<<"time"<<endl;
	cin>>time;
	cout<<"rate of interest"<<endl;
	cin>>rate;
}
void SimpleInterest::calculate() {
	si = (principal * time * rate) / 100;

}
void SimpleInterest::output() {
	cout << "Simple interest=" << si << endl;
}
int main(void) {
	SimpleInterest s;
	s.input();
	s.calculate();
	s.output();
	return 0;
}

