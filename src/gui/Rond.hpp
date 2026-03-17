
#pragma once

#include "Distance.hpp"
#include "ObjetGraphique.hpp"
#include "Position.hpp"

#include <string>

namespace gui {

class Rond : public ObjetGraphique
{
	public:
		Rond(Position centre, Distance rayon);

		void deplacer(const Position& nouvellePos) override;
		void peindre() override;
		std::string debug() const override;
		std::string serialiser() const override;

	private:
		Position mCentre;
		Distance mRayon;
};

}
