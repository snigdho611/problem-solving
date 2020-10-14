#include<iostream>

using namespace std;
int main()
{
    int input;
    cin>> input;

    cout<< (input/365)<< " ano(s)"  <<endl;
    cout<< (input%365)/30<< " mes(es)"  <<endl;
    cout<< ((input%365)%30) << " dia(s)" <<endl;
}
