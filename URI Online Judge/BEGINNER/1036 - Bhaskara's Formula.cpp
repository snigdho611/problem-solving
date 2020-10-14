#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    float A, B, C, result1, result2;

    cin>>A>>B>>C;

    if(A==0||(B*B)<(4*A*C))
    {
        cout<< "Impossivel calcular"<<endl;
    }
    else
    {
        result1=(-(B)+sqrt((B*B)-(4*A*C)))/(2*A);
        result2=(-(B)-sqrt((B*B)-(4*A*C)))/(2*A);
        cout<<fixed<<setprecision(5)<< "R1 = "<<result1<<endl<< "R2 = "<<result2<<endl;
    }
}