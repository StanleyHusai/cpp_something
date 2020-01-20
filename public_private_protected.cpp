#include <iostream>
using namespace std;

class Box
{
public:
	double length;
	
	void set_width(double width);
	double get_width(void);

private:
	double width;

};

double Box::get_width(void)
{
	return width;
}

void Box::set_width(double wid)
{
	width = wid;
}

int main()
{
	Box Box1;

	Box1.length = 4.0;
	cout << Box1.length << endl;
	
	//Box1.width = 5.0;
	//cout << Box1.width << endl;  //private不能在类外部直接访问

	Box1.set_width(5.0);
	cout << Box1.get_width() << endl;

	return 0;
}