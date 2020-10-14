#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int x=1,i=1, j;
    while(i<=9)
    {
        x=1;
        j=7;
        while(x<=3)
        {
            cout<<"I="<<i<< " "<<"J="<<j<<endl;
            x++;
            j--;
        }
        i=i+2;
    }
}
