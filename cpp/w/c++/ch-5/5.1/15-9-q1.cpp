#include<iostream>
using namespace std;

class A{
	protected:
		int a,b,c,d,e;
};
class B:public A{
	public:
		void calculate(int p,int q){
			a=p;
			b=q;			
			cout<<"Division Is :"<<(a/b);
		}
		
		void calculate(int p,int q,int r){
			a=p;
			b=q;			
			c=r;
			cout<<"Subtraction Is :"<<(a-b-c);
		}
		
		void calculate(int p,int q,int r,int s){
			a=p;
			b=q;
			c=r;
			d=s;
			cout<<"Multiplication Is :"<<(a*b*c*d);
		}
		
		void calculate(int p,int q,int r,int s,int t){
			a=p;
			b=q;
			c=r;
			d=s;
			e=t;
			cout<<"Sum Is :"<<(a+b+c+d+e);
		}
};
int main(){
	B aa;
	aa.calculate(1,2,3);
	return 0;
}
