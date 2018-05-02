/*Q.6 Show in what order the constructors are evoked in question number 3 with appropriate message
passing.*/



/*Create a class ‘employee’ with name and employee number as it’s protected data members.
Derive a class emp2 and add compensation and enum type period to indicate if the employee is paid hourly weekly or monthly.
Create two independent parents: manager (with salary and no of service years) and lecturer( with salary and no of teaching hours per day).
Using hybrid inheritance derive man2 and lec2 from class emp2 and also appropriate parent.
Through program show how the information is stored and display those value for each of the derived class objects.*/

#include<iostream>
using namespace std;

class employee{
	protected:
		char name[15];
		int employee_number;
	public:
		employee(){
			cout<<"Employee class construcor invoked\n";
		}
};
class emp2:public employee{
	protected:
		int comp;
		enum type{hourly,weekly,monthly};
		type compensation;
	public:
		
		emp2(){
			cout<<"Emp2 class construcor invoked\n";
		}
//		void get_input(){
//			cout<<"Enter the name of the employee :";
//			cin>>name;
//			cout<<"Employee Number :";
//			cin>>employee_number;
//			cout<<"Enter the type of compensation provided (0 for hourly, 1 for weekly, 2 for monthly):";
//			cin>>comp;
//		}
//		void show_info(){
//			cout<<"Name of Employee :"<<name<<endl;
//			cout<<"Employee Number :"<<employee_number<<endl;
//			if(comp==hourly){
//				cout<<"Employee is compensated  : hourly\n";
//			}
//			else if(comp==weekly){
//				cout<<"Employee is compensated : weekly\n";
//			}
//			else if(comp==monthly){
//				cout<<"Employee is compensated  : monthly\n";
//			}
//			else{
//				cout<<"Invalid input\n";
//			}
//		
//		}
};

class manager{
/*	protected:
	int salary;
	int num_of_service_yr;
*/		public:
			
		manager(){
			cout<<"manager class construcor incoked\n";
		}
};
class lecturer{
/*	protected:
	int salary;
	int num_of_teaching_hr_per_day;
*/	public:
		
		lecturer(){
			cout<<"Lecturer class construcor invoked\n";
		}
};
class man2:public emp2,public manager{
	public:
		
		man2(){
			cout<<"man2 class construcor invoked\n";
		}
/*		void get_data(){
			emp2::get_input();
			cout<<"Enter the Salary :";
			cin>>salary;
			cout<<"Enter number of years of service :";
			cin>>num_of_service_yr;
		}
		void show_data(){
			
			show_info();
			cout<<"Salary :"<<salary<<endl;
			cout<<"Years of service provided :"<<num_of_service_yr<<endl;
		}
*/	
};
class lect2:public emp2,public lecturer{
	public:
		
		lect2(){
			cout<<"lect2 class construcor incoked\n";
		}
/*		void get_data(){
			emp2::get_input();
			cout<<"Enter salary :";
			cin>>salary;
			cout<<"Number of teaching hours per day :";
			cin>>num_of_teaching_hr_per_day;
		}
		void show_data(){
			show_info();
			cout<<"Salary :"<<salary<<endl;
			cout<<"Total teaching hours per day :"<<num_of_teaching_hr_per_day<<endl;
		}
*/		
};

int main(){
	man2 m;
//	cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!Enter detail about man2!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n";
//	m.get_data();
//	cout<<"\nDETAIL of man2\n";
//	cout<<"______________________\n";
//	m.show_data();
//	
cout<<"\n\nThen\n\n";
	lect2 l;
//	cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!Enter detail about man2!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n";
//	l.get_data();
//	cout<<"\nDETAIL of lect2\n";
//	cout<<"______________________\n";
//	l.show_data();
	
	
	return 0;
}
