#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    while(1)
    {
        int x,y,z;
        cin>>x;
        if(x==0)
        {
            break;
        }
        cin>>y>>z;
        {
            cout<< floor(sqrt(((x*y)*100)/z))<<endl;
        }
    }
}
