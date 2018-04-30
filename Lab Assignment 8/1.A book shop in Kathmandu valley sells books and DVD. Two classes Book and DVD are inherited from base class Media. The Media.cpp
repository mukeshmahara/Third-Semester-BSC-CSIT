/*1.A book shop in Kathmandu valley sells books and DVD. Two classes Book and DVD are inherited from base class Media. The Media 
class has common data members such as title and publication. The class Book has data members such number_of_pages and that of DVD
has data members such as duration. Each class member has member functions such as readdata() amd showdata(). Write a program for 
modelling the class hierarchy for book shop and process objects of these classes using pointers to the base class.
*/

#include<iostream>
using namespace std;

class media{
	protected:
		char title[20],publication[40];
	
};

class book:public media{
	int num_of_pages;
	public:
		void get_data(){
			cout<<"Enter the number of pages in book :";
			cin>>num_of_pages;
		}
		void show_data(){
			cout<<"Number of pages in book are : "<<num_of_pages;
		}
};
class DVD:public media{
	int duration;
	public:
		void get_data(){
			cout<<"Enter the duration of DVD :";
			cin>>duration;
		}
		void show_data(){
			cout<<"The duration of the DVD is :"<<duration;
		}
};
int main(){
	media *ptr=new med;
	ptr.
	
	return 0;
}
