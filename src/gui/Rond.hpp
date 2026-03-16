
#pragma once

#include "Distance.hpp"
#include "ObjetGraphique.hpp"
#include "Position.hpp"

namespace gui {

class Rond : public ObjetGraphique
{
	public:
		Rond(Position centre, Distance rayon);

		void deplacer(const Position& nouvellePos) override;
		void peindre() override;

	private:
		Position mCentre;
		Distance mRayon;
};

}
