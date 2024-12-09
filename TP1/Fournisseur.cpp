//
//  Fournisseur.cpp
//  TP1
//
//  Created by Antoine Aubert on 10/11/2020.
//

#include "Fournisseur.hpp"
#include <iostream>
#include<string>
using namespace std;

void Fournisseur::setFournisseur(string _fournisseur)
{
    fournisseur=_fournisseur;
}

//focntion qui permet de retourner le Fournisseur
string Fournisseur::getFournisseur()
{
    return fournisseur;
}

//fonction qui permet d'afficher
void Fournisseur:: Afficher()
{
    cout<<"Nom du fournisseur:"<<fournisseur<<endl;
}

//constructeur
Fournisseur::Fournisseur()
{
    fournisseur="Atlas Bus";
}

//constructeur par recopie
Fournisseur::Fournisseur(const Fournisseur &f)
{
    fournisseur=f.fournisseur;
}

//Destructeur 
Fournisseur::~Fournisseur()
{
    cout<<"Destruction de fournisseur:"<<fournisseur<<endl;
    
}
