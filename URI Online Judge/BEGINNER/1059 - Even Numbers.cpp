#include<iostream>

using namespace std;
int main()
{
    float A[6];

    for(int i=1;i<=6;i++)
    {
        cin>>A[i];
    }

    int counter=0;
    for(int i=1;i<=6;i++)
    {
        if(A[i]>0)
        {
            counter++;
        }
    }

    cout<< counter << " valores positivos"<<endl;
}
