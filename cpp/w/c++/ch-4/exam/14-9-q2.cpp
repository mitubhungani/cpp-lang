#include<iostream>
using namespace std;

class a{
	protected:
	int a;
	public:
		void in(){
			cout<<"Enter The Number:";
			cin>>a;
		}
};

class b: public a{
	protected:
		int b;
	public:
		void s(){
			b=a*a;
			cout<<"The Square Of Number Is:"<<b<<endl;
		}
};

class c: public a{
	protected:
		int c;
	public:
		void cu(){
			c=a*a*a;
			cout<<"The Cube Of Number Is:"<<c<<endl;
		}
};

int main(){
	b B;
	B.in();
	B.s();
	
	c C;
	C.in();
	C.cu();
}
