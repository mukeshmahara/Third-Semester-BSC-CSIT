#include<iostream>
using namespace std;

class sub{
	private:
		int a=10,b=-20;
		
	public:

		void display(){
			cout<<"a = "<<a<<"\t"<<"b = "<<b;
		}
		void friend operator -(sub &z);		
};

void operator-(sub &z){
		z.a=-z.a;
		z.b=-z.b;
}


int main(){
	sub num;
	cout<<"Before Overloading\n\n";
	num.display();
	
	cout<<"\n\nAfter overloading\n\n";
	-num;
	num.display();
	return 0;
}
