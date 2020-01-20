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

class little_box: public Box 	//一个类型为public的derived class
//（基类的公有成员也是派生类的公有成员，基类的保护成员也是派生类的保护成员，基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问）
{

};

int main()
{
	Box large;		//create instance of base class
	little_box small;		//create instance of derived class
	double volume_large;
	double volume_small;

	large.set_length(5.0);
	large.set_breadth(5.0);
	large.set_height(5.0);
	
	small.set_length(6.0);		//use member function of base class
	small.set_height(6.0);
	
	cout << small.length << endl;		//use member of base class

	volume_large = large.get_volume();
	cout << "the volume of large box is:" << volume_large << endl;

	volume_small = small.get_volume();
	cout << "the volume of small box is:" << volume_small << endl;

	return 0;
}