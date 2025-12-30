#pragma once
#include<iostream>
#include<cstring>
class Student              //ÀàÉùÃ÷
{
public:   
	Student();
	Student(int num, const char* name, char sex);
	void input();
	void display();
	void set_value(int num,const char* name,char sex);
private:
	int num;
	char name[20];
	char sex;
}; 
