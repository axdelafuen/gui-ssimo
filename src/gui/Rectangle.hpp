
#pragma once

#include "ObjetGraphique.hpp"
#include "Position.hpp"

namespace gui {

class Rectangle : public ObjetGraphique
{
	public:
		Rectangle(Position hautGauche, Position basDroite);

		void deplacer(const Position& nouvellePos) override;
		void peindre() override;

	private:
		Position mHautGauche;
		Position mBasDroite;
};

}
