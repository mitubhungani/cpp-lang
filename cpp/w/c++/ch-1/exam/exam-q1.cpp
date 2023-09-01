#include<iostream>
using namespace std;

class distances{
	public:
		int feet;
		int inch;
		
};

int main(){
	distances d1,d2,sum;
	
	cout<<"Enter the first Distances:\nFeet:";
	cin>>d1.feet;
	cout<<"Inch:";
	cin>>d1.inch;
	
	cout<<"Enter the second Distances:\nFeet:";
	cin>>d2.feet;
	cout<<"Inch:";
	cin>>d2.inch;
	
	sum.feet = d1.feet+d2.feet;
	sum.inch = d1.inch+d2.inch;
	
	while(sum.inch>12){
		if(sum.inch>=12){
			sum.inch = sum.inch -12;
			sum.feet++;
		}
	}
	cout<<sum.feet<<" Feet "<<sum.inch<<" Inch ";
	
	return 0;
}
