#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float input;
    cin>>input;

    if(input>0&&input<=400.00)
    {
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<input+(input*.15)<<endl<< "Reajuste ganho: "<<(input*.15)<<endl<< "Em percentual: 15 %"<<endl;
    }

    else if(input>400.00&&input<=800.00)
    {
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<input+(input*.12)<<endl<< "Reajuste ganho: "<<(input*.12)<<endl<< "Em percentual: 12 %"<<endl;
    }

    else if(input>800.00&&input<=1200.00)
    {
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<input+(input*.10)<<endl<< "Reajuste ganho: "<<(input*.10)<<endl<< "Em percentual: 10 %"<<endl;
    }

    else if(input>1200.00&&input<=2000.00)
    {
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<input+(input*.07)<<endl<< "Reajuste ganho: "<<(input*.07)<<endl<< "Em percentual: 7 %"<<endl;
    }

    else if(input>2000.00)
    {
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<input+(input*.04)<<endl<< "Reajuste ganho: "<<(input*.04)<<endl<< "Em percentual: 4 %"<<endl;
    }
}
