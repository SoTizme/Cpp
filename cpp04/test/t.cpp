// C++ program to demonstrate how we will calculate
// the area of shapes USING VIRTUAL FUNCTION
#include <fstream>
#include <iostream>
using namespace std;

class Shape {
public:

	virtual void calculate()
	{
		cout << "Shaaaaaaaaaaaaaaaape \n";
	}
	virtual ~Shape()
	{
		cout << "Shape Destuctor Call\n";
	}
};

class Square : public Shape {
public:

	void calculate()
	{
		cout << "Square \n";
	}

	virtual ~Square()
	{
		cout << "Square Destuctor Call\n";
	}
};

int main()
{
	Shape* S;
	Square sq;

	S = &sq;

	S->calculate();
	return 0;
}
