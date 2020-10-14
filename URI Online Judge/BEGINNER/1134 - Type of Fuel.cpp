#include<iostream>

using namespace std;

int main()
{
    int x=-1, v1=0,v2=0,v3=0;

    while(x!=4)
    {
        cin>>x;
        if(x==1)
        {
            v1+=1;
        }
        else if(x==2)
        {
            v2+=1;
        }
        else if(x==3)
        {
            v3+=1;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl<<"Alcool: "<<v1<<endl<<"Gasolina: "<<v2<<endl<<"Diesel: "<<v3<<endl;

}
