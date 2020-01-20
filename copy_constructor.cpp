#include <iostream>
using namespace std;

class Box
{
public:
	int get_length(void);
	Line(int len);			//constructor
	Line(const Line &obj);	//copy_constructor
	~Line();				//destructor

private:
	int *ptr;
};

Line::Line(int len)
{
	cout << "调用构造函数" << endl;
	//为指针分配内存
	ptr = new int;
	*ptr = len;
}

Line::Line(const Line &obj)
{
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
	ptr = new int;
	*ptr = *obj.ptr;
}

Line::~Line(void)
{
	cout << "释放内存" << endl;
	delete ptr;
}

int Line::get_length(void)
{
	return *ptr;
}

void display(Line obj)
{
	cout << "Line is: " << obj.get_length() << endl;
}
int main()
{
	Line line(10);
	display(line);
	return 0;
}