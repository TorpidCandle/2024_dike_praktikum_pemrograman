#include <iostream>
#include <string>
using namespace std;

struct StudentRec {
    string idNum;
    int uts;
    int uas;
    int avg;
};

StudentRec theStudent[50];

int main() {
    int n;
    cout << "Enter the amount of students : ";
    cin >> n;
    for(int i=0;i<n;i++) {
        cout << "NIM : ";
        cin >> theStudent[i].idNum;
        cout << "UTS : ";
        cin >> theStudent[i].uts;
        cout << "UAS : ";
        cin >> theStudent[i].uas;
        theStudent[i].avg = (theStudent[i].uts + theStudent[i].uas)/2;
    }
    
    cout << endl;
    cout << "------" << endl;
    for(int i=0;i<n;i++) {
        cout << "NIM : " << theStudent[i].idNum << endl;
        cout << "Average Score : " << theStudent[i].avg << endl;
    }
    system("Pause");
    return 0;
}
