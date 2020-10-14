#include<iostream>
#include<string>

using namespace std;

int main()
{
    string type1,type2,type3;

    cin>>type1>>type2>>type3;

    if(type1=="vertebrado")
    {
        if(type2=="ave")
        {
            if(type3=="carnivoro")
            {
                cout<< "aguia"<<endl;
            }

            if(type3=="onivoro")
            {
                cout<< "pomba"<<endl;
            }
        }
        if(type2=="mamifero")
        {
            if(type3=="onivoro")
            {
                cout<<"homem"<<endl;
            }

            if(type3=="herbivoro")
            {
                cout<< "vaca"<<endl;
            }
        }
    }
    if(type1=="invertebrado")
    {
        if(type2=="inseto")
        {
            if(type3=="hematofago")
            {
                cout<< "pulga"<<endl;
            }

            if(type3=="herbivoro")
            {
                cout<< "lagarta"<<endl;
            }
        }
        if(type2=="anelideo")
        {
            if(type3=="hematofago")
            {
                cout<< "sanguessuga"<<endl;
            }

            if(type3=="onivoro")
            {
                cout<<"minhoca"<<endl;
            }
        }
    }
}
