//
//  Remplacement.hpp
//  TP1
//
//  Created by Antoine Aubert on 26/11/2020.
//

#ifndef Remplacement_hpp
#define Remplacement_hpp
#include"Fournisseur.hpp"
#include <stdio.h>
//creation de la class Remplacement
class Remplacement
{
    float prix;
    Fournisseur * ptfr;
   
public:
    void setprix(float _prix);
    float getprix();
    void afficher();//fonction d'affichage
    Remplacement();//constructeur
    Remplacement(const Remplacement &R );//constructeur par recopie
    ~Remplacement();//destructeur
};
#endif /* Remplacement_hpp */
