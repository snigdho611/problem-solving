#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int A=0, D=0, games=0;
    string gameList;
 
    cin>>games>>gameList;
 
    for(int i=0;i<games;i++)
    {
        if(gameList[i] == 'A')
        {
            A++;
        }
        if(gameList[i] == 'D')
        {
            D++;
        }
    }
 
    if(A>D)
    {
        cout<<"Anton"<<endl;
    }
    else if(A<D)
    {
        cout<<"Danik"<<endl;
    }
    else if(A==D)
    {
        cout<<"Friendship"<<endl;
    }
}
