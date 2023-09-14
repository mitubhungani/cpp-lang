#include<iostream>
using namespace std;

class A{
	protected:
		int id;
		string name;
		string role;
		int salary;
		int exp;
		string cname;
		string address;
		string email;
		double contact;
		static int count;
	public:
		void aa(){
			id=count++;
			cout<<"Id is : "<<id<<endl<<"Name Is : "<<name<<endl<<"Role Is : "<<role<<endl;
		}
};
class B: public A{
	public:
		void bb(){
			cout<<"Salary Is: "<<salary<<endl<<"Experince Is: "<<exp<<endl;
		}
};
class C:public B{
	public:
		void cc(){
			cout<<"Company Name Is: "<<cname<<endl<<"Address Is: "<<address<<endl;
		}
		void cci(){
			
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Role: ";
			cin>>role;
			cout<<"Enter Salary: ";
			cin>>salary;
		}
};
class D: public C{
	public: 
	void dd(){
		cout<<"Email Is: "<<email<<endl<<"Contact Is: "<<contact<<endl;
	}
	void ddi(){
			cout<<"Enter Experince: ";
			cin>>exp;
			cout<<"Enter Company Name: ";
			cin>>cname;
			cout<<"Enter Address: ";
			cin>>address;
			cout<<"Enter Email: ";
			cin>>email;
			cout<<"Enter Contact: ";
			cin>>contact;
			
	}
};
int A::count= 1;
int main(){
	int i,n;
	
	cout<<"Enter Number Of Employee: ";
	cin>>n;
	
	D ddd[n];
	
	for(i=0;i<n;i++){
	ddd[i].cci();
	ddd[i].ddi();
}
	
		for(i=0;i<n;i++){
	ddd[i].aa();
	ddd[i].bb();
	ddd[i].cc();
	ddd[i].dd();
}
}
