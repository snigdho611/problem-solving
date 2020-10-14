#include<iostream>

using namespace std;

int main()
{
    int X[10], V;

    cin>>V;

    for(int i=0;i<10;i++)
    {
        if(i==0)
        {
            X[i]=V;
        }
        else
        {
            X[i]=X[i-1]*2;
        }
        cout<<"N["<<i<<"] = "<<X[i]<<endl;
    }
}
