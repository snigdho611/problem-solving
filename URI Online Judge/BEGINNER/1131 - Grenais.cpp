#include<iostream>
using namespace std;

int main()
{
    int I_goals,G_goals,I_wins=0,G_wins=0,draws=0,games=0,simnao=1;

    while(1)
    {
        if(simnao==1){
        cin>>I_goals>>G_goals;
        if(I_goals>G_goals)
        {
            I_wins=I_wins+1;
        }
        else if(I_goals<G_goals)
        {
            G_wins=G_wins+1;
        }
        else if(I_goals==G_goals)
        {
            draws=draws+1;
        }
        games++;
        cout<< "Novo grenal (1-sim 2-nao)"<<endl;
        cin>>simnao;
        }
        if(simnao==2)
        {
            break;
        }
    }
    cout<<games<< " grenais"<<endl;
            cout<< "Inter:"<<I_wins<<endl;
            cout<< "Gremio:"<<G_wins<<endl;
            cout<< "Empates:"<<draws<<endl;
            if(I_wins>G_wins)
            {
                cout<< "Inter venceu mais"<<endl;
            }
            else if(I_wins<G_wins)
            {
                cout<< "Gremio venceu mais"<<endl;
            }
            else if(I_wins==G_wins)
            {
                cout<< "Não houve vencedor"<<endl;
            }
}
