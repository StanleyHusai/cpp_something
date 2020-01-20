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
};

int Box::get_volume(void)
{
	return length * breadth * height;
}

void Box::set_length(int l)
{
	length = l; //###这里如果是length = length的话（下同），结果就不对，volum是0###
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
	Box Box1;
	Box Box2;
	int volume1;
	int volume2;

	Box1.set_length(5.0);
	Box1.set_breadth(5.0);
	Box1.set_height(5.0);
	
	Box2.set_length(6.0);
	Box2.set_breadth(6.0);
	Box2.set_height(6.0);

	volume1 = Box1.get_volume();
	cout << volume1 << endl;

	volume2 = Box2.get_volume();
	cout << volume2 << endl;

	return 0;
}