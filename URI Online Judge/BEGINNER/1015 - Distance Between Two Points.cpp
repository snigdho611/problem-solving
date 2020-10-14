#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2, distance, temp1, temp2;
    cin>>x1>>y1>>x2>>y2;
    temp1=(x2-x1)*(x2-x1);
    temp2=(y2-y1)*(y2-y1);
    distance=sqrt(temp1+temp2);
    cout<<fixed<<setprecision(4)<<distance<<endl;
}
