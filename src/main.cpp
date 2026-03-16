
#include "gui/Distance.hpp"
#include "gui/Ligne.hpp"
#include "gui/ObjetGraphique.hpp"
#include "gui/Position.hpp"
#include "gui/Rond.hpp"
#include "gui/Rectangle.hpp"
#include "gui/Fleche.hpp"

#include <iostream>
#include <iterator>
#include <memory>
#include <random>
#include <vector>

gui::Distance createRandomDistance()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<double> distrib(0., 20.);
	return {distrib(gen)};
}

gui::Position createRandomPosition()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<double> distrib(-10., 10.);
	return {distrib(gen), distrib(gen)};
}

gui::Fleche::SensFleche createRandomSens()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(0, 1);
	return distrib(gen) == 0 ? gui::Fleche::SensFleche::Droite : gui::Fleche::SensFleche::Gauche;
}

std::unique_ptr<gui::ObjetGraphique> createRandomOG()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(0, 3);
	switch (distrib(gen))
	{
	case 0: // Rond
		std::cout << "Creation d'un rond" << std::endl;
		return std::make_unique<gui::Rond>(createRandomPosition(), createRandomDistance());
		break;
	case 1: // Rectangle
		std::cout << "Creation d'un rectangle" << std::endl;
		return std::make_unique<gui::Rectangle>(createRandomPosition(), createRandomPosition());
		break;
	case 2: // Ligne
		std::cout << "Creation d'une ligne" << std::endl;
		return std::make_unique<gui::Ligne>(createRandomPosition(), createRandomPosition());
		break;
	case 3: // Fleche
		std::cout << "Creation d'une fleche" << std::endl;
		return std::make_unique<gui::Fleche>(
			createRandomPosition(), createRandomPosition(), createRandomSens());
		break;
	}
	return nullptr;
}

int main(int argc, char* argv[])
{
	std::vector<std::unique_ptr<gui::ObjetGraphique>> objets;

	while (true)
	{
		int choix = 0;
		std::cout << "\n\nChoix :" << std::endl;
		std::cout << "0-Quitter" << std::endl;
		std::cout << "1-Pas de changement" << std::endl;
		std::cout << "2-Ajout objet" << std::endl;
		std::cout << "3-Supprimer objet" << std::endl;
		std::cout << "4-Deplacer objet" << std::endl;
		std::cout << "5-Affichage classique" << std::endl;
		std::cout << "6-Affichage debug" << std::endl;
		std::cout << "7-Serialisation" << std::endl;
		std::cin >> choix;
		switch (choix)
		{
		case 0: break;
		case 1: break;
		case 2: objets.emplace_back(createRandomOG()); break;
		case 3:
		{
			int idASuppr = 0;
			std::cout << "Quel id ?" << std::endl;
			std::cin >> idASuppr;
			auto itASuppr = objets.begin();
			std::advance(itASuppr, idASuppr);
			objets.erase(itASuppr);
			break;
		}
		case 4:
		{
			int idADeplacer = 0;
			std::cout << "Quel id ?" << std::endl;
			std::cin >> idADeplacer;
			objets[idADeplacer]->deplacer(createRandomPosition());
			break;
		}
		case 5:
		{
			int i = 0;
			for (const auto& objectGraphique : objets)
			{
				std::cout << i << " => ";
				objectGraphique->peindre();
				std::cout << std::endl;
				++i;
			}
			break;
		}
		case 6:
		{
			// Debug
			break;
		}
		case 7:
		{
			// Serialisation
			break;
		}
		}
	}

  return 0;
}
