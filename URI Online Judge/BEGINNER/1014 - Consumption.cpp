#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float X, Y, mileage;
    cin>> X>>Y;
    mileage=X/Y;
    cout<<fixed<<setprecision(3)<<mileage<<" km/l"<<endl;
}
