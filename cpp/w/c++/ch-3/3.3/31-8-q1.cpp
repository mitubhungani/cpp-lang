#include<iostream>
using namespace std;

class login{
	private:
		string s1,s2,s3,s4;
		
		
	public:
		
		void input(){
			cout<<"Enter Email:";
			cin>>s1;
			cout<<"Enter Password:";
			cin>>s2;
		}
		
		void input2(){
			cout<<"Enter Email:";
			cin>>s3;
			cout<<"Enter Password:";
			cin>>s4;
		}
		
		void login1(){
			if(s1==s3 && s2==s4){
				cout<<"Login is succssfully";
			}
			else if(s1 != s3 || s2 != s4){
				cout<<"Login not succssfully";
			}
		}
};

int main(){
	
	login a;
	
	a.input();
	cout<<"========================================"<<endl;
	a.input2();
	
	a.login1();
	
	return 0;
}
