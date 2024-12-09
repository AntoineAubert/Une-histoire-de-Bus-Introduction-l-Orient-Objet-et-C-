//
//  Action.cpp
//  TP1
//
//  Created by Antoine Aubert on 20/11/2020.
//

#include "Action.hpp"
#include <string>
#include <iostream>
using namespace std;

void Action::setDate( string _date)
{
    date=_date;
}

//fonction qui retourne la date
string Action::getDate()
{
    return date;
}


void Action::setduree( float _duree)
{
    duree=_duree;
}

//fontion qui retourne la duree
float Action::getduree()
{
    return duree;
}


void  Action::setdecriptif(string _descriptif)
{
    descriptif=_descriptif;
}

//fonction qui retourne la description
string Action::getdescriptif()
{
    return descriptif;
}

//constructeur par recopie
Action::Action (const Action & A)
{
    date=A.date;
    duree=A.duree;
    descriptif=A.descriptif;
}

//destructeur
Action:: ~Action()
{
    cout<<"destructeur de la date:  "<<date<<"duree:"<<duree<<"descriptif:"<<descriptif<<endl;
}

//constructeur
Action::Action()
{
    date = "10/10/2010";
    duree = 10;
    descriptif="blabla";
}

//fonction qui permet l'affichage
void Action::afficher()
{
    cout<<"La date :"<<date<<endl;
    cout<<"La duree :"<<duree<<endl;
    cout<<"Le descriptif :"<<descriptif<<endl;
    
}
