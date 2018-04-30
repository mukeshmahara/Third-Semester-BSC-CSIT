/*Create a class called Time that has a separate int member data for hours, minutes and seconds.
One constructor should initialize this data to 0 whereas another constructor should initialize it to
fixed values. Another member function should display it in 11:59:59 format. The final member
function should add two object of type time passed as arguments.
One main program should create two initialized time objects and one that isn’t initialized. Then
it should add two initialized values together, leaving the result in this third object. This needs to
be done in member function defined outside of the class. Display the value in the main function.*/

#include<iostream>
#include<conio.h>
using namespace std;

class time{
	int hours,minutes,seconds;
	
	public:
		time(){
			hours=minutes=seconds=0;
		}

		time(int hrs,int mins,int secs){
			hours=hrs;
			minutes=mins;
			seconds=secs;
		}
		
		void showtime(){
			cout<<hours<<":"<<minutes<<":"<<seconds;
		}
		
		time totaltime(time,time);
	};
	
	time time::totaltime(time t1, time t2){
		time temp;
		temp.hours=t1.hours+t2.hours;
		temp.minutes=t1.minutes+t2.minutes;
		temp.seconds=t1.seconds+t2.seconds;
		

		
		temp.minutes=temp.minutes+(temp.seconds/60);
		temp.seconds=temp.seconds%60;
		temp.hours=temp.hours+(temp.minutes/60);
		temp.minutes=temp.minutes%60;
		
		return temp;
		
		
		
	}

int main(){
	time time1(8,55,66),time2(2,45,58),time3;
	
	
	cout<<"time1 :";
	time1.showtime();
	
	cout<<"\ntime2 : ";
	time2.showtime();
	
	time3=time3.totaltime(time1,time2);
	cout<<"\nTotal:-> time3 = ";time3.showtime();
	 
	
	return 0;
}
