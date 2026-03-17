#include "AffichageSerialisationAJour.h"
#include "gui/ObjetGraphique.hpp"

#include <iostream>

namespace observer {

void AffichageSerialisationAJour::miseAJour(gui::ObjetGraphique* objet)
{
	std::cout << "[SERIALISATION] " << objet->serialiser() << std::endl;
}

}
