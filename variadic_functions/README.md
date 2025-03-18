# 🔹 Variadic Functions en C

## 📖 Description
Les **fonctions variadiques** en C permettent de passer un nombre variable d’arguments à une fonction. Ce document explique comment elles fonctionnent, l’utilisation des macros `va_start`, `va_arg` et `va_end`, ainsi que l’importance du qualificateur `const`.

---

## 🧐 Qu'est-ce qu'une fonction variadique ?
Une **fonction variadique** est une fonction qui peut accepter un nombre indéfini d'arguments après une liste d'arguments fixes.

👉 **Exemple :** `printf()` est une fonction variadique.

```c
printf("%d %s", 42, "Hello");
```
Ici, `printf()` reçoit un nombre variable d’arguments en fonction de la chaîne de format.

---

## 🚀 Comment utiliser les macros `va_start`, `va_arg` et `va_end`
Les fonctions variadiques utilisent la bibliothèque `<stdarg.h>` et trois macros principales :

### **1️⃣ Déclaration d'une fonction variadique**

```c
#include <stdarg.h>
#include <stdio.h>

// Fonction variadique qui additionne ses arguments
int somme(int count, ...) {
    va_list args;
    int total = 0;

    va_start(args, count);
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);
    
    return total;
}

int main() {
    printf("Somme: %d\n", somme(4, 1, 2, 3, 4));
    return 0;
}
```
👉 **Sortie attendue :**  
```
Somme: 10
```

### **2️⃣ Explication des macros**
| Macro       | Rôle |
|------------|------|
| `va_list`  | Déclare une liste d'arguments variadiques |
| `va_start` | Initialise `va_list` avec le dernier paramètre fixe |
| `va_arg`   | Récupère un argument de la liste (avec son type) |
| `va_end`   | Termine l'utilisation de `va_list` |

---

## 📍 Pourquoi et comment utiliser `const` ?
Le qualificateur `const` permet d'indiquer qu'une variable ou un pointeur ne peut pas être modifié après initialisation. Cela améliore la **sécurité**, **l'optimisation** et la **compréhension du code**.

### **📌 Exemple d'utilisation de `const` avec une fonction variadique**

```c
#include <stdarg.h>
#include <stdio.h>

void afficher_messages(const char *msg, ...) {
    va_list args;
    va_start(args, msg);

    while (msg != NULL) {
        printf("%s\n", msg);
        msg = va_arg(args, const char *);
    }
    
    va_end(args);
}

int main() {
    afficher_messages("Hello", "World", "Variadic", "Functions", NULL);
    return 0;
}
```
👉 **Sortie attendue :**  
```
Hello
World
Variadic
Functions
```

🚨 **Pourquoi `const char *` ?**
- Assure que `msg` ne peut pas être modifié dans la fonction.
- Évite des erreurs en essayant d'écrire sur des **littéraux de chaîne** stockés en `.rodata`.

---

## 🎯 Applications des Fonctions Variadiques
- **Implémentation de logs dynamiques** (`printf`, `syslog`).
- **Gestion flexible des paramètres** (ex. configuration dynamique).
- **Économie de surcharge** (évite d'écrire plusieurs versions d'une même fonction).

---

## ✅ Conclusion
Les **fonctions variadiques** rendent le code plus flexible et puissant, mais nécessitent une **gestion prudente de la mémoire et des types**. L’utilisation de `const` améliore la robustesse et l’optimisation du code.

---

## 🔍 Ressources complémentaires
- 📘 [Documentation sur stdarg.h](https://en.cppreference.com/w/c/variadic)
- 🎥 [Vidéo explicative sur les fonctions variadiques](https://www.youtube.com/watch?v=fm3R7D-vu1Y)

---

