#include<iostream>

using namespace std;
int main()
{
    while(1)
    {
        int x, y, max, min, total=0;
        cin>>x>>y;

        if(x>y)
        {
            max=x;min=y;
        }
        else
        {
            max=y;min=x;
        }
        if(x<=0||y<=0)
        {
            return 0;
        }

        for(int i=min;i<=max;i++)
        {
            total=total+i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<total<<endl;
    }

}
