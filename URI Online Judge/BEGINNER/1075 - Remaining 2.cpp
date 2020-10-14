#include<iostream>

using namespace std;
int main()
{
    int n, total=2;
    cin>>n;

    for(; total<=10000;)
    {
        cout<<total<<endl;
        total=total+n;
    }
}