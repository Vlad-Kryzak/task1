#include <iostream>

using namespace std;

double func(double x) {
    // x^2 - sin(x) - 1 = 0
    double result;
    result = x * x - sin(x) - 1;
    return result;
}

void bisectionMethod() {
    double a = 1, b = 2, c;
    int iterations;

    cout << "Enter the number of iterations: ";
    cin >> iterations;

    while (iterations != 0) {
        c = (a + b) / 2;
        if (func(a) * func(c) < 0) {
            b = c;
        }
        else {
            a = c;
        }
        iterations--;
    }

    cout << "The root is localized on the segment [" << a << " ; " << b << "]" << endl;
}

int main() {
    bisectionMethod();

    return 0;
}
