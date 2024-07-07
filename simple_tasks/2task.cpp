#include <iostream>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

bool is(double x, double y, double R) {
    if (x >= -9 && x <= -5) {
        return (pow(x + 7, 2) + pow(y, 2) <= pow(R, 2));
    } else if (x > -5 && x <= -4) {
        // Horizontal Strip
        return (y >= 0 && y <= 1);
    } else if (x > -4 && x <= 0) {
        return (y >= 0 && y <= 0.25 * (x + 4) + 1);
    } else if (x > 0 && x <= M_PI) {
        return (y >= 0 && y <= cos(x) + 1);
    } else if (x > M_PI && x <= 5) {
        return (y <= x - M_PI);
    } else if (x > 5) {
        return (y <= x - 5);
    } else {
        return false;
    }
}

int main() {
    double x, y, R;

    cout << "R: ";
    cin >> R;

    cout << "(x y): ";
    cin >> x >> y;

    if (is(x, y, R)) {
        cout << "Да" << endl;
    } else {
        cout << "Нет" << endl;
    }

    return 0;
}
