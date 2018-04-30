/*Write a program which uses recursive function to display the nth term as entered by the user*/
#include<iostream>
using namespace std;

int fib(int x){
	int f;
	if(x==1){
		return (0);
	}
	else if(x==2){
		return (1);
	}
	else
	f=fib(x-1)+fib(x-2);
	return f;
}

int main(){
	int num;
	cout<<"_____________________________________\n";
	cout<<"Program COded by Mukesh Mahara\n";
	cout<<"_____________________________________\n\n";

	cout<<"Enter the nth position of the fibonaci number:";
	cin>>num;
	
	cout<<"the "<<num<<"th number of the fibonaci series is :"<<fib(num)<<endl;
	return 0;
}
