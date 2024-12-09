//
//  Piece.hpp
//  TP1
//
//  Created by Antoine Aubert on 20/11/2020.
//

#ifndef Piece_hpp
#define Piece_hpp
#include <string>

#include <stdio.h>
using namespace std;

//creation de la class Piece

class Piece {
    string Nom;
    int no;
public:
    void setNom(string _Nom);
    string getNom();
    void setno(int _no);
    int getno();
    Piece();//constructeur
    Piece(const Piece & P);//constructeur par recopie
    ~Piece();//destructeur
   void afficher();//fonction afficher
};
#endif /* Piece_hpp */
