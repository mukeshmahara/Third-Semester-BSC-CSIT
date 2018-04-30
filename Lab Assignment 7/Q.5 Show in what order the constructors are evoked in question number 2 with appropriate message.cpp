/*Show in what order the constructors are evoked in question number 2 with appropriate message
passing.*/

#include<iostream>
using namespace std;

class employee{
//	char name[15];
//	int employee_number;
	
	public:
		employee(){
			cout<<"Employee class constructor invoked\n";
		}
//		void get_input(){
//			
//			cout<<"Enter the name of the employee :";
//			cin>>name;
//			cout<<"Enter employee number :";
//			cin>>employee_number;
//		}
//		void show_info(){
//			cout<<"Name :"<<name<<endl;
//			cout<<"Employee number :"<<employee_number<<endl;
//		}
//	
	
};

class manager{
//	int salary,num_of_service_yr;
	
	public:
		
		manager(){
			cout<<"manager class constructor invoked\n";
		}
//		void get_input(){
//			cout<<"Salary :";
//			cin>>salary;
//			cout<<"Enter number of service year provided :";
//			cin>>num_of_service_yr;
//		}
//		void show_info(){
//			cout<<"Salary :"<<salary<<endl;
//			cout<<"Years of service provided :"<<num_of_service_yr<<endl;
//		}
};

class lecturer{
//	int salary,num_of_teaching_hr_per_day;
	public:
		
		lecturer(){
			cout<<"lecturer class constructor invoked\n";
		}
//		void get_input(){
//			cout<<"Salary :";
//			cin>>salary;
//			cout<<"Enter number of teaching hour per day :";
//			cin>>num_of_teaching_hr_per_day;
//		}
//		void show_info(){
//			cout<<"Salary :"<<salary<<endl;
//			cout<<"Number of teaching hour per day :"<<num_of_teaching_hr_per_day<<endl;
//		}
};

class man2:public employee,public manager{
	public:
		
		man2(){
			cout<<"man class constructor invoked\n";
		}
//		void get_data(){
//			employee::get_input();
//			manager::get_input();
//		}
//		void show_data(){
//			employee::show_info();
//			manager::show_info();
//		}
//	
};

class lec2:public employee,public lecturer{
	public:
		
		lec2(){
			cout<<"lec2 class constructor invoked\n";
		}
//		void get_data(){
//			employee::get_input();
//			lecturer::get_input();
//		}
//		void show_data(){
//			employee::show_info();
//			lecturer::show_info();
//		}
};

int main(){
	man2 m;
	cout<<"\n\nThen\n";
	lec2 l;

//	cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!About man2!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n";
//	m.get_data();
//	cout<<"\nDETAIL INFORMATION\n";
//	m.show_data();
//	
//	cout<<"\n\n______________________________________________________________________________________________________________________________________\n\n";
//	
//	cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!About lec2!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n";
//	
//	l.get_data();
//	cout<<"\nDETAIL INFORMATION\n";
//	l.show_data();

	return 0;
}
