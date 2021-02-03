#include<iostream>
 
using namespace std;
 
int main()
{
    int problems, total=0;
    bool P, V, T;
 
    cin>>problems;
 
    for(int i=0;i<problems;i++)
    {
        cin>> P>>V>>T;
 
        if(P==1&&V==1||P==1&&T==1||V==1&&T==1)
        {
            total=total+1;
        }
    }
    cout<<total;
}