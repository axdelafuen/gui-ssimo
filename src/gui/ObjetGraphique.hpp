
#pragma once

#include "Position.hpp"

#include <string>
#include <vector>

namespace observer { class Observateur; }

namespace gui {

class ObjetGraphique
{
	public:
		virtual ~ObjetGraphique() = default;

		virtual void deplacer(const Position& nouvellePos) = 0;
		virtual void peindre() = 0;
		virtual std::string debug() const = 0;
		virtual std::string serialiser() const = 0;

		void ajouterObservateur(observer::Observateur* obs);
		void supprimerObservateur(observer::Observateur* obs);

	protected:
		void notifierObservateurs();

	private:
		std::vector<observer::Observateur*> mObservateurs;
};

}
