#include "MyString.h"
#include <iostream>

using namespace std;


int main()

{
	MyString obj("hello wrld");
	obj.Print();

	cout << obj.MyStrStr("wo") << endl;

	obj.input();

	MyString::printCount();

}
