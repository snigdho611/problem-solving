#include<iostream>
#include<iomanip>

using namespace std;

class products{
public:
    int code, nof;
    float price;
};

int main()
{
    products P1, P2;

    cin>>P1.code>>P1.nof>>P1.price;
    cin>>P2.code>>P2.nof>>P2.price;

    float total1, total2, total;
    total1=P1.nof*P1.price;
    total2=P2.nof*P2.price;
    total=total1+total2;
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;
}
