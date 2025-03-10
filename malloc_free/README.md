En langage C, l'allocation dynamique permet d'allouer et de libérer de la mémoire à l'exécution plutôt qu'à la compilation. Cela est particulièrement utile lorsque la taille de la mémoire nécessaire n'est pas connue à l'avance.

Les deux principales fonctions utilisées pour gérer la mémoire dynamique sont :

malloc(size_t size) : Alloue un bloc de mémoire de size octets et retourne un pointeur vers ce bloc.

free(void *ptr) : Libère un bloc de mémoire précédemment alloué par malloc().

Utilisation de malloc et free

malloc : Allocation de mémoire

La fonction malloc() alloue un espace mémoire et retourne un pointeur vers celui-ci. La mémoire allouée n'est pas initialisée, il est donc important d'initialiser les valeurs avant utilisation.

free : Libération de la mémoire

La fonction free() est utilisée pour libérer la mémoire allouée dynamiquement.

Règles importantes :

Toujours libérer la mémoire allouée pour éviter les fuites mémoire.

Ne pas utiliser free() sur un pointeur déjà libéré (risque de comportement indéfini).

Après free(), il est recommandé de mettre le pointeur à NULL pour éviter d’y accéder accidentellement.

L'utilisation de malloc() et free() est essentielle en programmation C pour gérer efficacement la mémoire. Une bonne gestion mémoire permet d'éviter les fuites mémoire et les comportements indéfinis. 