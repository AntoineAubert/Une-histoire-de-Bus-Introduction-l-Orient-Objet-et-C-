//
//  MaintenanceBus.cpp
//  TP1
//
//  Created by Antoine Aubert on 16/11/2020.
//

#include "MaintenanceBus.hpp"
#include <iostream>
#include <vector>
#include "bus.hpp"
#include "Piece.hpp"
#include "Fournisseur.hpp"
#include "Action.hpp"
#include "Remplacement.hpp"
#include "Reparation.hpp"
using namespace std;

void maintenanceBus::ajouterBus()// inutile :(bus* b)
{ string no; int n;
    cout <<"combien de bus ?";
    cin>>n;
for (int i=0;i< n;i++)
{
    cout<<"Quel est le no imm du bus ? ";//"Ajouter un bus"; modifié
    cin>>no;
lesbus.push_back(new bus(no));
}

    
}
void maintenanceBus::ajouteFournisseur()
{
    string no; int n;
    cout<<"combien de fournisseur ?";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"ajouter un fournisseur";
        cin>>no;
        lesFournisseurs.push_back(new Fournisseur(no));
        
    }
    
}
void maintenanceBus::ajouteAction()
{string no;
    int n;
    cout<<"combien d'Actions?";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"ajouter une Action";
        cin>>no;
        lesActions.push_back(new Action(no));
        
    }
    
}
void maintenanceBus::ajouterPiece()
{
    string no;
    int n;
    cout<<"Combien de pieces ? ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"Ajouter une piece";
        cin>> no;
        lesPieces.push_back(new Piece(no));
        
    }
    
}

void maintenanceBus::ajouterReparation()
{
    string no;
    int n;
    cout<<"Combien de Reparation ? ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"Ajouter une reparation";
        cin>> no;
        LesReparations.push_back(new reparation(no));
        
    }
}

void maintenanceBus::ajouterRemplacement()
{
    string no;
    int n;
    cout<<"Combien de Remplacement ? ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"Ajouter un remplacement";
        cin>> no;
        LesRemplacements.push_back(new Remplacement(no));
        
    }
}
