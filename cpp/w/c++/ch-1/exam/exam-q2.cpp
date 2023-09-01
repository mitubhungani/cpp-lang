#include<iostream>
using namespace std;

class time{
	public:
		int s;
		int m;
		int h;
};

int main(){
	time t;
	t.h=0;
	
	cout<<"Enter Second:";
	cin>>t.s;
	
	while(t.s>60){
		if(t.s>=60){
			t.s = t.s - 60;
			t.m++;
			if(t.m>=60){
				t.m = t.m - 60;
				t.h++;
			}
		}
	}
	cout<<t.h<<":"<<t.m<<":"<<t.s;
	
	return 0;
}
