#include <iostream>
using namespace std;

template <class T> class MyClass {
public:
    T value;

    MyClass(T val) : value(val) {}
};

int main() {
    // Для роботи з вбудованими змінними оператор = перевантажувати  нема сенсу
    // Однак він може знадобитися для присвоєння об'єкта одного класу об'єкту другого класу.
    MyClass <int> obj1 = 10; 
    cout << "Value 1: " << obj1.value << endl;
    MyClass <double> obj2 = 10.5; 
    cout << "Value 2: " << obj2.value << endl;
    MyClass <char> obj3 = 65; 
    cout << "Value 3: " << obj3.value << endl;
    MyClass <bool> obj4 = 1; 
    cout << "Value 4: " << obj4.value << endl;
    MyClass <char*> obj5 = (char*)"64"; 
    cout << "Value 5: " << obj5.value << endl;
    MyClass <string> obj6 = (string)"65"; 
    cout << "Value 6: " << obj6.value << endl;
    return 0;
}