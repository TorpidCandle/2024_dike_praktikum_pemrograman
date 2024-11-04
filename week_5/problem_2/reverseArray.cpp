#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVector(const vector<int>& input) {
    vector<int> reversed;
    for (int i = input.size() - 1; i >= 0; --i) {
        reversed.push_back(input[i]);
    }
    return reversed;
}

int main() {
    vector<int> input;
    int n, value;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        input.push_back(value);
    }

    vector<int> reversed = reverseVector(input);

    cout << "Reversed array: ";
    for (int num : reversed) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
