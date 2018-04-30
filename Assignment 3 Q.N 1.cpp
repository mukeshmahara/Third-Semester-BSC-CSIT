#include<iostream>
#include<iomanip>
#include<conio.h>
#include<windows.h>
#define sugar_price_per_kg 60
using namespace std;


class sugar_survey{

	private:
		char sugar_name[20];
		float sugar_price,discount;
		
		int weight,total_price;
		
	public:
		void data_input(){
			
			
			cout<<"Enter the name of the sugar :";
			cin>>sugar_name;
			cout<<"Enter the weight of Sugar(in Kg):";
			cin>>weight;
			if(weight>=2){
				total_price=(weight*sugar_price_per_kg);
				discount=(.05*total_price);
			}
			else
			{
				discount=0;
			}	
		}
	
	
		inline  display_data_format(int i ){
			cout<<setw(0)<<"|"<<setw(2)<<(i+1)<<setw(3)<<"|"<<setw(4)<<sugar_name<<setw(8)<<"\t|"<<setw(9)<<weight<<"kg"<<setw(13)<<"|"<<setw(14)<<"Rs."<<total_price<<setw(17)<<"|"<<setw(18)<<"Rs."<<discount<<setw(20)<<"|"<<endl;
		
	}
		
};

	int main(){
		system("cls");
		sugar_survey s[4];
		
			cout<<setw(80)<<"Note!:Price of 1Kg of Sugar is Rs. 60"<<endl;
			cout<<setw(75)<<"Data Input Section HERE!!"<<endl;
			for(int i=0;i<4;i++){
				s[i].data_input();		
			}
		
			cout<<setw(70)<<"Coded By Mukesh Mahara"<<endl;
			cout<<setw(80)<<"Salt and Sugar Trading Co-orparation\n\n"<<endl;
			

			cout<<setw(2)<<" S.N\t"<<setw(4)<<"Sugar_Name\t"<<setw(9)<<"\tWeight\t"<<setw(14)<<"\t\tTotal_Price\t\t"<<setw(18)<<"\t\tDiscount Recived\t\t"<<endl;
		
			for(int i=0;i<4;i++){
				s[i].display_data_format(i);
			}
			
	
		getch();
	}
