
#include "Fleche.hpp"

#include "Ligne.hpp"
#include "Position.hpp"

#include <iostream>
#include <sstream>

namespace gui {

Fleche::Fleche(Position hautGauche, Position basDroite, SensFleche sensFleche)
	: Ligne(hautGauche, basDroite),
		mSensFleche(sensFleche)
{
}

void Fleche::peindre()
{
	Ligne::peindre();
	std::cout << " + Affichage d'une fleche";
}

std::string Fleche::debug() const
{
	std::ostringstream oss;
	std::string sens = (mSensFleche == SensFleche::Gauche) ? "Gauche" : "Droite";
	oss << "Fleche[hautGauche=(" << mHautGauche.x() << "," << mHautGauche.y()
		<< "), basDroite=(" << mBasDroite.x() << "," << mBasDroite.y()
		<< "), sens=" << sens << "]";
	return oss.str();
}

std::string Fleche::serialiser() const
{
	std::ostringstream oss;
	int sens = static_cast<int>(mSensFleche);
	oss << "Fleche;" << mHautGauche.x() << ";" << mHautGauche.y()
		<< ";" << mBasDroite.x() << ";" << mBasDroite.y()
		<< ";" << sens;
	return oss.str();
}

}
