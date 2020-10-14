#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int I=1, J=60;
    while(J>=0)
    {
        cout<< "I="<<I << " "<< "J="<<J<<endl;
        I=I+3;
        J=J-5;
    }
}