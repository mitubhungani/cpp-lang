#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter A:";
	cin>>a;
	
	cout<<"Enter B:";
	cin>>b;
	
	try{
		if(b==0){
			throw 0;
		}
		else{
			cout<<"The Ans is:"<<a/b<<endl;
		}
	}
	catch(int n){
		cout<<"can't divided by 0";
	}
	return 0;
}

