#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int X, counter=0;
        cin>>X;

        for(int i=2;i<=X/2;i++)
        {
            if(X%i==0)
            {
                counter++;
            }
            else
                continue;
        }
        if(counter==0)
        {
            cout<<X<< " eh primo"<<endl;
        }
        else
            cout<<X<< " nao eh primo"<<endl;
    }
}
