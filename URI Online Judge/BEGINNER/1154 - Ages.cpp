#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float input=1, counter=0, total=0;
    while(1)
    {
        cin>>input;
        if(input<0)
        {
            break;
        }
        else
        counter++;
        total=total+input;
    }
    cout<<fixed<<setprecision(2)<<total/counter<<endl;
}
