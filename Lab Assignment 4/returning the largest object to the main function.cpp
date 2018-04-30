/*2.Write a function that takes three distance objects
	as an argument from the user 
	and returns the largest object back to the main function.*/
	#include<iostream>
	using namespace std;
	class objects{
		int length;
		public:
			void distance_input(){
			
				cin>>length;
			}
			int getdata(){
				return length;
			}
			objects compare(objects a1,objects a2,objects a3){
				cout<<"Enter the length of object 1:";a1.distance_input();
				cout<<"Enter the length of object 2:";a2.distance_input();
				cout<<"Enter the length of object 3:";a3.distance_input();
				if(a1.getdata()>a2.getdata() && a1.getdata() >a3.getdata()){
				return a1;
				}
				else if(a2.getdata() > a3.getdata()){
					return a2;
				}
				else{
					return a3;	
				}
			
				
			}

		
	};
	
	int main(){
		
		objects o1,o2,o3,o4;
		cout<<"_____________________________________\n";
		cout<<"Program COded by Mukesh Mahara\n";
		cout<<"_____________________________________\n\n";
	
		o4=o1.compare(o1,o2,o3);
		
		cout<<"THE value of  LAAARGEST object is : "<<o4.getdata();
		
		return 0;
	}
