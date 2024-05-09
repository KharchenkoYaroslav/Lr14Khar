#include <iostream>
#include <cstdlib>
using namespace std;
class MyClass {
public:
    int a;
    char b;

    explicit  MyClass(int x){a = x; b = '0'; }
    MyClass(char x){a = 0; b = x;}

    
};
int main(){
    MyClass objInt(10); // Явно в int
    MyClass objChar = 65; // Неявно в char

    cout << "objInt: " << objInt.a << " " << objInt.b << endl;
    cout << "objInt: " << objChar.a << " " << objChar.b << endl;
    return 0;
}