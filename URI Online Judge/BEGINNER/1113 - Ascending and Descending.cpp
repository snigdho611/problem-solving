#include<iostream>

using namespace std;
int main()
{
    while(1)
    {
        int x, y;
        cin>>x>>y;

        if(x==y)
        {
            return 0;
        }

        if(x>y)
        {
            cout<< "Decrescente"<<endl;
        }
        else
        {
            cout<< "Crescente"<<endl;
        }
    }
}