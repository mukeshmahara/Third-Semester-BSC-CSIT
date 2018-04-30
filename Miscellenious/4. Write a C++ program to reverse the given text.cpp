/*4. Write a C++ program to reverse the given text 
*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char text[100];
	gets(text);
	cout<<"The reverse of the above text is :\n";
	cout<<strrev(text);
	return 0;
}
