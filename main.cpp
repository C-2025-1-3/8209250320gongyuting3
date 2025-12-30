#include <iostream>             //将类声明头文件包含进来
#include "student.h"
using namespace std;
int main()
{
	Student stud;                //定义对象，使用默认值.
	Student stud1(007,"tcg", 'm');//含参构造函数，使用赋值.
	Student stud2;				 
	stud2.input();//让用户手动输入.
	stud.display();              //执行stud对象的display函数
	stud1.display();
	stud2.display();
	return 0;
}