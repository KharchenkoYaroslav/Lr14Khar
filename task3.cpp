#include <iostream>
#include <cmath>
using namespace std;

class Pwr
{
    int base;
    int exp;

public:
    Pwr(int b, int e)
    {
        base = b;
        exp = e;
    }
    operator int() { return pow(base, exp);} 
};

int main()
{
    Pwr p = Pwr(2, 5);

    cout << p;

    return 0;
}