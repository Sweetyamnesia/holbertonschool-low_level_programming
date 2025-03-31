# C - Listes Chaînées Simples (Singly Linked Lists)

## 📖 Introduction
Les **listes chaînées simples** sont une structure de données dynamique qui permet d'organiser et de manipuler des collections d'éléments de manière flexible. Contrairement aux tableaux, elles ne nécessitent pas de taille fixe et permettent des opérations d'ajout et de suppression efficaces.

---

## 🔹 1. Pourquoi utiliser les listes chaînées ?

### 📌 Différences entre Tableaux et Listes Chaînées

| Critère | Tableaux (`array`) | Listes Chaînées (`linked list`) |
|---------|------------------|------------------|
| **Taille** | Fixe | Dynamique |
| **Accès aux éléments** | Direct (`O(1)`) | Séquentiel (`O(n)`) |
| **Insertion/Suppression** | Coûteuse (`O(n)`) | Rapide (`O(1)`) |
| **Mémoire** | Allocation fixe | Allocation dynamique |

✅ **Utiliser un tableau si :**
- La taille des données est connue
- Un accès rapide par index est nécessaire

✅ **Utiliser une liste chaînée si :**
- On doit ajouter ou supprimer fréquemment des éléments
- La taille des données varie souvent

---

## 🔹 2. Structure d'une Liste Chaînée

Chaque **nœud** d'une liste chaînée contient :
1. Une **valeur** (les données)
2. Un **pointeur** vers le prochain nœud

### 📌 Définition d'un nœud en C

```c
#include <stdio.h>
#include <stdlib.h>

// Définition d'un nœud
typedef struct Node {
    int data;
    struct Node *next;
} Node;
```

---

## 🔹 3. Opérations sur les Listes Chaînées

### 📌 Ajouter un élément en début de liste

```c
Node *add_front(Node *head, int value) {
    Node *new_node = malloc(sizeof(Node));
    if (!new_node) return NULL;

    new_node->data = value;
    new_node->next = head;
    return new_node;  // Nouveau début de la liste
}
```

### 📌 Ajouter un élément à la fin

```c
Node *add_end(Node *head, int value) {
    Node *new_node = malloc(sizeof(Node));
    if (!new_node) return NULL;

    new_node->data = value;
    new_node->next = NULL;

    if (head == NULL) {
        return new_node;
    }

    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
    return head;
}
```

### 📌 Supprimer un élément

```c
Node *delete(Node *head, int value) {
    if (!head) return NULL;

    if (head->data == value) {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *current = head;
    while (current->next && current->next->data != value) {
        current = current->next;
    }

    if (current->next) {
        Node *temp = current->next;
        current->next = temp->next;
        free(temp);
    }

    return head;
}
```

### 📌 Afficher la liste

```c
void print_list(Node *head) {
    Node *temp = head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
```

---

## ✅ Conclusion
- **Les listes chaînées sont très flexibles** et permettent une gestion dynamique de la mémoire.
- **Elles sont plus lentes que les tableaux** pour l'accès aux éléments mais meilleures pour les insertions et suppressions.
- **Elles sont utilisées dans les structures de données avancées** comme les files, piles et listes doublement chaînées.

🚀 **Prêt à coder ta propre liste chaînée ?**

