#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float x=1,i=0, j=1;
    while(i<=2.1)
    {
        x=1;
        while(x<=3)
        {
            cout<<"I="<<i<< " "<<"J="<<j<<endl;
            x++;
            j++;
        }
        j=j-3;
        j=j+0.2;
        i=i+0.2;
    }
}
