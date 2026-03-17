
#include "Rectangle.hpp"

#include "Position.hpp"

#include <iostream>
#include <sstream>

namespace gui {

Rectangle::Rectangle(Position hautGauche, Position basDroite)
	: mHautGauche(hautGauche), mBasDroite(basDroite)
{
}

void Rectangle::deplacer(const Position& nouvellePos)
{
	mBasDroite += nouvellePos - mHautGauche;
	mHautGauche = nouvellePos;
	notifierObservateurs();
}

void Rectangle::peindre()
{
	std::cout << "Affichage d'un rectangle";
}

std::string Rectangle::debug() const
{
	std::ostringstream oss;
	oss << "Rectangle[hautGauche=(" << mHautGauche.x() << "," << mHautGauche.y()
		<< "), basDroite=(" << mBasDroite.x() << "," << mBasDroite.y() << ")]";
	return oss.str();
}

std::string Rectangle::serialiser() const
{
	std::ostringstream oss;
	oss << "Rectangle;" << mHautGauche.x() << ";" << mHautGauche.y()
		<< ";" << mBasDroite.x() << ";" << mBasDroite.y();
	return oss.str();
}

}
