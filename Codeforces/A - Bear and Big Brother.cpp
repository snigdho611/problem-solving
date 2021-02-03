#include<iostream>
 
using namespace std;
 
int main()
{
    int weightL, weightB;
 
    cin>>weightL>>weightB;
 
    for(int i=0;;i++)
    {
        weightL=weightL*3;
        weightB=weightB*2;
        if(weightL > weightB)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
}