#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    string A;
    float x, y;
    cin>>A>>x>>y;

    cout<<fixed<<setprecision(2)<< "TOTAL = R$ "<< x+(y*.15)<<endl;
}
