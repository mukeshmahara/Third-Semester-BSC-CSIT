/*WAP to illustrate Only default constructor in both base and derived class*/

#include<iostream>
using namespace std;

class base{
	protected:
	base(){
		cout<<"Default constructor is invoked from base class....\n\n";
	}
};
class derived:public base{
	public:
		derived(){
		cout<<"Default constructor is invoked from the derived class...\n";
	
		}
};

int main(){
	derived D;
	return 0;
}
