#include <iostream>
#include<cstring>
#include"student.h" //不要漏写此行，否则编译通不过
using namespace std;

Student::Student()
{//没有变量名冲突，可以不用this指针，都可.
    this->num = 0;
    strcpy_s(this->name , "未知");
    this->sex = ' ';

}

Student::Student(int num, const char* name, char sex)
{
    this->num = num;//形参赋值给private对象.
    strcpy_s(this->name, name);
    this->sex = sex;
}

void Student::input()
{
    cout << "please input num name sex:" << endl;
    cin >> num;
    cin >> name;
    cin>> sex;
}

void Student::set_value(int num, const char* name, char sex)
{
    this->num = num;
    strcpy_s(this->name, name);
    this->sex = sex;
}

void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}