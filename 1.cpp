#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员改为私用的
	int hour;
	int minute;
	int sec;
public:
	void inputTime()//如果设置参数，则可以通过程序内手动输入参数值得到时间，而非用户输入.
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}

	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.inputTime();
	t1.showTime();
	
	return 0;
}
