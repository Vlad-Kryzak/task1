#include <iostream>
using namespace std;

double func(double x) {
    // x^2 - sin(x) - 1 = 0
    return x * x - sin(x) - 1;
}

double bisectionMethod(double a, double b, int maxIterations) {
    if (func(a) * func(b) >= 0) {
        cout << "Bisection method cannot be applied." << endl;
        return NAN;
    }

    double c;
    int iterations = 0;

    while (iterations < maxIterations) {
        c = (a + b) / 2;
        if (func(c) == 0.0) {
            return c;
        }
        else if (func(c) * func(a) < 0) {
            b = c;
        }
        else {
            a = c;
        }
        iterations++;
    }
    return (a + b) / 2;
}

int main() {
    double a = 1.0, b = 2.0;
    int iterations;

    cout << "Enter the number of iterations: ";
    cin >> iterations;

    double root = bisectionMethod(a, b, iterations);

    if (!isnan(root)) {
        cout << "Approximate root: " << root << endl;
        cout << "Function value at root: " << func(root) << endl;
    }

    return 0;
}

