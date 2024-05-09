#include <iostream>
#include <strstream>
using namespace std;
int main() {
    char arr1 [11] = "Some text;";
    char arr2 [255];

    ostrstream ostr1(arr2, sizeof(arr1));
    ostr1 << arr1 << ends;

    cout << arr2;

}