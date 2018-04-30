/*WAP to illustrate the use of Only parameterized constructor in both parent and child.*/

#include<iostream>
using namespace std;

class parent{
	int num1,num2,num3;
	public:
		parent(int x,int y,int z){
			cout<<"Pareametrized parent constructor invoked\n";
			num1=x;
			num2=y;
			num3=z;
			cout<<"num1 = "<<num1<<"\tnum2 = "<<num2<<"\tnum3 = "<<num3;
		}	
	
};

class child:public parent{
	public:
		child(int a,int b,int c):parent(a,b,c){
		}
	
};

int main(){
	child c(1,2,3);
	return 0;
}
