/*Q1. Write a C++ code to solve the quadratic equation.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

void solve(float x,float y,float z){
	float a,b,c;
	a=x;
	b=y;
	c=z;
	int count=0;
	
	float root1,root2;
	for(float i=-999;i<999;i++){
		if((x*i*i+y*i+z)==0){
			root1=i;
			count=1;
			
		}
		if(count==1&&(x*i*i+y*i+z)==0){
				root2=i;
				
			}

	}
	
	
	cout<<"The root of the equation "<<a<<"x^2 + "<<b<<"x + "<<c <<" =0 are \n\n ";
	cout<<"x1 ="<<root1<<" and x2= "<<root2;
}

int main(){
	float a,b,c;
	cout<"Enter the coefficient of the quardatric function of the form(ax^2+bx+c)\n";
	cout<<"a =";
	cin>>a;
	cout<<"b =";
	cin>>b;
	cout<<"c =";
	cin>>c;	
	
	solve(a,b,c);
	return 0;
}
