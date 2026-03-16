
#pragma once

#include "Position.hpp"

namespace gui {

class ObjetGraphique
{
	public:
		virtual ~ObjetGraphique() = default;

		virtual void deplacer(const Position& nouvellePos) = 0;
		virtual void peindre() = 0;
};

}
