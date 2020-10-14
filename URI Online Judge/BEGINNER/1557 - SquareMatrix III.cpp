#include<iostream>

using namespace std;

void spacing2(int value, int digits)
{
    int counter=0;
    for(int i=0;value!=0;i++)
    {
        value=value/10;
        counter++;
    }
    //cout<< digits<< " "<<counter<<endl;

    for(int i=0;i<=digits-counter;i++)
    {
        cout<<" ";
    }
}

void spacing1(int value, int digits)
{
    int counter=0;
    for(int i=0;value!=0;i++)
    {
        value=value/10;
        counter++;
    }
    //cout<< digits<< " "<<counter<<endl;

    for(int i=0;i<digits-counter;i++)
    {
        cout<<" ";
    }
}

int main()
{
    while(1)
    {
        int s;
        cin>>s;

        if(s==0)
        {
            return 0;
        }

        int A[s][s];

        A[0][0]=1;

        for(int j=1;j<s;j++)
        {
            A[0][j]=A[0][j-1]*2;
        }

        for(int i=1;i<s;i++)
        {
            for(int j=0;j<s;j++)
            {
                if(j==s-1)
                {
                    A[i][j]=A[i][j-1]*2;
                }
                else
                A[i][j]=A[i-1][j+1];
            }
        }

        int last=A[s-1][s-1], digits=0;

        for(int i=0;last!=0;i++)
        {
            last=last/10;
            digits++;
        }
        //cout<<digits;

        for(int i=0;i<s;i++)
        {
            for(int j=0;j<s;j++)
            {
                if(j==0)
                {
                    int value=A[i][j];
                    spacing1(value, digits);
                    cout<<A[i][j];
                }
                else
                {
                    int value=A[i][j];
                    spacing2(value, digits);
                    cout<<A[i][j];
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
