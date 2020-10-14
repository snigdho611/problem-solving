#include<iostream>

using namespace std;

int main()
{
    int x;
    while(1)
    {
        cin>>x;
        if(x!=0)
        {
            for(int i=1;i<=x;i++)
            {
                if(i!=x)
                {
                    cout<< i <<" ";
                }
                if(i==x)
                {
                    cout<< i<<endl;
                }
            }
        }
        if(x==0)
        {
            return 0;
        }
    }
}
