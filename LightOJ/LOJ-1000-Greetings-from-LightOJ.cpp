#include<iostream>

using namespace std;

int main()
{
    int x, a, b;
    cin >> x;

    for(int i=0;i<x;i++)
    {
        cin>> a >> b;
        cout<< "Case "<<i+1<<": "<<a+b<<endl;
    }
	
	return 0;
}
