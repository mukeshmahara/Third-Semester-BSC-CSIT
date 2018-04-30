/*5.Write  a C++ code to get the list of leap years from 1900 to 2000.*/
#include<iostream>
using namespace std;


int main(){
	cout<<"The leap year between 1900 to 2000 are \n";
	for(int i=1900;i<=2000;i=i+4){
		cout<<i<<"\t";
	}
	
	
	return 0;
}
