#include<iostream>
 
using namespace std;
 
int main(){
    int test;
    cin>> test;
 
    for(int i=0;i<test;i++){
        int x, y;
        cin>> x>> y;
        if(x==y){
            cout<< "YES"<<endl;
        }
        else{
            cout<< "NO"<<endl;
        }
    }
}