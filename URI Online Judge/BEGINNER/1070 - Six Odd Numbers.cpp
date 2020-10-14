#include<iostream>

using namespace std;
int main()
{
    int n, counter=0;
    cin>> n;

    for(int i=n ; counter<6 ; i++)
    {
        if(i%2!=0)
        {
            cout<< i <<endl;
            counter++;
        }
    }
}