#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    Fraction x(1,2), y(3,4);
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
}
