#include <iostream>
using namespace std;

class Base {
public:

	virtual void fun()=0;
};

class Derived : public Base {
public:
    Derived(){}
	void fun() { cout << "fun() called\n"; }
};

int main(void)
{
	Base d;

	d.fun();

	return 0;
}
