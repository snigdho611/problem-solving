#include<iostream>

using namespace std;

int main()
{
    int x, y, a=0;
    cin>>x>>y;

    for(int i=1;i<=y;i++)
    {
        a=a+1;
        if(a==x)
        {
            cout<< i;
        }
        else cout<< i << " ";
        if(a==x)
        {
            a=0;
            cout<<endl;
        }
    }
}
