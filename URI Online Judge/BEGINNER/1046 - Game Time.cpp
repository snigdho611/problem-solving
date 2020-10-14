#include<iostream>

using namespace std;

int main()
{
    int A, B, val1, val2;
    cin>>A>>B;
    if(A>=B)
    {
        cout<< "O JOGO DUROU "<< (24-A)+B << " HORA(S)"<<endl;
    }
    if(B>A)
    {
        cout<< "O JOGO DUROU "<< B-A << " HORA(S)" <<endl;
    }
}
