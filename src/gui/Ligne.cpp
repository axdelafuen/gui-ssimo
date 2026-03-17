
#include "Ligne.hpp"

#include "Position.hpp"

#include <iostream>
#include <sstream>

namespace gui {

Ligne::Ligne(Position hautGauche, Position basDroite)
	: mHautGauche(hautGauche), mBasDroite(basDroite)
{
}

void Ligne::deplacer(const Position& nouvellePos)
{
	mBasDroite += nouvellePos - mHautGauche;
	mHautGauche = nouvellePos;
	notifierObservateurs();
}

void Ligne::peindre()
{
	std::cout << "Affichage d'une ligne";
}

std::string Ligne::debug() const
{
	std::ostringstream oss;
	oss << "Ligne[hautGauche=(" << mHautGauche.x() << "," << mHautGauche.y()
		<< "), basDroite=(" << mBasDroite.x() << "," << mBasDroite.y() << ")]";
	return oss.str();
}

std::string Ligne::serialiser() const
{
	std::ostringstream oss;
	oss << "Ligne;" << mHautGauche.x() << ";" << mHautGauche.y()
		<< ";" << mBasDroite.x() << ";" << mBasDroite.y();
	return oss.str();
}

}
