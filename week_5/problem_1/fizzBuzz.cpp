#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> results;

    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            results.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            results.push_back("Fizz");
        } else if (i % 5 == 0) {
            results.push_back("Buzz");
        } else {
            results.push_back(to_string(i));
        }
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
