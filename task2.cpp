#include <iostream>
#include <cstring>
using namespace std;
class strtype
{
    char str[80];
    int len;

public:
    strtype(const char *s)
    {
        strcpy(str, s);
        len = strlen(s);
    }
    operator char *() { return str; } 
    operator int() { return len; } 
};
int main()
{
    strtype s("This is a test");
    char *p, s2[80];
    p = s;     
    int l = s;                               
    cout << "Here is string: " << p << endl; 
    cout << "length: " << l << endl;
    strcpy(s2, s);
    cout << "Here is copy of string: " << s2 << endl;
    return 0;
}