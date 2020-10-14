#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double x, total=0;

    for(float i=1;i<=100;i++)
    {
        x=1/i;
        total=total+x;
    }
    cout<<fixed<<setprecision(2)<<total<<endl;
}
