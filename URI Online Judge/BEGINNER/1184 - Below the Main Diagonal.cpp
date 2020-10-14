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
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<i;j++)
            {
                total=total+A[i][j];
            }
        }
        cout<<fixed<<setprecision(1)<<total<<endl;
    }
    
    else if(input=='M')
    {
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<i;j++)
            {
                total=total+A[i][j];
            }
        }
        cout<<fixed<<setprecision(1)<<total/66.0<<endl;
    }
}
