#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>> n;
 
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>> A[i];
    }
 
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
            }
        }
    }
 
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}