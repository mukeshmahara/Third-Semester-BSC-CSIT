/*WAP to illustrate No any constructor in base and derived class*/

#include<iostream>
using namespace std;

class base{
	public:
		int  a=10;
	
};

class derived:public base{
	
	
};

int main(){
	
	derived B;
	cout<<"a ="<<B.a;
	return 0;
}
