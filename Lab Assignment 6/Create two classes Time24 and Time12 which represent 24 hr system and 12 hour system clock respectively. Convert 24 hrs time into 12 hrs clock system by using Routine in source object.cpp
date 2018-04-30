//#include<iostream>
//using namespace std;
//
//class time24{
//	protected:
//		int hours,minutes,seconds;
//	public:
//		void gettime(){
//			cout<<"Enter any format of time.....\nHours :";
//			cin>>hours;
//			cout<<"Minutes : ";
//			cin>>minutes;
//			cout<<"seconds : ";
//			cin>>seconds;
//			
//		}
//		void timeconversion(){
//			int choose;
//			cout<<" 1. press 1 to convert time in 12 hr format\n 2. press 2 to convert  time in 24 hr format\n 3. press 3 to exit\n\n";
//			cin>>choose;
//			
//			switch(choose){
//				
//				case 1:
//
//					do{
//						int emin=seconds/60;
//						seconds=seconds%60;
//						
//						minutes=minutes%60+emin;
//						int ehr=minutes/60;
//						
//						hours=hours%12;
//						hours=hours+ehr;
//					}
//					while(hours>12||minutes>60||seconds>60);
//					
//					cout<<"Time in 12 hr format is : \n";
//					cout<<hours<<":"<<minutes<<":"<<seconds;
//					break;
//					
//				case 2:
//					do{
//						int emin=seconds/60;
//						seconds=seconds%60;
//					
//						minutes=minutes%60+emin;
//						int ehr=minutes/60;
//					
//						hours=hours%24;
//						hours=hours+ehr;
//					
//					}
//					
//					while(hours>24||minutes>60||seconds>60);
//					
//					cout<<"Time in 24 hr format is : \n";
//					cout<<hours<<":"<<minutes<<":"<<seconds;
//				
//					break;
//				case 3:
//					exit(1);
//			}
//		}
//		
//};
//class time12:public time24{
//	public:
//	time12(){
//		cout<<"we are using source class to find the time format using child class\n\n";
//	}
//	
//};
//
//int main(){
//	
//	time12 t12;
//	
//	t12.gettime();
//	t12.timeconversion();
//	return 0;
//	
//}







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
	
	
	cout<<"\n\nBefore conversion....\n";
	t24.showtime();
	t12=t24;
	
	cout<<"\n\nAfter conversion....\nTime in 12 hour format....\n\n";
	t12.showtime();
	
	
	return 0;
}
