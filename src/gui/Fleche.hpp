
#pragma once

#include "Ligne.hpp"
#include "Position.hpp"

#include <string>

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
		std::string debug() const override;
		std::string serialiser() const override;

	private:
		SensFleche mSensFleche;
};

}
