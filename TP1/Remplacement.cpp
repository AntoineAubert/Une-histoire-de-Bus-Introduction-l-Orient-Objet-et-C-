//
//  Remplacement.cpp
//  TP1
//
//  Created by Antoine Aubert on 26/11/2020.
//

#include "Remplacement.hpp"
#include <string>
#include <iostream>
using namespace std;

void Remplacement::setprix(float _prix)
{
    prix=_prix;
}

//fonction qui retourne le prix
float Remplacement::getprix()
{
    return prix;
}

//fonction qui permet l'affichage
void Remplacement::afficher()
{
    cout<<"Le Prix est:"<<prix<<endl;
}

//constructeur
Remplacement::Remplacement()
{
    prix=100;
    
}

//cosntructeur par recopie
Remplacement::~Remplacement()
{
    cout<<"destructeur de prix :"<<prix<<endl;
}
//constructeur par recopie 
Remplacement::Remplacement(const Remplacement &R)
{
    prix=R.prix;
}
