
#include "Fleche.hpp"

#include "Ligne.hpp"
#include "Position.hpp"

#include <iostream>

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

}
