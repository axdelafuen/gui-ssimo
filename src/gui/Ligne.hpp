
#pragma once

#include "ObjetGraphique.hpp"
#include "Position.hpp"

namespace gui {

class Ligne : public ObjetGraphique
{
	public:
		Ligne(Position hautGauche, Position basDroite);

		void deplacer(const Position& nouvellePos) override;
		void peindre() override;

	private:
		Position mHautGauche;
		Position mBasDroite;
};

}
