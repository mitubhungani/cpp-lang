#include<iostream>
#include<string>
using namespace std;

int main(){
	int age;
	
	cout<<"Enter Your Age: ";
	cin>>age;
	
	try{
		if(age<18){
		throw "GharpeRaho";
		}
		else{
			cout<<"You Can vote...";
		}
	}
	
	catch(...){
		cout<<"GharpeRaho";
	}
	return 0;
}
