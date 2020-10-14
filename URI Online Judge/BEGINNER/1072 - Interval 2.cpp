#include<iostream>

using namespace std;
int main()
{
    int cases, n, counter=0;

    cin>>cases;

    for(int i=1;i<=cases;i++)
    {
        cin>>n;
        if(n>=10&&n<=20)
        {
            counter++;
        }
    }
    cout<<counter<< " in"<<endl<< cases-counter << " out" <<endl;
}
