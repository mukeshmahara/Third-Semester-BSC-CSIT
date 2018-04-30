/*4.	Write a program with functions character_repeat. Overload the function with the following functionalities.

No argument ----------------------------------------' displays '*' 5 times
1 character argument ----------------------------'  displays the user entered character 7 times
1 character argument and 1 integer argument -----------'displays the user entered character times determined by the integer
*/
#include<iostream>
#include<conio.h>
using namespace std;
	void display(){
		cout<<"Displaying the * symbol 5 times: ";
		for(int i=1;i<=5;i++){
			cout<<"*";
		}	
	}

	void display(char b ){

		for(int i=1;i<=5;i++){
			cout<<b;
		}
	}
	void display(char b,int a){
		for(int i=1;i<=a;i++){
			cout<<b;
		}
	}

int main(){
	char a;
	int n;
		cout<<"_____________________________________\n";
		cout<<"Program cOded by Mukesh Mahara\n";
		cout<<"_____________________________________\n\n";
	display();
	cout<<"\n\n";
	cout<<"Enter a character: ";
	cin>>a;
	display(a);
	cout<<"\n\n";
	cout<< "Enter the character: ";
	cin>>a;
	cout<<"\n";
	cout<<"Enter the number upto which you want to print the character:";
	cin>>n;
	display(a,n);
}


