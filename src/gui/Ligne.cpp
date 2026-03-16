
#include "Ligne.hpp"

#include "Position.hpp"

#include <iostream>

namespace gui {

Ligne::Ligne(Position hautGauche, Position basDroite)
	: mHautGauche(hautGauche), mBasDroite(basDroite)
{
}

void Ligne::deplacer(const Position& nouvellePos)
{
	mBasDroite += nouvellePos - mHautGauche;
	mHautGauche = nouvellePos;
}

void Ligne::peindre()
{
	std::cout << "Affichage d'une ligne";
}

}
