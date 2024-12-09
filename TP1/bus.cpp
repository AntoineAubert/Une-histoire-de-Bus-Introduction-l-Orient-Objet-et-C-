//
//  bus.cpp
//  TP1
//
//  Created by Antoine Aubert on 06/11/2020.
//

#include "bus.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void bus::setNoImm(string _NoImm)
{
    NoImm=_NoImm;
}

//fonction qui permet de retourner NoImm
string bus::getNoImm()
{
    return NoImm;
}


void bus::setenReparation(bool _enReparation)
{
    enReparation=_enReparation;
}

//fonction qui retourne Enreparation
bool bus::getenReparation()
{
    return enReparation;
}

//fonction qui affiche
void bus::afficher()
{
   cout<<"Immatriculation:"<<NoImm<<endl;
   cout<<"Etat vehicule:"<<enReparation<<endl;
}

//constructeur
bus::bus()
{
    NoImm="AA-000-AA";
    enReparation=0;
    
}

//constructeur par recopie
bus :: bus(const bus &b)
{
    NoImm=b.NoImm;
    enReparation = b.enReparation;
    
}

//Destructeur
bus::~bus()
{
    cout<<"Destructeur de :"<<NoImm<<"Etat:"<<enReparation<<endl;

}
