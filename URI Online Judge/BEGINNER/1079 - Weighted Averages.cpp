#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float test,x1,x2,x3;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>x1>>x2>>x3;
        cout<<fixed<<setprecision(1)<< (x1*2+x2*3+x3*5)/10 <<endl;
    }
}
