#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer.\n";
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Output: Sum = " << sum << endl;
    return 0;
}
