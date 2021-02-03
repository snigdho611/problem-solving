#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string A;
    int cap=0, small=0;
 
    cin>> A;
 
    for(int i=0; i<A.length(); i++){
        if(A[i]>=65&&A[i]<=90){
            cap++;
        }
        else if(A[i]>=97&&A[i]<=122){
            small++;
        }
    }
 
    for(int i=0; i<A.length() ; i++){
        if(cap>small){
            if(A[i]>=97&&A[i]<=122){
            A[i] = A[i]-32;
            }
        }
    else{
        if(A[i]>=65&&A[i]<=90){
            A[i] = A[i]+32;
        }
    }
    }
 
    cout<<A;
}