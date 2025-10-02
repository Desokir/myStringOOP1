#include <iostream>
#include "MyString.h"
using namespace std;

int main() {
    MyString test_str = "Helloooooooooooooooooooo";
    MyString test_str2 = "Worlds";
    test_str.Print();
    test_str2.Print();
    cout << test_str.MyStrLen() << endl;
    cout << test_str.MyStrCmp(test_str2) << endl;
    test_str.MyDelChr('l');
    test_str.Print();
    cout << test_str.MyChr('H') << endl;
    test_str.MyStrCat(test_str2);
    test_str.Print();
    MyString my_str = "Helloooooooooooooooooooooo";
    MyString my_str2 = move(my_str);
    MyString::PrintStringsCount();

    return 0;
}