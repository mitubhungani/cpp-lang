#include<iostream>
using namespace std;

class hotel{
	private:
		int id;
		string name;
		string type;
		int rating;
		static string loc;
		int year;
		int staff;
		int room;
		static int count;

	public:
		void input(){
			id = count++;
			cout<<"Enter Hotel Name:";
			cin>>name;
			cout<<"Enter Hotel Type:";
			cin>>type;
			cout<<"Enter Hotel Rating:";
			cin>>rating;
			
			cout<<"Enter Establish Year:";
			cin>>year;
			cout<<"Enter Staff Quantity:";
			cin>>staff;
			cout<<"Enter Room Quantity:";
			cin>>room;
		}
		
		void output(){
			cout<<"ID\t"<<id
				<<"NAME\t"<<name
				<<"type\t"<<type
				<<"rating\t"<<rating
				<<"loc\t"<<loc
				<<"year\t"<<year
				<<"staff\t"<<staff
				<<"room\t"<<room;
		}
		
		void tablerow(){
			cout<<id<<"\t"<<name<<"\t"<<type<<"\t"<<rating<<"\t"<<loc<<"\t"<<year<<"\t"<<staff<<"\t"<<room<<"\t"<<endl;
		}
		
		void header(){
			cout<<"ID\tName\ttype\trating\tloc\tyear\tstaff\troom"<<endl;
		}
};

int hotel::count = 1;
string hotel::loc= "surat";

int main(){
	int n;
	
	cout<<"Enter list Length:";
	cin>>n;
	
	hotel h[n];
	for(int i=0;i<n;i++){
		h[i].input();
	}	
	h[0].header();
	for(int i=0;i<n;i++){
		h[0].tablerow();
	}
	

	
	
}
