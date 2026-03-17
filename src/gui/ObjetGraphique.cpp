#include "ObjetGraphique.hpp"
#include "observer/Observateur.h"

#include <algorithm>

namespace gui {

void ObjetGraphique::ajouterObservateur(observer::Observateur* obs)
{
	mObservateurs.push_back(obs);
}

void ObjetGraphique::supprimerObservateur(observer::Observateur* obs)
{
	mObservateurs.erase(
		std::remove(mObservateurs.begin(), mObservateurs.end(), obs),
		mObservateurs.end());
}

void ObjetGraphique::notifierObservateurs()
{
	for (auto* obs : mObservateurs)
	{
		obs->miseAJour(this);
	}
}

}
