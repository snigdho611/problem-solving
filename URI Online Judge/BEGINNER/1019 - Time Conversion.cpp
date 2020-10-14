#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int sec, min=0, hour=0, prox, prox2;
    cin>>sec;
    prox=sec;
    while(prox>=60)
    {
        prox=prox-60;
        min=min+1;
    }
    prox2=min;
    while(prox2>=60)
    {
        prox2=prox2-60;
        hour=hour+1;
    }
    cout<<hour<<":"<<prox2<<":"<<prox<<endl;
    return 0;
}