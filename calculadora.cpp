#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a,b, c, d;
    double sum, sub, mul, div, mod, exp;
    cout << "Welcome to the calculator program!" << endl;
    cout << "Enter two numbers: ";
    cin >> a >> b >> c >> d;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = fmod(a, b);
    exp = pow(a, b);

    cout << "Sum = " << sum << endl;


    return 0;
}


