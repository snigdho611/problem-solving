#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int arrsize;
    string direction;
    cin>> arrsize>> direction;
 
    char input[arrsize][arrsize], temp[arrsize][arrsize];
 
    for(int i=0;i<arrsize;i++)
    {
        for(int j=0;j<arrsize;j++)
        {
            cin>>input[i][j];
            temp[i][j] = input[i][j];
        }
    }
 
    for(int q=0;q<direction.size();q++)
    {
        if(direction[q] == 'R')
        {
            //cout<<"\nShifting right"<<endl;
            for(int i=0; i<arrsize; i++)
            {
                for(int j=arrsize-1, k=0;j>=0, k<arrsize;j--, k++)
                {
                    temp[i][k]=input[j][i];
                    if(temp[i][k] == '<')
                    {
                        temp[i][k] = '^';
                    }
                    else if(temp[i][k] == '^')
                    {
                        temp[i][k] = '>';
                    }
                    else if(temp[i][k] == '>')
                    {
                        temp[i][k] = 'v';
                    }
                    else if(temp[i][k] == 'v')
                    {
                        temp[i][k] = '<';
                    }
                    else if(temp[i][k] == '.')
                    {
                        temp[i][k] = '.';
                    }
                    //input[i][j] = temp[i][k];
                    //cout<< "B["<<i<<"]["<<k<<"] = A["<<j<<"]["<<i<<"] = "<<temp[i][k]<<endl;
                }
               // cout<<endl;
            }
        }
        if(direction[q] == 'L')
        {
            //cout<<"\nShifting left\n"<<endl;
            for(int i=0,k=arrsize-1; i<arrsize; i++, k--)
            {
                for(int j=0; j<arrsize; j++)
                {
                    temp[i][j]=input[j][k];
                    if(temp[i][j] == '<')
                    {
                        temp[i][j] = 'v';
                    }
                    else if(temp[i][j] == '^')
                    {
                        temp[i][j] = '<';
                    }
                    else if(temp[i][j] == '>')
                    {
                        temp[i][j] = '^';
                    }
                    else if(temp[i][j] == 'v')
                    {
                        temp[i][j] = '>';
                    }
                    else if(temp[i][j] == '.')
                    {
                        temp[i][j] = '.';
                    }
                    //input[i][j] = temp[i][k];
                    //cout<< "B["<<i<<"]["<<k<<"] = A["<<j<<"]["<<i<<"] = "<<temp[i][k]<<endl;
                }
               // cout<<endl;
            }
        }
        for(int i=0;i<arrsize;i++)
        {
            for(int j=0;j<arrsize;j++)
            {
                input[i][j]=temp[i][j];
            }
        }
    }
    for(int i=0;i<arrsize;i++)
    {
        for(int j=0;j<arrsize;j++)
        {
            cout<<temp[i][j];
        }
        cout<<endl;
    }
}