#include<iostream>

using namespace std;

int main()
{
    long long int X[60];
    X[0]=0;
    X[1]=1;

    for(int i=2;i<=60;i++)
    {
        X[i]=X[i-1]+X[i-2];
    }

    int test;
    cin>>test;

    for(int t=0;t<test;t++)
    {
        int input;
        cin>>input;
        cout<<"Fib("<<input<<") = "<< X[input]<<endl;
    }
}
