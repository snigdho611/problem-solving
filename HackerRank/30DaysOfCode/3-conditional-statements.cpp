#include <iostream>

using namespace std;

int main()
{
    int N = 22;

    if (N % 2 == 0)
    {
        if (N >= 2 && N <= 5)
        {
            cout << "Not Weird" << endl;
        }
        else if (N >= 6 && N <= 20)
        {
            cout << "Weird" << endl;
        }
        else if (N > 20)
        {
            cout << "Not Weird" << endl;
        }
    }
    else
    {
        cout << "Weird" << endl;
    }
}
