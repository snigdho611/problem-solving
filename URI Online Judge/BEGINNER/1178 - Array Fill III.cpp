#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    long double X[100];

    long double input;
    cin>>input;

    X[0]=input;

    for(int i=1;i<100;i++)
    {
        X[i]=X[i-1]/2.0000;
    }

    for(int i=0;i<100;i++)
    {
        cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<X[i]<<endl;
    }
}
