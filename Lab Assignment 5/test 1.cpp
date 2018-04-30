#include<iostream>
using namespace std;
class numbers{
	private:
		int whole,decimal;
		
		public:
			void getdata(){
				cout<<"Whole part: ";
				cin>>whole;
				cout<<"Decimal part :";
				cin>>decimal;
				cout<<"\n";
			}
			void display(){
				cout<<"\n\n";
				cout<<whole<<".";
				cout<<decimal;
				cout<<"\t";
			}
		
};
const int size=3;

int main(){
	
	numbers *num=new numbers [size];
	numbers *d=p;
	int x,y;
	for(int i=1;i<=size;i++){
		num[i].getdata();
	}
	
	for(int i=1;i<=3;i++){
		num[i].display();
		
	}
	
	return 0;
}
