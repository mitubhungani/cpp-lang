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
			cout<<"a/b"<<a/b<<endl;
		}
	}
	catch(int n){
		cout<<"hi"<<n<<endl;
	}
	catch(char c){
		cout<<"can't divided by 0"<<c;
	}
	catch(...){
		cout<<"General Exception by 0";
	}
	return 0;
}
