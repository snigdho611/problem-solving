#include<bits/stdc++.h>
 
using namespace std;
 
int main()
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string A, B;
    int valA, valB;
 
    cin>>A>>B;
 
    for(int i=0;i<A.length();i++)
    {
        if(A[i]<92)
        {
            A[i] = A[i]+32;
        }
        if(B[i]<92)
        {
            B[i] = B[i]+32;
        }
    }
 
    if(A<B)
    {
        cout<<-1;
    }
    else if(A>B)
    {
        cout<<1;
    }
    else if(A==B)
    {
        cout<<0;
    }
 
 
    /*cout<< "A: "<<A<<endl;
 
    cout<< "B: "<<B<<endl;*/
}
