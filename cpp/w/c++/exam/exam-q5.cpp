#include <iostream>
using namespace std;

class Z {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class A : public Z {
public:
    void speak() {
        cout << "Dog " << endl;
    }
};

class B : public Z {
public:
    void speak() {
        cout << "Cat " << endl;
    }
};

class Hybrid : public A, public B {
public:
    void speak() {
       
        A::speak();
        B::speak();
    }
};
int main() {
    Hybrid hybrid;
    hybrid.B::speak();
    return 0;
}
