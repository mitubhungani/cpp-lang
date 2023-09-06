#include<iostream>
using namespace std;

class a{
	public:
		float x,y,z;
		
		void ce(){
		cout<<"Enter temp in Cel:";
		cin>>x;
	};
};

class b : public a{
	public:
		
	void fe(){		
		y = (x*1.8)+32;
		
		cout<<"Temp in Feh:"<<y<<endl;
	}
};

class c : public b{
	public:
	void ke(){		
		z = (x+273.15);
		
		cout<<"Temp in kel:"<<z<<endl;
	}
};

int main(){
	c v;
	
	v.ce();
	v.fe();
	v.ke();
	
	return 0;
}

