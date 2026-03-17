
#pragma once

#include "ObjetGraphique.hpp"
#include "Position.hpp"

#include <string>

namespace gui {

class Rectangle : public ObjetGraphique
{
	public:
		Rectangle(Position hautGauche, Position basDroite);

		void deplacer(const Position& nouvellePos) override;
		void peindre() override;
		std::string debug() const override;
		std::string serialiser() const override;

	private:
		Position mHautGauche;
		Position mBasDroite;
};

}
