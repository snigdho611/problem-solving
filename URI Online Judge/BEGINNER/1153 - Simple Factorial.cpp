#include<iostream>

using namespace std;

int main()
{
     int X,total=1;
    cin>>X;

    for(int i=X;i>0;i--)
    {
        total=total*i;
    }
    cout<<total<<endl;
}
