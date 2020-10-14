#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int X;
    cin>> X;

    for(int i=1;i<=(X/2);i++)
    {
        if(X%i==0)
        {
            cout<<i<<endl;
        }
        else
            continue;
    }
    cout<<X<<endl;
}
