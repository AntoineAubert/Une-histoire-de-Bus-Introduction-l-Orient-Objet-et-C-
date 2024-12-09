//
//  Action.hpp
//  TP1
//
//  Created by Antoine Aubert on 20/11/2020.
//

#ifndef Action_hpp
#define Action_hpp
#include <string>
#include <stdio.h>
using namespace std;

//creation de la class Action

class Action
{
    string date;
    float duree;
    string descriptif;
public:
    void setDate(string _date);
    string getDate();
    void setduree(float _duree);
    float getduree();
    void setdecriptif(string _descriptif);
    string getdescriptif();
    Action();//constructeur
    ~Action();//destructeur
    Action(const Action &A);//constructeur par recopie
    void afficher();//fonction afficher
};
#endif /* Action_hpp */
