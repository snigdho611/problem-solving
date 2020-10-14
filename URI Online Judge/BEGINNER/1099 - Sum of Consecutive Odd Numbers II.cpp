#include<iostream>

using namespace std;
int main()
{
    int test, x, y, max, min;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>x>>y;

        int total=0;

        if(x>y)
        {
            max=x;
            min=y;
        }
        else
        {
            max=y;
            min=x;
        }

        min=min+1;

        while(min<max)
        {
            if(min%2!=0)
            {
                total=total+min;
                min=min+1;
            }
            else
            {
                min=min+1;
            }
        }
        cout<<total<<endl;
    }
}
