#include "MyString.h"
#include <iostream>

using namespace std;

MyString::MyString()
{
	length = 80;
	str = new char[length];
}

MyString::MyString(int size)
{
	length = size;
	str = new char[length];
}

MyString::MyString(const char* s) //helo
{
	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);
}
MyString::MyString(const MyString& obj) //Konstruktor copy !
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
}

MyString::~MyString()
{

	delete[] str;
}

void MyString::printCount()
{
	cout << "count - " << count << endl;
}

void MyString::Print()
{
	cout << str << endl;
}

void MyString::input()
{
}

bool MyString::MyStrStr(const char* st)
{
	char* temp = strstr(str, st);
	if (temp != nullptr)
	{
		return true;
	}
	return false;
}
