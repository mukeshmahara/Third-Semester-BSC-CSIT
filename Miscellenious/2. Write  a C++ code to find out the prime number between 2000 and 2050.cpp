/*2. Write  a C++ code to find out the prime number between 2000 and 2050
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	for(int i=2000;i<2050;i++){
		for(int j=2;j<2050;j++){
			if(i%j!=0){
				cout<<i<<"\n";
			}
			break;
		}
		cout<"\n";
		
	}	
	return 0;
}
