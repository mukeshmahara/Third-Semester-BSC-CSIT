




#include<iostream>
using namespace std;

class time24{
	
	private:
		int hours24,minutes24,ehrs12;
		public:
			

			void settime(){
				cout<<" Enter Time in 24 hour format....\n\n";
				cout<<"hours : ";
				cin>>hours24;
				cout<<"\nMinutes : ";
				cin>>minutes24;			 
				ehrs12=minutes24/60;
			}
			void showtime(){
				cout<<"Time in 24 hour format is .....\n";
				cout<<(hours24%24+ehrs12)<<":"<<(minutes24%60);
			}
			
			int hr12(){
				return	(hours24%12+ehrs12);
			}
			int min12(){
				return minutes24%60;
			}
};


class time12{
	private:
	int hours12,minutes12;
	
	public:
		time12(){
			int hours12=0,minutes12=0;
			
		}
		void showtime(){
			cout<<hours12<<":"<<minutes12<<endl;
		}
		
		time12(time24 t){
			hours12=t.hr12();
			minutes12=t.min12();
		}

};


int main(){
	time24 t24;
	time12 t12;
	
	t24.settime();
	
	
	cout<<"\nBefore conversion....\n";
	t24.showtime();
	t12=t24;
	
	cout<<"\nAfter conversion....\n\n";
	t12.showtime();
	
	
	return 0;
}
