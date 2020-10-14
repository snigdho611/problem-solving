#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int id, hours;
    float salary, X;
    cin>>id>>hours>>salary;
    X=hours*salary;

    cout<< "NUMBER = "<<id<<endl<< "SALARY = U$ "<<fixed<<setprecision(2)<<X<<endl;
}
