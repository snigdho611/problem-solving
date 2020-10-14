#include<iostream>
#include<complex>

using namespace std;

int main()
{
    int a, b, c, final_,final_2;
    cin>>a>>b>>c;

    final_=(a+b+abs(a-b))/2;
    final_2=(final_+c+abs(final_-c))/2;

    cout<<final_2<<" eh o maior"<<endl;
}
