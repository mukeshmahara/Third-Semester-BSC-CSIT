/*WAP to illustrate the use of Both default and parameterized constructor in parent and only parameterized
constructor in child*/

#include<iostream>
using namespace std;

class parent{
	protected:
		int num1,num2;
	public:
		parent(){
			
			cout<<"Default parent constructor invoked ";
		}
			
		parent(int a,int b){
			num1=a;
			num2=b;
			cout<<"\nValue initialized using parent constructor ...\n";
			cout<<"num1 = "<<num1<<"\nnum2 = "<<num2;
		}
};

class child:public parent{
	
	
	public:
		child(){
			cout<<"\ndefault child constructor is invoked.\n";
		}
		child(int x,int y):parent(x,y){
		}
		
};

int main(){
	child c1,c(10,12);
	return 0;
}
