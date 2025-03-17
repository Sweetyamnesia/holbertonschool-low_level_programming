# 🔹 Function Pointers en C

## 📖 Description
Ce document explique ce que sont les **pointeurs de fonction** en C, comment les utiliser, ce qu’ils stockent et où ils pointent en mémoire.

---

## 🧐 Qu'est-ce qu'un pointeur de fonction ?
Un **pointeur de fonction** est une variable qui stocke l’adresse d’une fonction et permet d’exécuter cette fonction de manière dynamique.

```c
int (*ptr_func)(int, int);
```
Ici, `ptr_func` est un pointeur vers une fonction prenant **deux `int` en paramètres** et retournant un `int`.

---

## 🚀 Comment utiliser un pointeur de fonction ?

### **1️⃣ Déclaration et affectation**
```c
#include <stdio.h>

// Définition d'une fonction normale
int addition(int a, int b) {
    return a + b;
}

int main() {
    // Déclaration d'un pointeur vers une fonction
    int (*ptr_func)(int, int);

    // Assignation de l'adresse de la fonction à ptr_func
    ptr_func = &addition;

    // Appel de la fonction via le pointeur
    int result = ptr_func(5, 3);

    printf("Résultat : %d\n", result);
    return 0;
}
```
👉 **Sortie attendue :**  
```
Résultat : 8
```

---

## 🛠️ Que contient un pointeur de fonction ?
Un **pointeur de fonction stocke l'adresse mémoire** où commence le code de la fonction. Il ne stocke pas le corps de la fonction elle-même, juste son **adresse en mémoire**.

---

## 📍 Où pointent les pointeurs de fonction dans la mémoire virtuelle ?
En général, les fonctions sont stockées dans la **section `.text`** (ou **Code Segment**) de la mémoire d’un programme.  
Les pointeurs de fonction pointent donc vers cette **zone mémoire en lecture seule**.

### **📌 Organisation typique de la mémoire d’un programme :**
| Segment | Contenu |
|---------|---------|
| **.text** | Code du programme (incluant les fonctions) |
| **.data** | Variables globales initialisées |
| **.bss** | Variables globales non initialisées |
| **Heap** | Mémoire dynamique (`malloc`, `free`) |
| **Stack** | Variables locales, adresses de retour des fonctions |

👉 **Exemple : Vérifier l’adresse mémoire d’une fonction**
```c
#include <stdio.h>

void hello() {
    printf("Hello, World!\n");
}

int main() {
    printf("Adresse de hello: %p\n", (void *)hello);
    return 0;
}
```
💡 **Sortie possible :**
```
Adresse de hello: 0x55a4b3d94010
```
Cela montre que la fonction `hello` est située dans le **segment `.text`** de la mémoire.

---

## 🎯 Applications des Pointeurs de Fonction
- Passer une fonction en argument (`qsort`, `bsearch`, callbacks).
- Implémenter des **tables de fonctions** (comme dans un interpréteur ou un moteur de jeu).
- Simuler le **polymorphisme** en C.

---

## ✅ Conclusion
Les **pointeurs de fonction** sont très puissants et permettent d’écrire du code plus **modulaire** et **dynamique**.  
Ils sont utilisés en **programmation système**, **interfaces graphiques**, et même en **exploitation de vulnérabilités** ! 🚀

---

## 🔍 Ressources complémentaires
- 📘 [Documentation C sur function pointers](https://www.cprogramming.com/tutorial/function-pointers.html)
- 🎥 [Vidéo explicative sur les pointeurs de fonction](https://www.youtube.com/watch?v=sxTFSDAZM8s)

---

