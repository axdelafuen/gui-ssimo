#pragma once

#include "Observateur.h"

namespace observer {

class AffichageDebugMouvement : public Observateur
{
	public:
		void miseAJour(gui::ObjetGraphique* objet) override;
};

}
