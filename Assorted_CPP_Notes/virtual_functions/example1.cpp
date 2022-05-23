// https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-c-set-1-introduction/

// Consider the following simple program as an example of runtime polymorphism. The main thing to note about the program is that the derived class’s function is called using a base class pointer.
// The idea is that virtual functions are called according to the type of the object instance pointed to or referenced, not according to the type of the pointer or reference.
// In other words, virtual functions are resolved late, at runtime.
// Now, we’ll look at an example using both these concepts to clarify your understanding.

#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
	Shape(int l, int w)
	{
		length = l;
		width = w;
	} // parameterized constructor
	int get_Area()
	{
		cout << "This is call to parent class area\n";
		return 1;
	}

protected:
	int length, width;
};

// Derived class
class Square : public Shape
{
public:
	Square(int l = 0, int w = 0)
		: Shape(l, w)
	{
	} // declaring and initializing derived class
	// constructor
	int get_Area()
	{
		cout << "Square area: " << length * width << '\n';
		return (length * width);
	}
};
// Derived class
class Rectangle : public Shape
{
public:
	Rectangle(int l = 0, int w = 0)
		: Shape(l, w)
	{
	} // declaring and initializing derived class
	// constructor
	int get_Area()
	{
		cout << "Rectangle area: " << length * width << '\n';
		return (length * width);
	}
};

int main()
{
	Shape* s;
	// Making object of child class Square
	Square sq(5, 5);
	// Making object of child class Rectangle
	Rectangle rec(4, 5);

	s = &sq;
	s->get_Area();
	s = &rec;
	s->get_Area();

	return 0;
}
