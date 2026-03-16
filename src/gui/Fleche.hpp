
#pragma once

#include "Ligne.hpp"
#include "Position.hpp"

namespace gui {

class Fleche : public Ligne
{
	public:
		enum class SensFleche
		{
			Gauche = 1,
			Droite = 2
		};

		Fleche(Position hautGauche, Position basDroite, SensFleche sensFleche);

		void peindre() override;

	private:
		// maybe_unused car ce devrait etre utilise dans peindre
		[[maybe_unused]] SensFleche mSensFleche;
};

}
