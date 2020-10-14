#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int x=1,i=1, j=7;
    while(i<=9)
    {
        x=1;
        while(x<=3)
        {
            cout<<"I="<<i<< " "<<"J="<<j<<endl;
            x++;
            j--;
        }
        j=j+5;
        i=i+2;
    }
}