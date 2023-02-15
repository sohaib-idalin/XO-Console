#include <iostream>
#include "func.cpp"
using namespace std;
char a1='1',a2='2',a3='3',a4='4',a5='5',a6='6',a7='7',a8='8',a9='9';
char tour='x';
int main()
{
    cout <<endl<< " Hello GAME START!" << endl;
    int choix;
    char victoire='0';
    char replay;
    game:
    afficher();
    for(int i=1;i<=9;i++){
        cout<<"le tour de : "<<tour<<endl;
        cout<<"choisir un emplacement : ";
        debut:
        cin>>choix;
        if( fchoix(choix)==0)goto debut;

        afficher();
        victoire=check();
        if(victoire!='0'){
            cout<<"victoire du joueur "<<victoire<<endl;
            goto gamefin;
        }
        if(tour=='x'){
            tour='o';
        }else{
            tour='x';
        }

    }
    cout<<"\n  EGALITE  \n\n";
    gamefin:

    cout<<"taper r pour rejouer : ";
    cin >> replay;
    if(replay=='r'){
        reset();
        cout<<"\n\n :NEW GAME: \n";
        goto game;
    }

    return 0;
}
