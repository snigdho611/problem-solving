#include<iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;

    if(x==61)
    {
        cout<< "Brasilia" <<endl;
    }
    else if(x==71)
    {
        cout<< "Salvador"<<endl;
    }
    else if(x==11)
    {
        cout<< "Sao Paulo"<< endl;
    }
    if(x==21)
    {
        cout << "Rio de Janeiro"<<endl;
    }
    else if(x==32)
    {
        cout<< "Juiz de Fora"<<endl;
    }
    else if(x==19)
    {
        cout<< "Campinas"<<endl;
    }
    else if(x==27)
    {
        cout<< "Vitoria"<<endl;
    }
    else if(x==31)
    {
        cout<< "Belo Horizonte"<<endl;
    }
    if(x!=61&&x!=71&&x!=21&&x!=32&&x!=19&&x!=27&&x!=31&&x!=11)
    {
        cout<< "DDD nao cadastrado"<<endl;
    }
}
