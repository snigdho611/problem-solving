#include<iostream>

using namespace std;
int main()
{
    while(1)
    {
        int x, y;
        cin>>x>>y;

        if(x==0||y==0)
        {
            return 0;
        }

        if(x>0)
        {
            if(y>0)
            {
                cout<< "primeiro"<<endl;
            }
            if(y<0)
            {
                cout<< "quarto"<<endl;
            }
        }
        if(x<0)
        {
            if(y>0)
            {
                cout<< "segundo"<<endl;
            }
            if(y<0)
            {
                cout<< "terceiro"<<endl;
            }
        }

    }
}
