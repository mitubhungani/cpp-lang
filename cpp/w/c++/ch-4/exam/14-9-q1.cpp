#include <iostream>
using namespace std;

class Shape {
   protected:
      float width;
      float height;

   public:
      Shape(float w, float h) {
         width = w;
         height = h;
      }

      virtual float area() = 0;
};

class Triangle: public Shape {
   public:
      Triangle(float w, float h): Shape(w, h) {}

      float area() {
         return (width * height) / 2;
      }
};

class Rectangle: public Shape {
   public:
      Rectangle(float w, float h): Shape(w, h) {}

      float area() {
         return width * height;
      }
};

int main() {
	int a,b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	
	int c,d;
	cout<<"Enter a : ";
	cin>>c;
	cout<<"Enter b : ";
	cin>>d;
   Triangle t(a, b);
   Rectangle r(c, d);

   cout << "Area of triangle is: " << t.area() << endl;
   cout << "Area of rectangle is: " << r.area() << endl;

   return 0;
}
