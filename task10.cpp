#include <iostream>
#include <strstream>
#include <cstdlib>
#include <cmath>

using namespace std;
int main()
{
    const char *arr1 = "4.13456";

    istrstream istr(arr1);

    char c;
    double result = 0;
    int check = 1;
    
    while (istr >> c)
    {
        if (isdigit(c)){
            if (check > 0)
            {
                result = result * 10 + (c - '0') ;
            }
            else
            {
                result += (double)(c - '0') * pow(0.1, abs(--check));
            }
        }
        else if(c == '.'){
           check--;
        }
    }

    cout << result;
}