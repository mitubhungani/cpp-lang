#include<iostream>
using namespace std;

class A{
	public:
		void hello(){
			cout<<"One";
		}
};

class B:public A{
	public:
		void hello(){
			cout<<"Two";
		}
};

class C:public B{
	public:
		void hello(){
			cout<<"Three";
		}
};

int main(){
	A aa;
	B bb;
	C cc;
	cc.A::hello();
}
