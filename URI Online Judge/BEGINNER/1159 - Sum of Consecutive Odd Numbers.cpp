#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        double G1=0, G2=0, rate1=0, rate2=0;
        long int totalA=0, totalB=0;
        long int PA=0, PB=0;
        int i;
        cin>>PA>>PB>>G1>>G2;

        totalA=PA;
        totalB=PB;

        for(i=0;totalA<=totalB;i++)
        {
            if(i>100)
            {
                break;
            }
            else
            {
                rate1=(totalA*(G1)/100);
                totalA=totalA+rate1;
                rate2=(totalB*(G2)/100);
                totalB=totalB+rate2;
            }
        }
        if(i>100)
        {
            cout<<"Mais de 1 seculo."<<endl;
        }
        else
        cout<<i<< " anos."<<endl;
    }
}
