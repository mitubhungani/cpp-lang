#include<iostream>

using namespace std;

class dia{
	private:
		int id;
		string name;
		int sq;
		int rev;
		int ird;
		int ed;
		string ceo;
		static int count; 
	public:
		int i;string n;int s;int r;int ir;int e;string c;
		
		void setter(int i,string n,int s,int r,int ir,int e,string c){
			
			id = count++;
			cout<<"Enter Name Of Company: ";
			cin>>n;
			cout<<"Enter Staff Number: ";
			cin>>s;
			cout<<"Enter Revenue: ";
			cin>>r;
			cout<<"Enter Number Of imported raw diamands: ";
			cin>>ir;
			cout<<"Enter Numvber of Exported diamand: ";
			cin>>e;
			cout<<"Enter Name Of Ceo: ";
			cin>>c;
			
			
			name = n;
			sq = s;
			rev = r;
			ird = ir;
			ed = e;
			ceo = c;
		}
		void hadder(){
			cout<<"Id\tName\tStaff\trevenue\timported row diamnads\texported diamnd\tceo\t"<<endl;
		}
		void output(){
			
			cout<<id<<"\t"<<name<<"\t"<<sq<<"\t"<<rev<<"\t"<<ird<<"\t\t\t"<<ed<<"\t\t"<<ceo<<endl;
		}
		
};
int dia::count = 1;

int main(){
	
	int nu;
	cout<<"Enter number Of Company: ";
	cin>>nu;
	 
	 dia d[nu];
	 int i;string n;int s;int r;int ir;int e;string c;
	 
	for(int j=0;j<nu;j++){
			
		d[j].setter(i,n,s,r,ir,e,c);
			
	}
	
	d[nu].hadder();
	
	for(int j=0;j<nu;j++){
		d[j].output();
	}	
	return 0;
}
