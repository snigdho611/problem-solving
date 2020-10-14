#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int X, total=0;
        cin>>X;

        for(int i=1;i<=X/2;i++)
        {
            if(X%i==0)
            {
                total=total+i;
            }
            else
                continue;
        }
        if(total==X)
        {
            cout<<X<< " eh perfeito"<<endl;
        }
        else
            cout<<X<< " nao eh perfeito"<<endl;
    }
}
