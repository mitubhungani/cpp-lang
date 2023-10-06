#include<iostream>

using namespace std;

class R{
	private:
		int a;
	public:
		void input(){
			cout<<"Enter A :";
			cin>>a;
			
		
		}
		
	void output(){
			cout<<"I Am Bigger "<<a;
	}
	
		

	bool operator < (R& y){
		
		return a<y.a;
		
	}
	
};


int main(){
	
	R a,b;	
	a.input();
	b.input();
	
	if(a<b){
		b.output();
	}
	else{
		a.output();
	}
	
}
