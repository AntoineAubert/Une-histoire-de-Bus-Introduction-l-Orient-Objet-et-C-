//
//  Piece.cpp
//  TP1
//
//  Created by Antoine Aubert on 20/11/2020.
//

#include "Piece.hpp"
#include <string>
#include <iostream>
using namespace std;

void Piece:: setNom(string _Nom)
{
    Nom=_Nom;
}

//fonction retrun Nom
string Piece::getNom()
{
    return Nom;
}


void Piece:: setno(int _no)
{
    no=_no;
}

//focntion qui return NO
int Piece::getno()
{
    return no;
}

//fonction d'affichage
void Piece::afficher()
{
    cout<<"Nom :"<<Nom<<endl;
    cout<<"No :"<<no<<endl;
}

//constructeur
Piece::Piece()
{
    Nom="test";
    no=0;
}

//constructeur par recopie
Piece::Piece(const Piece &P)
{
    Nom=P.Nom;
    no=P.no;
}

//Destructeur
Piece::~Piece()
{
    cout<<"destructeur du Nom:"<<Nom<<"No:"<<no<<endl;
}
