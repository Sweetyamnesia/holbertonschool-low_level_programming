structures_typedef

Description

Ce projet illustre l'utilisation des structures et du mot-clé typedef en langage C. Il permet de simplifier la déclaration des structures et d'améliorer la lisibilité du code.

Contenu du projet

Le projet contient les éléments suivants :

structures.h : Déclaration des structures avec typedef.

main.c : Exemple d'utilisation des structures définies.

Makefile : Fichier permettant de compiler facilement le projet.

Compilation

Pour compiler le projet, utilisez la commande suivante :

make

Cela générera un exécutable program.

Exécution

Après compilation, exécutez le programme avec :

./program

Exemple de code

Voici un exemple de définition et d'utilisation d'une structure avec typedef :

#include <stdio.h>
#include "structures.h"

int main() {
    Personne p = {"Alice", 25};
    printf("Nom: %s, Age: %d\n", p.nom, p.age);
    return 0;
}

