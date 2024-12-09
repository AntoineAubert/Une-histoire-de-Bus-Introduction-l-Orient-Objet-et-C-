//
//  Fournisseur.hpp
//  TP1
//
//  Created by Antoine Aubert on 10/11/2020.
//

#ifndef Fournisseur_hpp
#define Fournisseur_hpp

#include <stdio.h>
#include <string>
using namespace std;

// creation de la class Fournisseur

class Fournisseur
{
    string fournisseur;
public:
    void setFournisseur(string _fournisseur);
    string getFournisseur();
    void Afficher();//fonction d'affichage
    Fournisseur();//constructeur
    Fournisseur(const Fournisseur &F);//constructeur par recopie
    ~Fournisseur();//destructeur
    
};

#endif /* Fournisseur_hpp */
