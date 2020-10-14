#include<iostream>
#include<iomanip>
#define s 12

using namespace std;

int main()
{
    double A[s][s], total=0;
    char input;

    cin>>input;

    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            cin>>A[i][j];
        }
    }

    if(input=='S')
    {
        int f=1,e=s-1;
        for(int i=s-1;i>(s/2);i--)
        {
            for(int j=f;j<e;j++)
            {
                total=total+A[i][j];
            }
            f++;
            e--;
        }
        cout<<fixed<<setprecision(1)<<total<<endl;
    }

    else if(input=='M')
    {
        int f=1,e=s-1;
        for(int i=s-1;i>(s/2);i--)
        {
            for(int j=f;j<e;j++)
            {
                total=total+A[i][j];
            }
            f++;
            e--;
        }
        cout<<fixed<<setprecision(1)<<total/30.0<<endl;
    }
}
