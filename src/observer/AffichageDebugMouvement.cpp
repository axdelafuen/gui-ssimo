#include "AffichageDebugMouvement.h"
#include "gui/ObjetGraphique.hpp"

#include <iostream>

namespace observer {

void AffichageDebugMouvement::miseAJour(gui::ObjetGraphique* objet)
{
	std::cout << "[DEBUG] Objet deplace : " << objet->debug() << std::endl;
}

}
