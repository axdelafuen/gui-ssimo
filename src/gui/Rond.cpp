
#include "Rond.hpp"

#include "Position.hpp"
#include "Distance.hpp"

#include <iostream>

namespace gui {

Rond::Rond(Position centre, Distance rayon)
	: mCentre(centre), mRayon(rayon)
{
}

void Rond::deplacer(const Position& nouvellePos)
{
	mCentre = nouvellePos;
}

void Rond::peindre()
{
	std::cout << "Affichage d'un rond";
}

}
