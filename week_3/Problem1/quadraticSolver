#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c (ax^2 + bx + c): " << endl;
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    cout << "Determinant (D) = " << D << endl;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "The roots are real and distinct:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    } else if (D == 0) {
        double x = -b / (2 * a);
        cout << "The roots are real and equal:\n";
        cout << "x1 = x2 = " << x << "\n";
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-D) / (2 * a);
        cout << "The roots are complex and imaginary:\n";
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i\n";
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}
