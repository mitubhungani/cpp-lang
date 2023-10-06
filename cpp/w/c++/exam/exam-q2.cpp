#include<iostream>
using namespace std;

class bank{
	private:
		int ac_number;
		string ac_name;
		string ac_type;
		string ac_branch;
		int ac_bal;
		static int count;
		
	public:
		int a;
		void input(){
			
			a = count++;
			
			cout<<"Enter Account Number:";
			cin>>ac_number;
			
			cout<<"Enter Account Name:";
			cin>>ac_name;
			
			cout<<"Enter Account Type:";
			cin>>ac_type;
			
			cout<<"Enter Account Branch:";
			cin>>ac_branch;
			
			cout<<"Enter Account Balance:";
			cin>>ac_bal;
			
		}
		
		void hadder(){
			cout<<"Number\tName\tType\tBranch\tBalance"<<endl;
		}
		
		void output(){
			cout<<ac_number<<"\t"<<ac_name<<"\t"<<ac_type<<"\t"<<ac_branch<<"\t"<<ac_branch<<endl;
		}
		
		
};

int bank::count = 1;

int main(){
	int x,j;
	
	cout<<"Enter Number of ";
	cin>>x;
	
	int ans[x];
	
	bank f[x];
	
	for(j=0;j<x;j++){
		f[j].input();
	}
	
	f[j].hadder();
	
	for(j=0;j<x;j++){
		f[j].output();
	}
	
	int check;
	
	cout<<endl<<endl<<"Enter Num of Account:";
	cin>>check;
	f[j].hadder();
	
	for(j=0;j<x;j++){
		if(f[j].a == check){
			f[j].output();
		}
	}
	return 0;
}
