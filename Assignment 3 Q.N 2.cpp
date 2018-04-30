#include<iostream>
#include<iomanip>
#include<windows.h>
#include<conio.h>
using namespace std;


void compare(int &a,int &b,int &c,int &d){

    if(a>c&&b>d){
        cout<<"Length of object 1 is greater than object 2"<<endl;
        cout<<"The length of object b is "<<a<<" feet and "<<b<<" inches";
        }
        else if(a==b&&b>d)
		{     
		cout<<"Length of object 1 is greater than object 2"<<endl;
        cout<<setw(30)<<"The length of object b is "<<a<<" feet and "<<b<<" inches";
        }
        else
        {
		cout<<"Length of object 2 is greater than object 1"<<endl;
        cout<<"The length of object 2 is "<<c<<" feet and "<<d<<" inches";
 		}
    }
    
    
int main(){
	system("cls");
	int inch1,inch2,feet1,feet2;
	
	cout<<setw(80)<<"_______________________________________________\n\n";
    cout<<setw(70)<<"Program Coded by Mukesh MAhara\n";
    cout<<setw(80)<<"_______________________________________________\n\n";

    cout<<setw(70)<<"Enter the detail of Object 1:"<<endl;
    cout<<setw(75)<<"___________________________________\n\n";
    
	
	cout<<setw(40)<<"FEET :";
    cin>>setw(40)>>feet1;
    cout<<setw(40)<<"INCH :";
    cin>>setw(40)>>inch1;
 
 
    cout<<setw(70)<<"________________________________\n\n";
    cout<<setw(70)<<"Enter the detail of object 2:\n";
    cout<<setw(70)<<"________________________________\n\n";
   
   
    cout<<setw(40)<<"FEET :";
    cin>>setw(40)>>feet2;
    cout<<setw(40)<<"INCH :";
    cin>>setw(40)>>inch2;
    
    cout<<"\n\nConclusion:\n";
    cout<<"___________\n\n";

    compare(feet1,inch1,feet2,inch2);


getch();
return 0;
}


