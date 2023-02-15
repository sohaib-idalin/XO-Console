#include <iostream>

using namespace std;
extern char a1,a2,a3,a4,a5,a6,a7,a8,a9;
extern char tour;
void afficher(){
    cout <<"\n\n  "<<a1<<"  |  "<<a2<<"  |  "<<a3<<"  "<<endl;
    cout <<"-----------------"<<endl;
    cout <<"  "<<a4<<"  |  "<<a5<<"  |  "<<a6<<"  "<<endl;
    cout <<"-----------------"<<endl;
    cout <<"  "<<a7<<"  |  "<<a8<<"  |  "<<a9<<"  \n\n"<<endl;

}
char check(){
    if(a1==a2 && a2==a3){
        return a1;
    }
    if(a4==a5&&a5==a6){
        return a4;
    }
    if(a7==a8&&a8==a9){
        return a7;
    }
    if(a1==a4&&a4==a7){
        return a1;
    }
    if(a2==a5&&a5==a8){
        return a2;
    }
    if(a3==a6&&a6==a9){
        return a3;
    }
    if(a1==a5&&a5==a9){
        return a1;
    }


    if(a7==a5&&a5==a3){
        return a7;
    }


    return '0';
}


void reset(){
    a1='1';
    a2='2';
    a3='3';
    a4='4';
    a5='5';
    a6='6';
    a7='7';
    a8='8';
    a9='9';
}

int fchoix(int choix){
    switch (choix) {
    case 1: if(a1=='1'){
            a1=tour;
            return 1;
        }
        cout<<"ereur du choix choisir un emplacement : ";
        break;
    case 2: if(a2=='2'){
            a2=tour;
            return 1;
        }
        cout<<"ereur du choix choisir un emplacement : ";
        break;
    case 3: if(a3=='3'){
            a3=tour;
            return 1;
        }
        cout<<"ereur du choix choisir un emplacement : ";
        break;
    case 4: if(a4=='4'){
            a4=tour;
            return 1;
        }
        cout<<"ereur du choix choisir un emplacement : ";
        break;
    case 5: if(a5=='5'){
            a5=tour;
            return 1;
        }
        cout<<"ereur du choix choisir un emplacement : ";
        break;
    case 6: if(a6=='6'){
            a6=tour;
            return 1;
        }
        cout<<"ereur du choix choisir un emplacement : ";
        break;
    case 7: if(a7=='7'){
            a7=tour;
            return 1;
        }
        cout<<"ereur du choix choisir un emplacement : ";
        break;
    case 8: if(a8=='8'){
            a8=tour;
            return 1;
        }
        cout<<"ereur du choix choisir un emplacement : ";
        break;
    case 9: if(a9=='9'){
            a9=tour;
            return 1;
        }
        cout<<"ereur du choix choisir un emplacement : ";
        break;
    default: cout<<"ereur du choix choisir un emplacement : ";
    }
    return 0;
}


