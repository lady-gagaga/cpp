#include <iostream>
using namespace std;

class someclass
{
    private:
    struct{
        float first;
        float second;
    };
        double A, B;
    public:
        someclass(double a, double b)
        {
            A = a;
            B = b;
        }

        double function(double x)
        {
            return A * x + B;
        }
    };

    int main()
    {
        someclass x(17, 18);
        cout << x.function(4) << endl;
    }