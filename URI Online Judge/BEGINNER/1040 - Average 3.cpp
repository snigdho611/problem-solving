#include<iostream>
#include<iomanip>>

using namespace std;

int main()
{
    float A, B, C, D, result, E, result2;
    cin>>A>>B>>C>>D;

    A=(A/10)*2;
    B=(B/10)*3;
    C=(C/10)*4;
    D=(D/10)*1;
    result=A+B+C+D;
    cout<<fixed<<setprecision(1)<<"Media: "<<result<<endl;
    if(result>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(result>=5.0)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>E;
        result2=(result+E)/2;
        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<E<<endl;
        if(result2>5.0)
            {
                cout<<"Aluno aprovado."<<endl;
            }
        else
            {
                cout<<"Aluno reprovado."<<endl;
            }
        cout<<fixed<<setprecision(1)<<"Media final: "<<result2<<endl;
    }
    else
    {
        cout<<"Aluno reprovado."<<endl;
    }
}
