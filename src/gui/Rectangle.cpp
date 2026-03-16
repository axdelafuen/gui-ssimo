
#include "Rectangle.hpp"

#include "Position.hpp"

#include <iostream>

namespace gui {

Rectangle::Rectangle(Position hautGauche, Position basDroite)
	: mHautGauche(hautGauche), mBasDroite(basDroite)
{
}

void Rectangle::deplacer(const Position& nouvellePos)
{
	mBasDroite += nouvellePos - mHautGauche;
	mHautGauche = nouvellePos;
}

void Rectangle::peindre()
{
	std::cout << "Affichage d'un rectangle";
}

}
