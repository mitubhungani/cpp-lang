#include<iostream>
using namespace std;

class Cars_Infor{
	private:
		int car_number, car_year;
		string car_name, car_model,car_color;
		
	public:
		void setA(int count){
			cout << "\n\n----------Enter the Information of " << count+1 << " Car----------\n";
			
			cout << "Enter the car number :- ";
			cin >> car_number;
			
			cout << "Enter the name of the car :- ";
			cin >> car_name;
			
			cout << "Enter the release year of the car :- ";
			cin >> car_year;
			
			cout << "Enter the car model :- ";
			cin >> car_model;
			
			cout << "Enter the color of the car :- ";
			cin >> car_color;
		}
		
		void setB(int count){
			cout << "\n\n----------Enter the Information of " << count+1 << " Car----------\n";
			
			cout << "Enter the car number :- ";
			cin >> car_number;
			
			cout << "Enter the name of the car :- ";
			cin >> car_name;
			
			cout << "Enter the release year of the car :- ";
			cin >> car_year;
			
			cout << "Enter the car model :- ";
			cin >> car_model;
			
			cout << "Enter the color of the car :- ";
			cin >> car_color;
		}
		
		void setC(int count){
			cout << "\n\n----------Enter the Information of " << count+1 << " Car----------\n";
			
			cout << "Enter the car number :- ";
			cin >> car_number;
			
			cout << "Enter the name of the car :- ";
			cin >> car_name;
			
			cout << "Enter the release year of the car :- ";
			cin >> car_year;
			
			cout << "Enter the car model :- ";
			cin >> car_model;
			
			cout << "Enter the color of the car :- ";
			cin >> car_color;
		}
		
		void setD(int count){
			cout << "\n\n----------Enter the Information of " << count+1 << " Car----------\n";
			
			cout << "Enter the car number :- ";
			cin >> car_number;
			
			cout << "Enter the name of the car :- ";
			cin >> car_name;
			
			cout << "Enter the release year of the car :- ";
			cin >> car_year;
			
			cout << "Enter the car model :- ";
			cin >> car_model;
			
			cout << "Enter the color of the car :- ";
			cin >> car_color;
		}
		
		void setE(int count){
			cout << "\n\n----------Enter the Information of " << count+1 << " Car----------\n";
			
			cout << "Enter the car number :- ";
			cin >> car_number;
			
			cout << "Enter the name of the car :- ";
			cin >> car_name;
			
			cout << "Enter the release year of the car :- ";
			cin >> car_year;
			
			cout << "Enter the car model :- ";
			cin >> car_model;
			
			cout << "Enter the color of the car :- ";
			cin >> car_color;
		}
		
		void getA(int count){
			cout << "\n\n**********Information of " << count+1 << " Car**********\n";
			cout << "Number of the car :- " << car_number << endl;
			cout << "Nameof the car :- " << car_name << endl;
			cout << "Release year of the car :- " << car_year << endl;
			cout << "Model of the car :- " << car_model << endl;
			cout << "Color ofthe car :- " << car_color << endl;
		}
		
		void getB(int count){
			cout << "\n\n**********Information of " << count+1 << " Car**********\n";
			cout << "Number of the car :- " << car_number << endl;
			cout << "Nameof the car :- " << car_name << endl;
			cout << "Release year of the car :- " << car_year << endl;
			cout << "Model of the car :- " << car_model << endl;
			cout << "Color ofthe car :- " << car_color << endl;
		}
		
		void getC(int count){
			cout << "\n\n**********Information of " << count+1 << " Car**********\n";
			cout << "Number of the car :- " << car_number << endl;
			cout << "Nameof the car :- " << car_name << endl;
			cout << "Release year of the car :- " << car_year << endl;
			cout << "Model of the car :- " << car_model << endl;
			cout << "Color ofthe car :- " << car_color << endl;
		}
		
		void getD(int count){
			cout << "\n\n**********Information of " << count+1 << " Car**********\n";
			cout << "Number of the car :- " << car_number << endl;
			cout << "Nameof the car :- " << car_name << endl;
			cout << "Release year of the car :- " << car_year << endl;
			cout << "Model of the car :- " << car_model << endl;
			cout << "Color ofthe car :- " << car_color << endl;
		}
		
		void getE(int count){
			cout << "\n\n**********Information of " << count+1 <<  " Car**********\n";
			cout << "Number of the car :- " << car_number << endl;
			cout << "Nameof the car :- " << car_name << endl;
			cout << "Release year of the car :- " << car_year << endl;
			cout << "Model of the car :- " << car_model << endl;
			cout << "Color ofthe car :- " << car_color << endl;
		}
};

int main()
{
	Cars_Infor c1,c2,c3,c4,c5;
	
	c1.setA(0);
	c2.setB(1);
	c3.setC(2);
	c2.setB(3);
	c3.setC(4);
	
	c1.getA(0);
	c2.getB(1);
	c3.getC(2);
	c2.getB(3);
	c3.getC(4);
	return 0;
}
