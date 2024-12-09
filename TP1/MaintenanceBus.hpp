//
//  MaintenanceBus.hpp
//  TP1
//
//  Created by Antoine Aubert on 16/11/2020.
//

#ifndef MaintenanceBus_hpp
#define MaintenanceBus_hpp
#include <vector>
#include "bus.hpp"
#include "Fournisseur.hpp"
#include "Action.hpp"
#include "Piece.hpp"
#include "Reparation.hpp"
#include "Remplacement.hpp"
#include <stdio.h>
class maintenanceBus
{
    vector<bus*>lesbus;
    vector<Fournisseur*>lesFournisseurs;
    vector <Action*>lesActions;
    vector <Piece*>lesPieces;
    vector<Remplacement*>LesRemplacements;
    vector<reparation*>LesReparations;
    
public:
    void ajouterBus();
    void ajouteFournisseur();
    void ajouteAction();
    void ajouterPiece();
    void ajouterRemplacement();
    void ajouterReparation();

};
#endif /* MaintenanceBus_hpp */
