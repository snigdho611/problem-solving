#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tests;

    cin >> tests;

    map<string, string> list;

    string name, value;

    for (int i = 0; i < tests; i++)
    {
        cin >> name >> value;
        list[name] = value;
    }

    while (cin >> name)
    {
        if (list.find(name) == list.end())
        {
            cout << "Not found" << endl;
        }
        else
        {
            cout << name << "=" << list.find(name)->second << endl;
        }
    }

    return 0;
}