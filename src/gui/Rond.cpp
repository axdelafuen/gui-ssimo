
#include "Rond.hpp"

#include "Position.hpp"
#include "Distance.hpp"

#include <iostream>
#include <sstream>

namespace gui {

Rond::Rond(Position centre, Distance rayon)
	: mCentre(centre), mRayon(rayon)
{
}

void Rond::deplacer(const Position& nouvellePos)
{
	mCentre = nouvellePos;
	notifierObservateurs();
}

void Rond::peindre()
{
	std::cout << "Affichage d'un rond";
}

std::string Rond::debug() const
{
	std::ostringstream oss;
	oss << "Rond[centre=(" << mCentre.x() << "," << mCentre.y()
		<< "), rayon=" << mRayon.d() << "]";
	return oss.str();
}

std::string Rond::serialiser() const
{
	std::ostringstream oss;
	oss << "Rond;" << mCentre.x() << ";" << mCentre.y()
		<< ";" << mRayon.d();
	return oss.str();
}

}
