//
//  Reparation.hpp
//  TP1
//
//  Created by Antoine Aubert on 26/11/2020.
//

#ifndef Reparation_hpp
#define Reparation_hpp

#include <stdio.h>
//declaration de la class Reparation
class reparation
{
    float coutHoraire;
public:
    void setcouthoraire(float _couthorraire);
    float getcouthorraire();
    reparation();//constructeur
    reparation(const reparation &R);// constructeur par recopie
    ~reparation();//destructeur de reparation
    void affichage();//focntion qui permet l'affichage
};
#endif /* Reparation_hpp */
