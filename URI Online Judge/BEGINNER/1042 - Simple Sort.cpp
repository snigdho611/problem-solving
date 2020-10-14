#include<iostream>

using namespace std;

int main()
{
    int A[3], B[3], i, j;

    for(i=0 ; i<3 ; i++)
    {
        cin>>A[i];
    }

    for(i=0; i<3 ; i++)
    {
        B[i]=A[i];
    }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            if(B[j]>B[j+1])
            {
                swap(B[j], B[j+1]);
            }
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        cout<<B[i]<<endl;
    }
    cout<<endl;
    for(i=0 ; i<3 ; i++)
    {
        cout<<A[i]<<endl;
    }
}
