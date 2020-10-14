#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float x, total=0, response;
    int counter=0;

    while(1)
    {
        if(counter<2)
        {
            cin>>x;
            if(x>=0&&x<=10)
            {
                total=total+x;
                counter=counter+1;
            }
            else
            {
                cout<< "nota invalida"<<endl;
            }
        }
        else if(counter>=2)
        {
            cout<< "media = "<< total/2<<endl;
            while(1)
            {
                cout<<fixed<<setprecision(2)<<"novo calculo (1-sim 2-nao)"<<endl;
                cin>>response;
                if(response==2)
                {
                    return 0;
                }
                else if(response==1)
                {
                    total=0;
                    counter=0;break;
                }
                else
                {

                }
            }
        }
    }
}
