#include<bits/stdc++.h>

using namespace std;
/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".
*/

class Solution {
public:
    string defangIPaddr(string address) {
        string x = address;
        string y = "";
        for(int i=0;i<x.length();i++)
        {
            if(x[i] == '.'){
                y = y + "[.]";
            }
            else
            {
                y = y + x[i];
            }
        }
        return y;
    }
};

int main()
{
    Solution x;
    cout<<x.defangIPaddr("127.0.0.1")<<endl;
}
