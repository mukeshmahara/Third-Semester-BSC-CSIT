/*3.Write a program to find the transpose of a given matrix using the friend function.
*/
#include<iostream>

using namespace std;

int const size1=3,size2=3;

class matrix{
public:
int a[size1][size2];	
	public:
		void friend transpose();
		
		void getelement(){
			for(int i=0 ; i<size1;i++){
				for(int j=0; j<size2; j++){
					cout<<"a["<<i<<"]"<<"["<<j<<"] =";
					cin>>a[i][j];
				}
			}			
		}
		void display(){
			for(int i=0 ; i<size1;i++){
				for(int j=0; j<size2; j++){
					cout<<a[i][j]<<"\t";
				}
				cout<<"\n";
			}			
		}
		
		void  transpose();

};
void transpose(int a[size1][size2]) {
	for(int j=0 ; j<size1 ; j++){
		for(int i=0 ; i<size2 ; i++){
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

int main(){
	matrix m;
	cout<<"Enter the element of the matrix :\n";
	m.getelement();
	m.display();
	cout<<"The transpose of the matrix is :\n";
	
	m.transpose();
	
	return 0;
}
