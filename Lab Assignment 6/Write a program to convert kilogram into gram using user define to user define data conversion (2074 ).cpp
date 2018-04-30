#include<iostream>
using namespace std;

/*class weight{
	private:
		int kg;
		float gm;
	public:
		weight(float x){
			
			kg=int(x);
			gm=(x-kg)*1000;

		}
		void display(){
			cout<<"kilograms = "<<kg;
			cout<<"\tGrams = "<<gm;
		}
		
};

int main(){
	float value;
	cout<<"Enter the weight in kg : ";
	cin>>value;
	
	weight w1(value);
	w1.display();
	
	return 0;
}*/
class kg{
	float kilogram;
	public:
		void getdata(){
			cout<<"Enter the weight in kg : ";
			cin>>kilogram; 
		}
		int gramreturn(){
			return (int)(kilogram*1000);
		}
	
};
class gm{
	int gram;
	public:
		gm(kg val){
			gram=val.gramreturn();
		}
		
		void output(){

			
			cout<<"The KG equivalent to gram is : "<<gram;
			
		}


};
int main(){
	kg kg1;
	gm gm1;
	
	kg1.getdata();
	
	gm1.output();
	
	return 0;
}
