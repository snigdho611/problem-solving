#include<iostream>

using namespace std;
int main()
{
    string A;
    int D1, H1, M1, S1, D2, H2, M2, S2;
    int days=0,hours=0,minutes=0,seconds=0;
    char x;

    cin>> A>> D1;
    cin>> H1>>x>>M1>>x>>S1;
    cin>> A>> D2;
    cin>> H2>>x>>M2>>x>>S2;

    days=D2-D1;
    if(H1>H2)
    {
        hours=24-(H1-H2);
        days=days-1;
    }
    else
    {
        hours=H2-H1;
    }
    if(M1>M2)
    {
        minutes=60-(M1-M2);
        hours=hours-1;
    }
    else
    {
        minutes=M2-M1;
    }
    if(S1>S2)
    {
        seconds=60-(S1-S2);
        minutes=minutes-1;
    }
    else
    {
        seconds=S2-S1;
    }

    cout<<days<<" dia(s)"<<endl<<hours<<" hora(s)"<<endl<<minutes<<" minuto(s)"<<endl<<seconds<<" segundo(s)"<<endl;
}
