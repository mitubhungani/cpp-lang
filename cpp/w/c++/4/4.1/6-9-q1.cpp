#include<iostream>
using namespace std;

class a{
	public:
		int x, y, z, ans;
};
class b : public a{
	public:
		void getdata(){
			cout<<"Enter the value x:";
			cin>>x;
			
			cout<<"Enter the value y:";
			cin>>y;
			
			cout<<"Enter the value z:";
			cin>>z;
			
		}
		void setdata(){
			cout<<"The value of X is:"<<x<<endl
				<<"The value of Y is:"<<y<<endl
				<<"The value of Z is:"<<z<<endl;
				
			ans=0;
			
			ans = (x*x*x) + (y*y*y) + (z*z*z);
			cout<<"Sum of all element is:"<<ans<<endl;
		}
};

int main(){
	b p;
	
	p.getdata();
	p.setdata();
	
	return 0;
}
