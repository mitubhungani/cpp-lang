#include<iostream>

using namespace std;

int main(){
	
	int a;
	
	cout<<"Enter Age : ";
	cin>>a;
	
	try{
		if(a>=18){
			cout<<"You Can Vote :) ";
		}
		else{
			throw "";	
		}
	}
	
	catch(...){
		cout<<"Bada Hoja Bete";
	}
	
	return 0;
}
