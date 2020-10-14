#include<iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;

    for(int i=1;i<=x*4;i++)
    {
        if(i%4!=0)
        {
            cout<<i<< " ";
        }
        else if(i%4==0)
        {
            cout<< "PUM"<<endl;
        }
    }
}
