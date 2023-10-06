#include<iostream>
using namespace std;

class A {
	private:
		char a;
	public:
		get() {
				try {
				cout << "Enter any character :- ";
				cin >> a;
				
				if(a>='0' && a<='9')
				{
					throw 0;
				}
				else if((a>='a' && a<='z') || (a>='A' && a<='Z'))
				{
					throw 1;
				}				
				throw true;
			}
			catch(int a) {
				if(a==0)
				{
					cout <<"\nThis is integer...";
				}
				else
				{
					cout <<"\nThis is character...";
				}
			}
			catch(...) {
				cout <<"\nThis is special symbol...";
			}
		}
};

int main()
{
	A a1;
	a1.get();
	return 0;
}


