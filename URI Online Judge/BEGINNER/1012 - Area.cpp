#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float A, B, C, tri, circle, trap, sq, rec;
    cin>>A>>B>>C;

    tri=0.5*A*C;

    circle=3.14159*C*C;

    trap=0.5*(A+B)*C;

    sq=B*B;

    rec=A*B;

    cout<<fixed<<setprecision(3)<< "TRIANGULO: "<<tri<<endl<<"CIRCULO: "<<circle<<endl<<"TRAPEZIO: "<<trap<<endl<<"QUADRADO: "<<sq<<endl<<"RETANGULO: "<<rec<<endl;
    return 0;
}