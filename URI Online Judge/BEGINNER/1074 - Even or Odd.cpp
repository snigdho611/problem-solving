#include<iostream>

using namespace std;
int main()
{
    int test, n;
    cin>>test;

    for(int i=0; i<test;i++)
    {
        cin>>n;
        if(n==0)
        {
            cout<< "NULL"<<endl;
        }
        else if(n%2==0)
        {
            cout<< "EVEN ";
            if(n>0)
            {
                cout<< "POSITIVE"<< endl;
            }
            else
            {
                cout<< "NEGATIVE"<<endl;
            }
        }
        else if(n%2!=0)
        {
            cout<< "ODD ";
            if(n>0)
            {
                cout<< "POSITIVE"<< endl;
            }
            else
            {
                cout<< "NEGATIVE"<<endl;
            }
        }
    }
}
