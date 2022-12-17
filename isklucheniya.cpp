#include <iostream>
#include <cmath>
using namespace std;
int drop()
try
{
    int a, b;
    cout << "Chislitel" << endl;
    cin >> a;
    cout << "znamenatel" << endl;
    cin >> b;
    int c = a / b;
    cout << c;
}
 catch (...)
{
    std::cout << "Error!" << std::endl;
}
int main() {
    drop();
}

double divide(int a, int b)
{
    if (b == 0)
        throw "enter the fraction again";
    return a / b;
}