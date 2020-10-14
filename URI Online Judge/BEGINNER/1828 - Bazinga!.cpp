#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    string sheldon, raj;
    cin>>test;

    for(int i=0;i<test;i++)
    {
        cin>>sheldon>>raj;
        //1
        if(sheldon == "tesoura" && raj == "papel")
        {
            //Sheldon uses scissors to beat raj's paper
            cout<< "Caso #"<<i+1<< ": Bazinga!"<<endl;
        }
        //2
        else if(sheldon == "papel" && raj == "pedra")
        {
            //Sheldon uses paper to beat raj's rock
            cout<< "Caso #"<<i+1<< ": Bazinga!"<<endl;
        }
        //3
        else if(sheldon == "pedra" && raj == "lagarto")
        {
            //Sheldon uses rock to beat raj's lizard
            cout<< "Caso #"<<i+1<< ": Bazinga!"<<endl;
        }
        //4
        else if(sheldon == "lagarto" && raj == "Spock")
        {
            //Sheldon uses lizard to beat raj's Spock
            cout<< "Caso #"<<i+1<< ": Bazinga!"<<endl;
        }
        //5
        else if(sheldon == "Spock" && raj == "tesoura")
        {
            //Sheldon uses Spock to beat raj's tesoura
            cout<< "Caso #"<<i+1<< ": Bazinga!"<<endl;
        }
        //6
        else if(sheldon == "tesoura" && raj == "lagarto")
        {
            //Sheldon uses scissors to beat raj's lizard
            cout<< "Caso #"<<i+1<< ": Bazinga!"<<endl;
        }
        //7
        else if(sheldon == "lagarto" && raj == "papel")
        {
            //Sheldon uses lizard to beat raj's paper
            cout<< "Caso #"<<i+1<< ": Bazinga!"<<endl;
        }
        //8
        else if(sheldon == "papel" && raj == "Spock")
        {
            //Sheldon uses paper to beat raj's Spock
            cout<< "Caso #"<<i+1<< ": Bazinga!"<<endl;
        }
        //9
        else if(sheldon == "Spock" && raj == "pedra")
        {
            //Sheldon uses Spock to beat raj's pedra
            cout<< "Caso #"<<i+1<< ": Bazinga!"<<endl;
        }
        //10
        else if(sheldon == "pedra" && raj == "tesoura")
        {
            //Sheldon uses scissors to beat raj's lizard
            cout<< "Caso #"<<i+1<< ": Bazinga!"<<endl;
        }

        //1
        else if(raj == "tesoura" && sheldon == "papel")
        {
            //Raj uses scissors to beat sheldon's paper
            cout<< "Caso #"<<i+1<< ": Raj trapaceou!"<<endl;
        }
        //2
        else if(raj == "papel" && sheldon == "pedra")
        {
            //Raj uses paper to beat sheldon's rock
            cout<< "Caso #"<<i+1<< ": Raj trapaceou!"<<endl;
        }
        //3
        else if(raj == "pedra" && sheldon == "lagarto")
        {
            //Raj uses rock to beat sheldon's lizard
            cout<< "Caso #"<<i+1<< ": Raj trapaceou!"<<endl;
        }
        //4
        else if(raj == "lagarto" && sheldon == "Spock")
        {
            //Raj uses lizard to beat sheldon's Spock
            cout<< "Caso #"<<i+1<< ": Raj trapaceou!"<<endl;
        }
        //5
        else if(raj == "Spock" && sheldon == "tesoura")
        {
            //Raj uses Spock to beat sheldon's tesoura
            cout<< "Caso #"<<i+1<< ": Raj trapaceou!"<<endl;
        }
        //6
        else if(raj == "tesoura" && sheldon == "lagarto")
        {
            //Raj uses scissors to beat sheldon's lizard
            cout<< "Caso #"<<i+1<< ": Raj trapaceou!"<<endl;
        }
        //7
        else if(raj == "lagarto" && sheldon == "papel")
        {
            //Raj uses lizard to beat sheldon's paper
            cout<< "Caso #"<<i+1<< ": Raj trapaceou!"<<endl;
        }
        //8
        else if(raj == "papel" && sheldon == "Spock")
        {
            //Raj uses paper to beat sheldon's Spock
            cout<< "Caso #"<<i+1<< ": Raj trapaceou!"<<endl;
        }
        //9
        else if(raj == "Spock" && sheldon == "pedra")
        {
            //Raj uses Spock to beat sheldon's pedra
            cout<< "Caso #"<<i+1<< ": Raj trapaceou!"<<endl;
        }
        //10
        else if(raj == "pedra" && sheldon == "tesoura")
        {
            //Raj uses scissors to beat sheldon's lizard
            cout<< "Caso #"<<i+1<< ": Raj trapaceou!"<<endl;
        }

        else if(sheldon == raj)
        {
            cout<< "Caso #"<<i+1<< ": De novo!"<<endl;
        }
    }
}
