#include<iostream>
using namespace std;

class student{
	private:
	int i;
	char n[20];
	int a;
	char c[20];
	char ci[20];
	char em[20];
	char co[20];
	
	public:
	
		void getdata(){
			cout<<endl<<"Enter id: ";
			cin>>i;
			cout<<endl<<"Enter name ";
			cin>>n;
			cout<<endl<<"Enter age";
			cin>>a;
			cout<<endl<<"Enter Course";
			cin>>c;
			cout<<endl<<"Enter City";
			cin>>ci;
			cout<<endl<<"Enter Email";
			cin>>em;
			cout<<endl<<"Enter college";
			cin>>co;
}
		
	void setdata(){
 		cout<<"Id: "<<i;
 		cout<<"\nName: "<<n;
 		cout<<"\nAge: "<<a;
 		cout<<"\nCourse: "<<c;
		cout<<"\ncity: "<<ci;
		cout<<"\nEmail: "<<em;
		cout<<"\nCollege: "<<co;
}
		
		
};
int main(){
		int i;
	student s[4];
	for(i=0;i<=4;i++){
			s[i].getdata();
			s[i].setdata();
}
	return 0;
	
}


