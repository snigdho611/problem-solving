#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float x, y;
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>x>>y;
        if(y==0)
        {
            cout<< "divisao impossivel"<<endl;
        }
        else
        cout<<fixed<<setprecision(1)<< x/y<<endl;
    }
}