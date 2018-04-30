#include<iostream>
#include<conio.h>
using namespace std;
class   measure{
	private:
		int feet,inches;
	  	
	public:
	void initilze(int& x,int& y){
		feet=x;
		inches=y;	
	}
	
	void display(){
			
	}  
};
	int main(){

		int inch1,inch2,feet1,feet2;
		measure obj1,obj2;
		cout<<"_______________________________________________\n\n";
	    cout<<"Program Coded by Mukesh MAhara\n";
	    cout<<"_______________________________________________\n\n";
	cout<<"Enter the feet and inches of object 1."<<endl;
	cout<<"Feet:";
	cin>>feet1;
	cout<<"Inches:";
	cin>>inch1;
	obj1.initilze(feet1,inch1);
	
	cout<<"Enter the feet and inches of object 2."<<endl;
	cout<<"Feet:";
	cin>>feet2;
	cout<<"Inches:";
	cin>>inch2;
   	obj2.initilze(feet2,inch2);
	   
	
	getch();
	return 0;
}
	

