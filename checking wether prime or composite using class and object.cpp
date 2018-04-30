///Write a function that makes two Distance objects with the features as feet and inch as two data.
//Using pass by reference send these two distances to a function, and calculate the larger of two and display it in the main function.
#include<iostream>
#include<conio.h>

using namespace std;

class time{
	private:
		int hour,minute;
	public:
		void get_time(int hour,int minute){
		cout<<"hour:"<<hour<<"\nminutes:"<<minute;			
		}
		time total_time(time,time);
		void print_time(time);
};
time time::total_time(time t1,time t2){
	time t;
	t.hour=t1.hour+t2.hour;
	t.minute=t1.minute+t2.minute;
	return t;
}

void time::print_time(time t){
	cout<<"\n\nvalue of time is "<<t.hour<<" hours and "<<t.minute<<" minutes"<<endl;
}

int main(){
		time time1,time2,time3;
		
		cout<<"\n\nTime of Object time1\n";
		time1.get_time(3,45);
		
		cout<<"\n\nTime of Object time2\n";		
		time2.get_time(2,20);
		
	//	time3=total_time(time1,time2);
		
		time1.print_time(time1);
		time2.print_time(time2);
		time3.print_time(time3);
		
	getch();
	return 0;
}
