#include <iostream>
using namespace std;

class Box
{
public:
	int length;
	int breadth;
	int height;
	
	int get_volume(void);
	void set_length(int);
	void set_breadth(int);
	void set_height(int);

	Box(int l, int b, int h); //This is constructor
	~Box();	//This is a destructor
};

Box::Box(int l, int b, int h)
{
	length = l;
	breadth = b;
	height = h;
	cout << "object is being created" << endl;
}

Box::~Box(void)
{
	cout << "object is being deleted" << endl;
}

int Box::get_volume(void)
{
	return length * breadth * height;
}

void Box::set_length(int l)
{
	length = l;
}

void Box::set_breadth(int b)
{
	breadth = b;
}

void Box::set_height(int h)
{
	height = h;
}

int main()
{
	Box Box1(5,5,5);
	int volume1;

	volume1 = Box1.get_volume();
	cout << "The volume of Box1 is: " << volume1 << endl;

	Box1.set_length(6);
	Box1.set_breadth(6);
	Box1.set_height(6);

	volume1 = Box1.get_volume();
	cout << "The volume of Box1 is: " << volume1 << endl;

	return 0;
}