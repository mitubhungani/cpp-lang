#include<iostream>
using namespace std;

class admin{
	private:
		string company_name;
		double total_annual_revenue;
		
	protected:
		double manager_salary;
		double employee_salary;
		int total_staff;
		bool can_terminate;
		
	public:
		void myAcess(string cn, double tar, double ms, double es, int ts, bool cnt){
			company_name = cn;
			total_annual_revenue = tar;
			manager_salary = ms;
			employee_salary = es;
			total_staff = ts;
			can_terminate = cnt;
		}
};

class manager:public admin{
	public:
		void Setadmin(){
			cout<<"Manager salary: "<<manager_salary;
			cout<<"\nEmployee salary: "<<employee_salary;
			cout<<"\ntotal staff: "<<total_staff;
			cout<<"\ncan terminate: "<<(can_terminate?"YES":"NO")<<endl;
		}
};

class emp:public manager{
	public:
	void Setadmin(){
		
			cout<<"\nEmployee salary: "<<employee_salary;
			cout<<"\ntotal staff: "<<total_staff;
			cout<<"\ncan terminate: "<<(can_terminate?"YES":"NO")<<endl;
		}
};
int main (){
	manager m;
	emp e;
	
	m.myAcess("hi",100,100,10,2,true);
	e.myAcess("hi",100,100,10,2,true);
	m.Setadmin();
	cout<<"-----------------------"<<endl;
	e.Setadmin();
}
