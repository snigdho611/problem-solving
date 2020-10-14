#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float x, total=0;
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
        else
        {
            cout<< "media = "<< total/2<<endl;
            return 0;
        }
    }
}
