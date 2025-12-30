#include<iostream>
using namespace std;
class cuboid
{
private:
	int length, weight, height;
	int V;
public:
	void input()
	{
		cout << "please enter length weight height:" << endl;
		cin >> length;
		cin >> weight;
		cin >> height;
	}
	int volume()
	{
		V = length * weight * height;
		return V;
	}
	void output()
	{
		cout << "体积："<<V;//或者定义V为局部变量，在此处输出volume(),()不要忘了！！
	}
};
int main()
{
	cuboid cub;
	cub.input();
	cub.volume();
	cub.output();
	return 0;

}