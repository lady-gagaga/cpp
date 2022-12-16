#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

// Function to reverse a string
string reverse(string const& s)
{

    string rev;
    for (int i = s.size() - 1; i >= 0; i--) {
        rev = rev.append(1, s[i]);
    };

    return rev;
}

int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string s("i don't know");

    s = reverse(s);
    cout << s;

    return 0;
}
