#include<iostream>

using namespace std;

int main()
{
    int X[1000], input;

    cin>>input;

    for(int i=0, j=0;i<1000;i++, j++)
    {
        if(j<input)
        {
            X[i]=j;
        }
        else
        {
            j=0;
            X[i]=j;
        }
    }

    for(int i=0;i<1000;i++)
    {
        cout<< "N["<<i<<"] = "<<X[i]<<endl;
    }
}
