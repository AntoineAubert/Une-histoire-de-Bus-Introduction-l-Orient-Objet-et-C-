//
//  bus.hpp
//  TP1
//
//  Created by Antoine Aubert on 06/11/2020.
//

#ifndef bus_hpp
#define bus_hpp

#include <stdio.h>
#include <string>
using namespace std;

class bus
{
    string NoImm;
    bool enReparation;
    
public:
    void setNoImm(string _NoImm);
    string getNoImm();
    void setenReparation(bool _enReparation);
    bool getenReparation();
    void afficher();//fonction d'affichage
    bus();//Constructeur
    bus(string NoImm,bool enReparation);
    bus(const bus &b);//Constructeur par recopie
    ~bus();//Destructeur
};
#endif /* bus_hpp */
