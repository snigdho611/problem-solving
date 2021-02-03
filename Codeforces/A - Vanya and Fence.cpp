#include<iostream>
 
using namespace std;
 
int main()
{
	int people, fenceHeight, peopleHeight, total=0;
 
	cin>>people>>fenceHeight;
 
	for(int i=0;i<people;i++)
	{
		cin>>peopleHeight;
 
		if(peopleHeight<=fenceHeight)
		{
			total = total+1;
		}
 
		else if(peopleHeight>fenceHeight)
		{
			total = total+2;
		}
	}
 
	cout<<total<<endl;
}
