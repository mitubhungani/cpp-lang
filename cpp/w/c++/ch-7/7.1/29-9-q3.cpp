#include<iostream>
using namespace std;

int main(){
	
	string p;
	cout<<"Enter Passsword: ";
	cin>>p;
	
	int i,len,check;
	
	for(i=0;p[i]!=NULL;i++){
		len++;
	}
	for(i=0;i<=len;i++){
		if(p[i]>=65 && p[i]<=90){
			check++;
		}
	}
	if(check!=0){
		cout<<"Your Password Is Vaild";
	}
	else{
		cout<<"Your password Is Invaild";
	}
	return 0;
}
