#include <iostream>
#include <cmath>
using namespace std;
int drop()
{
    int a, b;
    cout << "Chislitel" << endl;
    cin >> a;
    cout << "znamenatel" << endl;
    cin >> b;
    if (b > a) {
        throw "The denominator is greater than the numerator";
    }
    int c = a / b;
    cout << c;
}
int main() {
    try {
    drop();
    }
    catch (char const* error) { 
        std::cout << error << std::endl;
    }
    
}
