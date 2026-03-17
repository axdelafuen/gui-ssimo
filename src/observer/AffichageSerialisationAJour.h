#pragma once

#include "Observateur.h"

namespace observer {

class AffichageSerialisationAJour : public Observateur
{
	public:
		void miseAJour(gui::ObjetGraphique* objet) override;
};

}
