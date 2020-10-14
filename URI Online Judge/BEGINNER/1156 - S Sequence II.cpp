#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float x;
    long double total=0;

    for(float i=1, j=1;j<=39;i=i*2,j=j+2)
    {
        x=j/i;
        total=total+x;
    }
    cout<<fixed<<setprecision(2)<<total<<endl;
}
