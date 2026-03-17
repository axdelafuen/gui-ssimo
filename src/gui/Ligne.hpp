
#pragma once

#include "ObjetGraphique.hpp"
#include "Position.hpp"

#include <string>

namespace gui {

class Ligne : public ObjetGraphique
{
	public:
		Ligne(Position hautGauche, Position basDroite);

		void deplacer(const Position& nouvellePos) override;
		void peindre() override;
		std::string debug() const override;
		std::string serialiser() const override;

	protected:
		Position mHautGauche;
		Position mBasDroite;
};

}
