#include<iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;

    int X[N], min, minpos;

    for(int i=0;i<N;i++)
    {
        cin>>X[i];
    }

    min=X[0];

    for(int i=0;i<N;i++)
    {
        if(X[i]<min)
        {
            min=X[i];
            minpos=i;
        }
    }

    cout<<"Menor valor: "<<min<<endl<<"Posicao: "<<minpos<<endl;
}
