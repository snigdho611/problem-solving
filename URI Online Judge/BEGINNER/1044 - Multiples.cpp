#include<iostream>

using namespace std;

int main()
{
    int i, j;

    cin>>i>>j;
    if(i>j)
    {
        if(i%j==0)
        {
            cout<< "Sao Multiplos"<<endl;
        }
        else
            cout<< "Nao sao Multiplos"<<endl;
    }
    else
    {
        if(j%i==0)
        {
            cout<< "Sao Multiplos"<<endl;
        }
        else
            cout<< "Nao sao Multiplos"<<endl;
    }
}
