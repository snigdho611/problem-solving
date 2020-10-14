#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float x;
    cin>>x;
    if(x>0.00&&x<=2000.00)
    {
        cout<< "Isento" <<endl;
    }
    if(x>2000.01&&x<=3000.00)
    {
        cout<<fixed<<setprecision(2)<<"R$ "<< (x-2000)*0.08 <<endl;
    }
    if(x>3000.01&&x<=4500.00)
    {
        cout<<fixed<<setprecision(2)<<"R$ "<< (1000*0.08)+((x-3000)*0.18)<<endl;
    }
    if(x>4500)
    {
        cout<<fixed<<setprecision(2)<<"R$ "<< (1000*0.08)+(1500*0.18)+((x-4500)*0.28)<<endl;
    }
}
