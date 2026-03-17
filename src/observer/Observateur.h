#pragma once

namespace gui { class ObjetGraphique; }

namespace observer {

class Observateur
{
	public:
		virtual ~Observateur() = default;
		virtual void miseAJour(gui::ObjetGraphique* objet) = 0;
};

}
