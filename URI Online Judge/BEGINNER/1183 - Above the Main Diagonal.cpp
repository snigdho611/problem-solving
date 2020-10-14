#include<iostream>
#include<iomanip>
#define s 12

using namespace std;

int main()
{
    double A[s][s], total=0.0;
    char op;

    cin>>op;

    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            cin>>A[i][j];
        }
    }

    if(op=='S')
    {
        for(int i=0;i<s;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                total=total+A[i][j];
            }
        }
        cout<<fixed<<setprecision(1)<<total<<endl;
    }
    else if(op=='M')
    {
        for(int i=0;i<s;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                total=total+A[i][j];
            }
        }
        cout<<fixed<<setprecision(1)<<total/66.0<<endl;
    }
}
