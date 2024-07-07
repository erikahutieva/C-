#include <iostream>
#include <cmath>

// Define M_PI if not already defined
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

double calculateY(double x, double R) {
    double y;

    if (x >= -9 && x <= -5) {
        y = sqrt(R * R - (x + 7) * (x + 7));
    } else if (x > -5 && x <= -4) {
        y = 1;
    } else if (x > -4 && x <= 0) {
        y = 0.25 * (x + 4) + 1;
    } else if (x > 0 && x <= M_PI) {
        y = cos(x) + 1;
    } else if (x > M_PI && x <= 5) {
        y = x - M_PI;
    } else if (x > 5) {
        y = x - 5;
    } else {
        y = 0;
    }

    return y;
}

int main() {
    double x, R;

    cout << "Enter the value of R: ";
    cin >> R;

    cout << "Enter the value of x: ";
    cin >> x;

    double y = calculateY(x, R);

    cout << "The value of y for x = " << x << " is " << y << endl;

    return 0;
}
