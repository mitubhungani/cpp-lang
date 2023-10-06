#include<iostream>
using namespace std;

int fact(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
void series(int n){
	for(int i=1;i<=n;i++){
		cout<<"Fact of "<<i<<"Is : "<<fact(i)<<endl;
	}
}

int main(){
	int n;
	
	cout<<"Enter N : ";
	cin>>n;
	
	series(n);
	
	return 0;
}
