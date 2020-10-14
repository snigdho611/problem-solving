#include<iostream>

using namespace std;
int main()
{
    int m, n, total=0, max, min;
    cin>>m>> n;

    if(m>n)
    {
        max=m;min=n;
    }
    else
    {
        max=n;min=m;
    }

    for(int i=(min+1);i<max;i++)
    {
        if(i%2==1||i%2==-1)
        {
            total+=i;
        }
    }

    cout<<total<<endl;
}
