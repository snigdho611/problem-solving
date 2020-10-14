#include<iostream>

using namespace std;
int main()
{
    while(1)
    {
        int pass=2002, x;
        cin>>x;

        if(x==pass)
        {
            cout<< "Acesso Permitido"<<endl;
            return 0;
        }
        else
        {
            cout<< "Senha Invalida"<<endl;
        }
    }
}
