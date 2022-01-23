#include <bits/stdc++.h>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int x = 0;

    if (x <= a)
    {
        x = a;
    }
    if (x <= b)
    {
        x = a;
    }
    if (x <= c)
    {
        x = c;
    }
    if (x <= d)
    {
        x = d;
    }
    return x;
}

int main()
{
    int a = 3, b = 4, c = 6, d = 5;
    cout << max_of_four(a, b, c, d);
    return 0;
}