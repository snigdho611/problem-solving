#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    string input_;
    for (int i = 0; i < test_case; i++)
    {
        cin >> input_;

        for (int j = 0; j < input_.length(); j++)
        {
            if (j == 0 || j % 2 == 0)
            {
                cout << input_[j];
            }
        }
        cout << " ";
        for (int j = 0; j < input_.length(); j++)
        {
            if (j != 0 && j % 2 != 0)
            {
                cout << input_[j];
            }
        }
        cout << endl;
    }

    return 0;
}