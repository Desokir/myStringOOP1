#pragma once
class MyString
{
		char* str;
		int length;
		static int count;
	public:
		MyString();
		MyString(int size);
		MyString(const char* s);
		~MyString();
		
		static void printCount();
		void Print();
		void input();
		bool MyStrStr(const char* str);
};

