#include<iostream>
using namespace std;



	int total;
class a{
	protected:
		int p;
	public:
	
	void w(int x){
		p=x;
	
	}
};
class b:public a{
	protected:
		int q;
	public:
		
	void x(int x){
		q=x;
		
	}
};
class c:public b{
	protected:
		int r;
	public:
		
	void y(int x){
		r=x;
		
	}
};
class d:public c{
public:
		int s;
	public:
		
	void z(int x){
		s=x;
			
			total = p+q+r+s;
			
	}
	
	

};
class E: public a
{
	public:
	E(){
		cout<<"Answer Is : "<<total;
	}
};

int main(){
	
	d j;
	
	int l,m,n,o;
	
	cout<<"Enter Amount of l: ";
	cin>>l;
	cout<<"Enter Amount of m: ";
	cin>>m;
	cout<<"Enter Amount of n: ";
	cin>>n;
	cout<<"Enter Amount of o: ";
	cin>>o;

	
	
	j.w(l);
	j.x(m);
	j.y(n);
	j.z(o);
	
	E e;

	
	return 0;
	
}
