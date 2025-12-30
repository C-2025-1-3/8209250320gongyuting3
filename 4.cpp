#include<iostream>
using namespace std;
class Student
{
private:
	int num, score;
public:
	Student(int num, int score)
	{
		this->num = num;
		this->score = score;
	}
	int max(Student* p)
	{
		int max_score = p->score;//默认为第一个.
		int max_num = p->num;
		for (int i = 0;i<5; i++)
		{
			if (max_score < (p+i)->score)
			{
				max_score = (p + i)->score;
				max_num = (p + i)->num;
			}
		}
		cout << "成绩最高者：" << max_num << '，' << "成绩为：" << max_score << endl;
		return max_num, max_score;
	}
};
int main()
{
	Student stud[5] =
	{
		Student(1, 85),
		Student(2, 97),
		Student(3, 88),
		Student(4, 96),
		Student(5, 77)
	};
	stud[4].max(stud);//参数为数组首元素地址.
}