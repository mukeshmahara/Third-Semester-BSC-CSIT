/*WAP to Illustrate how the constructors are invoked in object creation in case of Only default constructor in base but no constructor in derived class*/
#include<iostream>
using namespace std;

class base{

	protected:
		
		base(){
			cout<<"default Base class constructor is invoked..\n";
			
		}
	
};

class derived:public base{
	public:
//	derived(){
//		cout<<"\nDerived class constructor is invoked...\n";
//	}
};

int main(){
		derived D;
		
	
	return 0;
}
