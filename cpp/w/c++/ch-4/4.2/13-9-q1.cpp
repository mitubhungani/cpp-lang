#include<iostream>
using namespace std;
class rbi{
	protected:
		
	
		float value1;
		float year1;
		float irbi = ((value1 * 0.015) * year1);
	public:
		
			
			
		void get(){
			
		cout<<"Enter Amount: ";
			cin>>value1;
			
		cout<<"Enter Year: ";
			cin>>year1;
				
			
			irbi = ((value1 * 0.015) * year1);
	}
		
		
};
class sbi:public rbi{
	
	protected:
		float isbi;
	

	public: 
	    void getsbi(){
	    	
			isbi = ((value1 * 0.075) * year1) + irbi;
			cout<<"Rate Of Interest In Sbi Will Be: "<<isbi<<endl;
		
		}
	
};
class bob:public rbi{
	
	protected:
		float ibob;
	

	public: 
	    void getbob(){
			ibob = ((value1 * 0.065) * year1) + irbi;
			cout<<"Rate Of Interest In bob Will Be: "<<ibob<<endl;
		
		}
};
class icici:public rbi{
	
	protected:
		float iicici;
	

	public: 
	    void geticici(){
			iicici = ((value1 * 0.085) * year1) + irbi;
			cout<<"Rate Of Interest In icici Will Be: "<<iicici<<endl;
		
		}
};

int main(){
	sbi x;
	bob y;
	icici z;
	x.get();
	x.getsbi();
	y.get();
	y.getbob();
	z.get();
	z.geticici();
	return 0;
}
