/*Only default constructor in child and no constructor In parent*/

#include<iostream>
using namespace std;

class parent{
	
	
};

class child:public parent{
	public:
	child(){
		cout<<"Default constructor in child is invoked....\n";
	}
};

int main(){
	
	child c1;
}
