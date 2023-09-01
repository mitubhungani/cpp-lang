#include<iostream>
using namespace std;
#define pi 3.14

int a=2;
class Myclass{
	public :
		int a;
		void display(){
			cout<<"Hello World"<<endl<<a<<endl;
		}
};
void area(){
	float area;
	area=pi*a*a;
	cout<<area<<endl;
}
int main(){
	Myclass b;
	b.a=10;
	b.display();
	area();
	return 0;
}
