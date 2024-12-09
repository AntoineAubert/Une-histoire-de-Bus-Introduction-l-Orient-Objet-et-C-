//
//  main.cpp
//  TP1
//
//  Created by Antoine Aubert on 06/11/2020.
//

#include <iostream>
#include <string>
#include "bus.hpp"
#include "Fournisseur.hpp"
#include "MaintenanceBus.hpp"



using namespace std;

int main(int argc, const char * argv[]) {
    maintenanceBus m; // ajouté
    int choix=0;
    
    
//creation du Menue
    
    cout<<"---Maintenance Bus---"<<endl;
    cout<<"1)Recherche Bus NoImm"<<endl;
    cout<<"2)Recherche Action Date"<<endl;
    cout<<"3)Recherche Action Piece"<<endl;
    cout<<"4)Liste Actions Cout Decroissant"<<endl;
    cout<<"5)Recherche Bus en Reparation"<<endl;
    cout<<"6)Calcul cout Total Annuel"<<endl;
    cout<<"7)Recherche Fournisseur Nom"<<endl;
    cout<<"8)Calcul Cout Annuel Bus NoImm"<<endl;
    cout<<"9)Lister action Bus NoImm"<<endl;
    cout<<"10)Lister Bus"<<endl;
    cout<<"11)Lister fournisseur"<<endl;
    cin>>choix;
    
//creation du switch
    
    switch (choix) {
        case 1:
            m.ajouterBus();
            
            break;
        case 2:
            m.ajouteAction()
            
            break;
        case 3:
            cout<<"Fonctionnalité à développer"<<endl;
            break;
        case 4:
            cout<<"Fonctionnalité à développer"<<endl;
            break;
        case 5:
            cout<<"Fonctionnalité à développer"<<endl;
            break;
        case 6:
            cout<<"Fonctionnalité à développer"<<endl;
            break;
        case 7:
            cout<<"Fonctionnalité à développer"<<endl;
            break;
        case 8:
            cout<<"Fonctionnalité à développer"<<endl;
            break;
        case 9:
            cout<<"Fonctionnalité à développer"<<endl;
            break;
        case 10:
            cout<<"Fonctionnalité à développer"<<endl;
            break;
        case 11:
            cout<<"Fonctionnalité à développer"<<endl;
            break;
            
        default:
            cout<<"Erreur de choix"<<endl;
            break;
    }
    
    return 0;
}
