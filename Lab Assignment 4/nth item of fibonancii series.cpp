#include<iostream>

using namespace std;
int n,i=1;
void display(int x){
	int a1=0,a2=1,a3;
	do{
		a3=a2+a1;
		a1=a2;
		a2=a3;
		i++;
	}
	while(i<n);
	cout<<"\n\nThe "<<x<<"th value of fibonaci series is "<<a3;
}

int main(){
		cout<<"_____________________________________\n";
		cout<<"Program COded by Mukesh Mahara\n";
		cout<<"_____________________________________\n\n";
	cout<<"Enter the nth item of series: ";
	cin>>n;
	display(n);
	return 0;
}
