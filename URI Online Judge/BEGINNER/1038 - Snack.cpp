#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int X;
    float arr[5]={4.00, 4.50, 5.00, 2.00, 1.50}, result, Y;
    cin>>X>>Y;

    result=arr[X-1]*Y;
    cout<<fixed<<setprecision(2)<< "Total: R$ "<<result<<endl;
}
