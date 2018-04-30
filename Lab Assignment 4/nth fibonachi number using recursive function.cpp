#include<iostream>
using namespace std;
int result;
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
	int num,arr[50],pos;
	cout<<"_____________________________________\n";
	cout<<"Program COded by Mukesh Mahara\n";
	cout<<"_____________________________________\n\n";

	cout<<"Enter the nth position of the fibonaci number:";
	cin>>num;
	
	cout<<"the "<<num<<"th number of the fibonaci series is :"<<fib(num)<<endl;
	/*for(int i=1;i<=num;i++){
	int result=fib(i);
	arr[i]=fib(i);
	cout<<"arr"<<"["<<i<<"] = "<<result<<"\n";	
	}
	cout<<"Enter the position of the number in fibonaci series: ";
	cin>>pos;
	cout<<"the "<<pos<<"th fibonaci number in the series is "<<arr[pos];
	*/return 0;
}
