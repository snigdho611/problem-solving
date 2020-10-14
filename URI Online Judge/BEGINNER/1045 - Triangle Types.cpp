#include<iostream>

using namespace std;

int main()
{
    float S[3], A, B, C;
    for(int i=0;i<3;i++)
    {
        cin>> S[i];
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(S[j]<S[j+1])
            {
                swap(S[j], S[j+1]);
            }
        }
    }
    A=S[0];B=S[1];C=S[2];

    if(A>=(B+C))
    {
        cout<< "NAO FORMA TRIANGULO"<<endl;
    }
    else if((A*A)==(B*B)+(C*C))
    {
        cout<< "TRIANGULO RETANGULO"<<endl;
    }
    else if((A*A)>((B*B)+(C*C)))
    {
        cout<< "TRIANGULO OBTUSANGULO"<<endl;
    }
    else if((A*A)<(B*B)+(C*C))
    {
        cout<< "TRIANGULO ACUTANGULO"<<endl;
    }
    if(A==B&&A==C&&B==C)
    {
        cout<< "TRIANGULO EQUILATERO"<<endl;
    }
    else if(A==B||B==C||C==A)
    {
        cout<< "TRIANGULO ISOSCELES"<<endl;
    }
}
