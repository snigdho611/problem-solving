#include<iostream>
#include<iomanip>
#define s 20

using namespace std;

int main()
{
    int N[s];

    for(int i=0;i<s;i++)
    {
        cin>>N[i];
    }

    for(int i=0;i<10;i++)
    {
        swap(N[i],N[s-i-1]);
    }

    for(int i=0;i<s;i++)
    {
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
}
