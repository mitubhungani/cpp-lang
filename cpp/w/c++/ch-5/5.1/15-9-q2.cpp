#include <iostream>
using namespace std;
class C{
public:
    int getTotalOvers() {
    	cout<<"Cricket Over Is: 50"<<endl;
   
    }
};
class T20:public C{
public:
    int getTotalOvers(){
    	cout<<"T20 Match Over Is: 20"<<endl;
         C::getTotalOvers();
    }
};
class T :public C{
public:
    int getTotalOvers(){
    	cout<<"TestMatch Over Is: 90"<<endl;
        C::getTotalOvers();
    }
};
int main() {
	T20 aa;
	T cc;
	
	aa.getTotalOvers();
	cc.getTotalOvers();
	
	
    return 0;
}
