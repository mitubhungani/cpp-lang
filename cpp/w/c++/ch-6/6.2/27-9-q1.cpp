#include<iostream>
using namespace std;

class shape{
	public:
		virtual double area()=0;
};
class circle:public shape{
	public:
	double radius;
	circle(double r):radius(r){
	};
	double area(){
		return 3.14*radius*radius;
	}
};
class triangle:public shape{
	public:
	double base,height;
	triangle(double b,double h):base(b),height(h){
	};
	double area(){
		return 0.5*base*height;
	}
};
class rectangle:public shape{
	public:
	double width,height;
	rectangle(double w,double h):width(w),height(h){
	};
	double area(){
		return width*height;
	}
};

int main(){
	circle ci(10);
	cout<<"Area Of Circle IS: "<<ci.area()<<endl;
	triangle tr(10,20);
	cout<<"Area Of trangle Is: "<<tr.area()<<endl;
	rectangle re(20,20);
	cout<<"Area Of Rectangle Is: "<<re.area()<<endl;
	return 0;
}
