#include <iostream>
#include <string>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double diff(double a, double b) {
    return a - b;
}

int main() {
    double a, b;
    cout << "Enter your number " << endl;
    cout << "First Number : ";
    cin >> a;
    cout<< "Second Number : ";
    cin >> b;
    
    cout << "Addition result : " << add(a, b) << endl;
    cout << "Difference result : " << diff(a, b) << endl;
    return 0;
}
