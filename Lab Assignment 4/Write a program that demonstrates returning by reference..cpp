/*3.	Write a program that demonstrates returning by reference.*/
#include<iostream>
using namespace std;
int num;

int& set_value(){
	return num;
}
int main(){
	cout<<"_____________________________________\n";
	cout<<"Program COded by Mukesh Mahara\n";
	cout<<"_____________________________________\n\n";
	set_value()=2852;
	cout<<"num:"<<num<<endl;
	return 0;
}



