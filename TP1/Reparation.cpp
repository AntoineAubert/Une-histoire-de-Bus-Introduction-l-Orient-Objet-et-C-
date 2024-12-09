//
//  Reparation.cpp
//  TP1
//
//  Created by Antoine Aubert on 26/11/2020.
//

#include "Reparation.hpp"
#include <iostream>
using namespace std;

void reparation::setcouthoraire(float _couthoraire)
{
    coutHoraire=_couthoraire;
}

//fonction pour retourner
float reparation::getcouthorraire()
{
    return coutHoraire;
}

//fonction constructeur
reparation::reparation()
{
    coutHoraire=10;
}

//fonction constructeur par recopie
reparation::reparation(const reparation &R)
{
    coutHoraire=R.coutHoraire;
}

//fonction de destructeur
reparation::~reparation()
{
    cout<<"Destructeur de coup horaire:"<<coutHoraire<<endl;
}

//faonction d'affichage
void reparation::affichage()
{
    cout<<"Le coup Horaire est de :"<<coutHoraire<<endl;
    
}
