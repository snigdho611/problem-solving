#include<iostream>
#include<iomanip>>

using namespace std;

int main()
{
    float A, B, C, D, result, E, result2;

    cin>>A>>B;

    if(A==0.0&&B==0.0)
    {
        cout<<"Origem"<<endl;
    }
    else if(A!=0&&B==0)
    {
        cout<<"Eixo X"<<endl;
    }
    else if(A==0&&B!=0)
    {
        cout<<"Eixo Y"<<endl;
    }
    else if(A>0&&B>0)
    {
        cout<<"Q1"<<endl;
    }
    else if(A<0&&B>0)
    {
        cout<<"Q2"<<endl;
    }
    else if(A>0&&B<0)
    {
        cout<<"Q4"<<endl;
    }
    else if(A<0&&B<0)
    {
        cout<<"Q3"<<endl;
    }
}
