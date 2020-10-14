#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int A[100], max=A[0], maxindex=0;

    for(int i=0;i<100;i++)
    {
        cin>>A[i];
        if(max<A[i])
        {
            max=A[i];
            maxindex=i;
        }
    }
    cout<< max<<endl<<maxindex+1<<endl;
}