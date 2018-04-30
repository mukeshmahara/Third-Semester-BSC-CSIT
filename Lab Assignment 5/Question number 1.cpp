/*Wap that creates a class Number with two attributes whole number integer part and decimal
part. Accept 7 Number objects from the user. Send the array of objects into a separate function
using pointers where the objects are arranged. The arrangement is done such that the objects
are in ascending order according to the decimal part of the object. From the main function
display the order.*/

#include<iostream>
#include<conio.h>
using namespace std;

const int size = 7;

class number{
	int integer;
	int decimal;
	public:
		void getdata(){
			cout<<"\nIntegerpart : ";
			cin>>integer;
			cout<<"Decimalpart : ";
			cin>>decimal;
			cout<<"\n\n";
		}
		
		int wholepart(){
			return integer;
		}
		
		int decimalpart(){
			return decimal;
		}
	};
	
	void arranging(number* a){
		number temp;
	
		for(int i=0;i<size;i++){
			for(int j=i+1;j<size;j++){
				if (a[i].decimalpart() > a[j].decimalpart()){
					temp = a[j];
					a[j] = a[i];
					a[i] = temp;
				}
			}				
		}
	}

int main(){
	number num[size];
	for(int i=0;i<size;i++){
		cout<<"Enter the value of object "<<i+1;
		num[i].getdata();
	}
	cout<<"\n\nThe above data is :\n";
	for( int i = 0;i < size; i++){
		cout<<num[i].wholepart()<<"."<<num[i].decimalpart()<<"\t";
	}
	arranging(num);
	
	cout<<"\n\nThe result obtained after arranging the data according to the decimal part is :\n";
	
	for(int  i = 0;i < size; i++){
		cout<<num[i].wholepart()<<"."<<num[i].decimalpart()<<"\t";
	}
	
	
	return 0;
}
