#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;

	}
	void setPoint(int i, int j)
	{
		this->x = x + i;
		this->y = y + j;
	}
	void display()
	{
		cout << "(" << x << ',' << y << ")" << endl;;
	}
};

int main()
{
	Point p(60, 80);
	p.display();
	p.setPoint(2,3);
	p.display();
}
