/*Create a class ‘employee’ with name and employee number as it’s private data members. 
Derive a class emp2 and add compensation and enum type period to indicate if the employee is paid hourly, weekly or monthly.
Derive 3 other classes from emp2: manager, lecturer and maintenance using
appropriate inheritance with some additional information in each of the classes. 
Through program showhow the information is stored and display those value for each of the derived class objects.*/

#include<iostream>
//#include<string.h>
using namespace std;

class employee{
	
	char name[15];
	int employee_number;
	
	public:
		void get_input(){
			cout<<"Enter the name of Employee :";
//			gets(name);
			cin>>name;
			cout<<"Employee Number: ";
			cin>>employee_number;			
			
		}
		void show_info(){
			cout<<"Employee Name :"<<puts(name)<<endl;
			cout<<"Employee Number :"<<employee_number<<endl;
		}
		
};
class emp2:public employee{
	protected:
	int comp;
	enum type{hourly,weekly,monthly};

};

class manager:public emp2{
	char level[15];
	int working_hr,salary;
	
	public:
		void get_input(){
			employee::get_input();
			cout<<"Enter level of Manager :";
//			gets(level);
			cin>>level;
			cout<<"Enter working hours :";
			cin>>working_hr;
			cout<<"Salary :";
			cin>>salary;	
			cout<<"Enter type of commpensation provided (0 for hourly,1 for weekly and 2 for monthly):";
			cin>>comp;

		}
		void show_info(){
			cout<<"__________________________________________________\n";
			employee::show_info();
			cout<<"Manager level is :"<<puts(level)<<endl;
			cout<<"Manager's Salary is :"<<salary<<endl;
			cout<<"Working hour's is :"<<working_hr<<endl;
			//type compenstion= (type) comp;
			
			if(comp==hourly){
			
				cout<<"Employee is compensated hourly\n";
			}
			else if(comp== weekly){
				cout<<"Employee is compensated weekly\n";
			}
			else if(comp== monthly){
				cout<<"Employee is compensated monthly\n";
			}
			else{
				cout<<"Invalid input type!!\n";
			}
		}
};

class lecturer:public emp2{
	char faculty[20];
	int working_hr,number_of_periods,lecturer_id,salary;
	
	public:
		void get_input(){
			employee::get_input();
			cout<<"Faculty member of :";
//			gets(faculty);
			cin>>faculty;
			cout<<"Enter working hour :";
			cin>>working_hr;
			cout<<"Enter number of periods taken :";
			cin>>number_of_periods;
			cout<<"Enter lecturer id :";
			cin>>lecturer_id;
			cout<<"Enter the salary :";
			cin>>salary;
			cout<<"Enter type of commpensation provided (0 for hourly,1 for weekly and 2 for monthly):";
			cin>>comp;
			
		}
		void show_info(){
			cout<<"__________________________________________________\n";	
			employee::show_info();
			cout<<"faculty member of :"<<puts(faculty)<<endl;
			cout<<"Working hours :"<<working_hr<<endl;
			cout<<"Number of periods taken :"<<number_of_periods<<endl;
			cout<<"Lecturer ID :"<<lecturer_id<<endl;
			cout<<"Salary :"<<salary<<endl;
			if(comp==hourly){
				cout<<"Employee is compensated hourly\n";
			}
			else if(comp==weekly){
				cout<<"Employee is compensated weekly\n";
			}
			else if(comp==monthly){
				cout<<"Employee is compensated monthly\n";
			}
			else{
				cout<<"Invalid input type!!\n";
			}
		
		}
};

class maintenance:public emp2{
	int emp_id,salary,working_hr;
	public:
		void get_input(){
			employee::get_input();
			cout<<"Enter Employee ID :";
			cin>>emp_id;
			cout<<"Salary : ";
			cin>>salary;
			cout<<"Enter working hour's :";
			cin>>working_hr;
			cout<<"Enter type of commpensation provided (0 for hourly,1 for weekly and 2 for monthly):";
			cin>>comp;
		}
		void show_info(){
			cout<<"__________________________________________________\n";
			cout<<"DETAIL\n";
			employee::show_info();
			cout<<"Employee ID : "<<emp_id<<endl;
			cout<<"Salary : "<<salary<<endl;
			cout<<"Working hour's :"<<working_hr<<endl;
			if(comp==hourly){

				cout<<"Employee is compensated hourly\n";
			}
			else if(comp==weekly){
				cout<<"Employee is compensated weekly\n";
			}
			else if(comp==monthly){
				cout<<"Employee is compensated monthly\n";
			}
			else{
				cout<<"Invalid input type!!\n";
			}
		}
};

int main(){
	cout<<"\t\t\t\t\tProgram Coded by Mukesh Mahara\n\n";
	
	cout<<"\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!About Manager!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout<<"____________________________________________________________________________________________________\n";
	manager m1;
	m1.get_input();
	m1.show_info();
	
	cout<<"\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!About Lecturer!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout<<"____________________________________________________________________________________________________\n";
	
	lecturer l1;
	l1.get_input();
	l1.show_info();
	
	cout<<"\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!About Maintainance!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout<<"____________________________________________________________________________________________________\n";
		
	maintenance m2;
	m2.get_input();
	m2.show_info();
	
	return 0;
}
