#include <iostream>
using namespace std;
class iteminfo{
	private:
		int itemid;
		float csr;
	public:
		void setdata(int it,float csr){
			int itemid=it;
			float cost=csr;
		}
		void showdata(){
		cout<<"\nItem id is:"<<itemid;
		cout<<"\n The cost is:"<<cost<<endl;
		}
};
int main(){
	iteminfo i1,i2;
	i1.setdata(60,.56);
	i2.setdata(58,.023);
	cout<<"\nthe data of item is",i1.showdata();
	cout<<"\nThe data of item is",i2.showdata();
	
}
