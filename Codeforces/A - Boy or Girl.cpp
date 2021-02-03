#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string A;
    int match=0;
    cin>>A;
 
    sort(A.begin(), A.end());
 
    for(int i=0;i<A.length()-1;i++)
    {
        if(A[i] == A[i+1])
        {
            match++;
        }
    }
 
    int distinct = (A.length())-match;
 
    if(distinct%2==0)
    {
        cout<< "CHAT WITH HER!";
    }
    else
        cout<< "IGNORE HIM!";
}