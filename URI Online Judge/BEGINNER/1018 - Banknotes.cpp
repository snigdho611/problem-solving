#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x, sum, c100=0, c50=0,c20=0, c10=0, c5=0, c2=0, c1=0;
    cin>>sum;
    x=sum;

    while(sum>=100)
    {
        sum=sum-100;
        c100++;
    }
    while(sum>=50)
    {
        sum=sum-50;
        c50++;
    }
    while(sum>=20)
    {
        sum=sum-20;
        c20++;
    }
    while(sum>=10)
    {
        sum=sum-10;
        c10++;
    }
    while(sum>=5)
    {
        sum=sum-5;
        c5++;
    }
    while(sum>=2)
    {
        sum=sum-2;
        c2++;
    }
    while(sum>=1)
    {
        sum=sum-1;
        c1++;
    }
    if(sum==0)
    {
        cout<<x<<endl;
        cout<<c100<<" nota(s) de R$ 100,00"<<endl;
        cout<<c50<<" nota(s) de R$ 50,00"<<endl;
        cout<<c20<<" nota(s) de R$ 20,00"<<endl;
        cout<<c10<<" nota(s) de R$ 10,00"<<endl;
        cout<<c5<<" nota(s) de R$ 5,00"<<endl;
        cout<<c2<<" nota(s) de R$ 2,00"<<endl;
        cout<<c1<<" nota(s) de R$ 1,00"<<endl;
    }

    return 0;
}
