# TP2

## Configuration
```console
mkdir build_debug
cd build_debug
cmake -DCMAKE_BUILD_TYPE=Debug -G "MinGW Makefiles" ..
cmake --build .
```

## Run
```console
ctest => one test successful
.\bin\Debug\TP2.exe => UI shows
```

## Instruction

### Visiteur

Les classes graphiques Rond, Rectangle, Ligne et Fleche permettent d'afficher graphiquement chaque element.

Note importante : Cet affichage est simule par une sortie console ici. Mais il s'agit normalement d'un affichage grahique où l'on ne souhaite pas voir apparaitre d'information de debug normallement.

On veut leur rajouter leurs des fonctionnalites de :
- Sortie debug : affichage en mode console des informations technique (valeur exact des différents champs).
- La serialisation sous forme de xml : retour d'un string contenant l'integralite des donnes permettant de potentiellement le re-creer.
Afin de ne pas multiplier les responsabilités de la classe, rajouter ces deux fonctionnalités via le pattern Visiteur.

### Observateur

L'affichage est pour le moment effectue sur demande.

Rajouter une classe AffichageDebugMouvement qui permettra via le pattern observeur d'afficher les informations de debug des instances deplacees.

La classe AffichageDebugMouvement est donc l'observeur et les objets graphiques les observes.

Reutiliser votre pattern pour implementer AffichageSerialisationAJour qui affiche dans la console la serialisation a jour des objets deplaces.

### Etat

Dans une utilisation classique à la souris, un objet est en réalité déplacé un grand nombre de fois (à chaque déplacement de la souris pour rafraichir l'affichage lors du déplacement).

Implémenter une classe Deplaceur qui sera en charge de déplacer un objet graphique :
- Lors du premier déplacement, notification à l'uilisateur du déplacement en cours et l'affichage graphique sera mis à jour.
- Lors des déplacements suivant, l'affichage graphique sera mis à jour.
- Lors de la validation du déplacement, notification de fin de déplacement et la nouvelle sérialisation sera fournit.
- Lors de l'annulation, notification de l'annulation et retour à la position initiale.
Ex :
```
  Deplaceur depl(monObjetGraphique);
  depl.deplacer(); // Notification de deplacement (ex : changement de curseur)
                   // + Mise à jour graphique
  depl.deplacer(); // Mise à jour graphique
  depl.deplacer(); // Mise à jour graphique
  depl.valider();  // Notification de fin de deplacement
                   // + Nouvelle serialisation
  depl.deplacer(); // Notification de deplacement (ex : changement de curseur)
                   // + Mise à jour graphique
  depl.deplacer(); // Mise à jour graphique
  depl.annuler();  // Notification de fin de deplacement
                   // + Retour a la position initiale
                   // + Mise à jour graphique
```

Pour cela, on representera Deplaceur via plusieurs etats :
- Inactif : aucun déplacement en cours ou fini.
- DebutDeplacememt: un premier deplacement a été demandé au Deplaceur.
- DeplacementEnCours : tous les déplacements suivant.
- ClotureDeplacement: le déplacement est validé.
- AnnulationDeplacement: le déplacement est annulé.

Utiliser le pattern Etat pour implémenter la solution.
