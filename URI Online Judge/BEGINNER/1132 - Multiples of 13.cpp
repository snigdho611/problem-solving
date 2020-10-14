#include<iostream>

using namespace std;

int main()
{
    int x, y, total=0;

    cin>>x>>y;

    if(x<y){
    for(int i=x;i<=y;i++)
    {
        if(i%13!=0)
        {
            total=total+i;
        }
    }
    cout<<total<<endl;
    }

    else if(x>y)
    {
        for(int i=y;i<=x;i++)
        {
            if(i%13!=0)
            {
                total=total+i;
            }
        }
    cout<<total<<endl;
    }
    else if(x==y)
    {
        if(x%13!=0)
        {
            cout<<x<<endl;
        }
    }
}
