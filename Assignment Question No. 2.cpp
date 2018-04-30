#include<iostream>
using namespace std;
	void Shownumbertree();
	void Showtree();
int main(){
	cout<<"!Programmed By Mukesh Mahara!"<<endl;

	Shownumbertree();
	
	cout<<endl;
	
	Showtree();
	
	return 0;
}

//Function defination for Showing number tree
void Shownumbertree(){
	int i=5;
	int j=5;
	cout<<"___________________________________"<<endl;
	cout<<"Showing number tree"<<endl;
	cout<<"___________________________________"<<endl;
do{
	j=5;
	while(j>=i){
		cout<<i;
		j--;
	}
	cout<<endl;
	i--;
}
while(i>0);
}


//Function defination for showing * tree
void Showtree(){
	int i=5;
	int j=5;
	cout<<"___________________________________"<<endl;
	cout<<"Showing * tree"<<endl;
	cout<<"___________________________________"<<endl;
do{
	j=5;
	while(j>=i){
		cout<<"*";
		j--;
	}
	cout<<endl;
	i--;
}
while(i>0);
}
