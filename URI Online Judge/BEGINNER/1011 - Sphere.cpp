#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    double constant=4.0/3.0, pi=3.14159, vol, radius;
    cin>>radius;
    vol=radius*radius*radius*pi*constant;
    printf("VOLUME = %.3f\n", vol);

}
