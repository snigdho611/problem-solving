#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float test, animal, total=0, rabbit=0, rat=0, frog=0;
    float Prabbit, Prat, Pfrog;
    char letter;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        cin>>animal>>letter;
        if(letter=='C')
        {
            rabbit=rabbit+animal;
        }
        else if(letter=='R')
        {
            rat=rat+animal;
        }
        else if(letter=='S')
        {
            frog=frog+animal;
        }
        total=total+animal;
    }

    cout<< "Total: "<<total << " cobaias"<<endl<< "Total de coelhos: "<< rabbit<<endl<< "Total de ratos: "<< rat<<endl<< "Total de sapos: "<<frog<<endl;
    cout<<fixed<<setprecision(2)<< "Percentual de coelhos: "<< (rabbit/total)*100 <<" %"<<endl<< "Percentual de ratos: "<< (rat/total)*100 <<" %"<<endl<< "Percentual de sapos: "<< (frog/total)*100 <<" %"<<endl;
}
