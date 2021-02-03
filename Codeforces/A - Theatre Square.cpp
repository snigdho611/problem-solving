#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{long long n, m, a, length, width;
 cin>>n>>m>>a;
 
 length=m/a;
 width=n/a;
 
 if(m%a!=0) length++;
 if(n%a!=0) width++;
 
 cout<<length*width << endl;
 return 0 ;
}