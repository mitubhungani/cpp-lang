#include<iostream>

using namespace std;

class cafe{
	private:
		int id;
		string name;
		string type;
		int rat;
	    string loc;
		int ey;
		int sq;
		static int count;
	public:
	
		
		void setter(string n,string t,int r,string l,int esty,int sta){
		
			id = count++;
		
		
			cout<<"Enter Name Of Cafe: ";
			cin>>n;
			cout<<"Enter type: ";
			cin>>t;
			cout<<"Enter rating: ";
			cin>>r;
			cout<<"Enter location: ";
			cin>>l;
			cout<<"Enter establish year: ";
			cin>>esty;
			cout<<"Enter Staff Number: ";
			cin>>sta;
		
			
			
			name = n;
			type = t;
			rat = r;
			loc = l;
			ey =esty;
			sq =sta;
		}
		void hadder(){
			cout<<"Id\tName\tType\tRating\tloaction\tEsatablish Year\t\tStaff quantity\t"<<endl;
		}
		void output(){
			
			cout<<id<<"\t"<<name<<"\t"<<type<<"\t"<<rat<<"\t"<<loc<<"\t\t"<<ey<<"\t\t\t"<<sq<<endl;
		}
		
};

int cafe::count = 1;

int main(){
	
	int nu;
	cout<<"Enter number Of Cafe: ";
	cin>>nu;
	 
	 cafe d[nu];
	 string n;string t;int r;string l;int esty;int sta;
	
	 
	for(int j=0;j<nu;j++){
			
		d[j].setter(n,t,r,l,esty,sta);
			
	}
	
	d[nu].hadder();
	
	for(int j=0;j<nu;j++){
		d[j].output();
	}	
	return 0;
}
