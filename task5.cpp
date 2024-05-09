#include <iostream>
using namespace std;

class A {
private:
    static int count; 

public:
    A() {
        count++; 
    }

    ~A() {
        count--; 
    }

    static int getCount() {
        return count;
    }
};

int A::count = 0;

int main() {
    A obj1; 
    A obj2; 

    cout << "Total objects: " << A::getCount() << endl;

    {
        A obj3; 
        cout << "Total objects: " << A::getCount() << endl;
    }

    cout << "Total objects: " << A::getCount() << endl;

    return 0;
}