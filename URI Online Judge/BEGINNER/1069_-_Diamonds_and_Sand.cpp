#include <iostream>
#include <string>

using namespace std;

int main() {
    int test, opening = 0, closing = 0;
    cin >> test;
    string case_[test];

    for (int i = 0; i < test; i++) {
        cin >> case_[i];
    }

    for (int i = 0; i < test; i++) {
        for (int j = 0; j < case_[i].length(); j++) {
            cout << case_[i][j];
        }
        // cout << case_[i].length() << endl;
    }

    cout << case_[0];

    return 0;
}