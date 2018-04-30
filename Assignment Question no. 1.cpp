


	#include <iostream>
	#include<windows.h>
	#include<iomanip>
	using namespace std;

	class employee_info{
		private:
		float bonus_salary,total_salary;
		char employee_name[20],form;
		unsigned int years_of_service,current_salary,sales;
		
		public:
		void getinput()
		{
			cout<<"Enter the name of the employee:";
			cin>>employee_name;
		
			cout<<"Years of Service Provided by "<<employee_name<<":";
			cin>>years_of_service;
		
			cout<<"Current Salary of "<<employee_name<<":";
			cin>>current_salary;
		
			cout<<"Number of sales made by "<<employee_name<<":";
			cin>>sales;	
		
			switch(sales){
				case 0 ... 1000:
				 	form='d';
					break;
				case 1001 ... 3000:
					form='n';
					break;
				default:
					form='g';
			}	
		}
	
		
		void salary_modification(){
			if(form=='g'&&years_of_service>=5){
				bonus_salary = (0.20*current_salary);
				total_salary = current_salary+bonus_salary;
			}
			else if(form=='g'&&years_of_service<5){
				bonus_salary = (0.10*current_salary);
				total_salary = current_salary+bonus_salary;
			}
			else if(form=='n'&&years_of_service>5){
				bonus_salary = (0.10*current_salary);
				total_salary = current_salary+bonus_salary;
			}
			else if(form=='n'&&years_of_service<5){
				bonus_salary=(0.05*current_salary);
				total_salary = current_salary+bonus_salary;
			}
			else{
			bonus_salary=0;			
			total_salary=current_salary;
			}
		}
		void tabulation(){
			cout<<employee_name<<setw(18)<<years_of_service<<setw(19)<<current_salary<<setw(20)<<sales<<setw(21)<<total_salary<<setw(22)<<form<<endl;
				
		}
	};
int main(){
	employee_info e[3];
	system("cls");
	cout<<"_____________________________________"<<endl<<endl;
	cout<<"Program Coded by Mukesh Mahara"<<endl;
	cout<<"_____________________________________"<<endl<<endl;
	
	cout<<"Enter the detail information about employee "<<endl;
	for(int i=0;i<3;i++){
		cout<<"_____________________________________"<<endl<<endl;
		cout<<"Enter the detail of Employee "<<(i+1)<<endl;
		cout<<"_____________________________________"<<endl<<endl;
		e[i].getinput();
		e[i].salary_modification();
	}
	
	cout<<"________________________________________________"<<endl<<endl;
	cout<<"The Detail of the Employee is Tabulated Below"<<endl;
	cout<<"________________________________________________"<<endl<<endl;
	cout<<"Employee_Name"<<setw(18)<<"Years_of_Service"<<setw(18)<<"Current_Salary"<<setw(18)<<"Sales"<<setw(19)<<"Total_salary"<<setw(20)<<"Form"<<endl;
	
	for(int i=0;i<3;i++){
		
		e[i].tabulation();

	}
	

	return 0;
}

