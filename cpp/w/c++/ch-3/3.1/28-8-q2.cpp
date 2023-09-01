#include<iostream>
using namespace std;

class employee{
	private:
	int i;
	char n[20];
	int a;
	char c[20];
	int m;
	int v;
	char bn[20];
	
	public:
	
		void getdata(){
			cout<<endl<<"Enter id: ";
			cin>>i;
			cout<<endl<<"Enter name: ";
			cin>>n;
			cout<<endl<<"Enter age: ";
			cin>>a;
			cout<<endl<<"Enter City: ";
			cin>>c;
			cout<<endl<<"Enter Mobile Number: ";
			cin>>m;
			cout<<endl<<"Enter Simcard Vaildity: ";
			cin>>v;
			cout<<endl<<"telphone brand name: ";
			cin>>bn;
}
		
	void setdata(){
 		cout<<"Id: "<<i;
 		cout<<"\nName: "<<n;
 		cout<<"\nAge: "<<a;
		cout<<"\ncity: "<<c;
		cout<<"\nPhone Number: "<<m;
		cout<<"\nSimcard avildity: "<<v;
		cout<<"\nBrand Name: "<<bn<<endl;
		
}
		
		
};
int main(){
		int i;
  	employee s[4];
	for(i=0;i<=4;i++){
			s[i].getdata();
		
}
	for(i=0;i<=4;i++){
		s[i].setdata();
	}
	return 0;
	
}


