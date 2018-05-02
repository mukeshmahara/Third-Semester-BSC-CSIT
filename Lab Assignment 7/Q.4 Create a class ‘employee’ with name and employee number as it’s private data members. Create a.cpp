/*Create a class ‘employee’ with name and employee number as it’s private data members. Create a
multilevel formation with three generation. Through program show how the information is stored and
display those value for the final derived class.*/
#include<iostream>
using namespace std;

class employee{
	
	char name[15],address[20];
	int employee_num;
	public:
		void get_input(){
			cout<<"Name of employee :";
			gets(name);
			cout<<"Employee number :";
			cin>>employee_num;
			cout<<"Enter the address of the employee :";
			cin>>address;
		}
		void show_info(){
			cout<<"Employee Name :"<<name<<endl;
			cout<<"Employee Number :"<<employee_num<<endl;
			cout<<"Employee Address : "<<address<<endl;
		}
	
};

class emp1:public employee{
	
//	char name1[15];
//	int employee_num1;

	public:
		void get_input(){
			employee::get_input();
//			cout<<"Name of employee 1:";
//			cin>>name1;
//			cout<<"Employee number 1:";
//			cin>>employee_num1;
		}
		void show_info(){
			employee::show_info();
//			cout<<"Employee Name 1:"<<name<<endl;
//			cout<<"Employee Number 1 :"<<employee_num<<endl;
		}
	
};

class emp2:public emp1{
//	char name2[15];
//	int employee_num2;

	public:
		void get_input(){
			emp1::get_input();
//			cout<<"Name of employee 2:";
//			cin>>name2;
//			cout<<"Employee number 2:";
//			cin>>employee_num2;
		}
		void show_info(){
			emp1::show_info();
//			cout<<"Employee Name :"<<name2<<endl;
//			cout<<"Employee Number :"<<employee_num2<<endl;
		}

};

class emp3:public emp2{
//	char name3[15];
//	int employee_num3;
	public:
		void get_data(){
			emp2::get_input();
//			cout<<"About employee\n";
//			
//			cout<<"Enter name 3 :";
//			cin>>name3;
//			cout<<"Enter employee number 3:";
//			cin>>employee_num3;
		}
		void show_data(){
			emp2::show_info();
//			cout<<"Name 3:"<<name3<<endl;
//			cout<<"Employee Number 3:"<<employee_num3;
		}
};

int main(){
	emp3 emp;
	cout<<"Enter Employes Detail\n";
	cout<<"________________________\n";
	emp.get_data();
	cout<<"\n\nEmployee Detail\n________________\n";
	emp.show_data();
	return 0;
	
}

