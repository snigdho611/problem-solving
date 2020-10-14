#include<iostream>

using namespace std;

int main()
{
    float input;
    cin>>input;

    if(input>100||input<0)
    {
        cout<<"Fora de intervalo"<<endl;
    }
    else if(input>=0&&input<=25)
    {
        cout<< "Intervalo [0,25]"<<endl;
    }
    else if(input>25&&input<=50)
    {
        cout<< "Intervalo (25,50]"<<endl;
    }
    else if(input>50&&input<=75)
    {
        cout<< "Intervalo (50,75]"<<endl;
    }
    else if(input>75&&input<=100)
    {
        cout<< "Intervalo (75,100]"<<endl;
    }
}
