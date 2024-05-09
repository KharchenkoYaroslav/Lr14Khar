#include <iostream>
using namespace std;

class A {
public:
int count;
    A(): count(0) {}

    int getCount() const {
        A *v;
        v = const_cast<A *>(this);
        v->count = 100;
        return v->count;
    }
};



int main() {
    //Відповідь: так, можна
    A obj1; 
    
    cout << obj1.getCount() << endl;
    cout << obj1.count << endl;

    return 0;
}