/*3. Write  a C++ code to calculate the compound interest of a sum of a money.
*/
#include<iostream>
using namespace std;

int main(){
	float ca,p,t,r,i,ci,ta;
	cout<<"Enter principle =";
	cin>>p;

	cout<<"Enter time =";
	cin>>t;
	cout<<"Enter rate =";
	cin>>r;	
	
	i=(p*t*r)/100;
	ta=p+i;
	
	ci=(ta*t*r)/100;
	ca=p+ci;
	cout<<"\n\nIntrest is "<<i;
	cout<<"\n\nAmount ="<<ta;
	
	
	cout<<"\n\nCompound intrest ="<<ci;
	cout<<"\n\nCompound Amount ="<<ca;
	
	return 0;
}
