# C - Doubly Linked List

## 📖 Introduction
Une **liste chaînée doublement chaînée** est une structure de données composée de **nœuds**, où chaque nœud contient :
1. Une **valeur** (les données stockées).
2. Un **pointeur vers le nœud suivant** (next).
3. Un **pointeur vers le nœud précédent** (prev).

Elle permet de parcourir la liste dans les deux directions : **avant** et **arrière**.

## 🔹 Quand utiliser une liste chaînée doublement chaînée ?
Les listes chaînées doublement chaînées sont idéales lorsque vous devez :
- Parcourir la liste dans les deux directions.
- Effectuer des insertions et suppressions rapides à la fois en début et en fin de liste.

## 🔹 Structure d'un nœud
Chaque nœud contient :
```c
typedef struct Node {
    int data;             // Valeur stockée
    struct Node *next;    // Pointeur vers le nœud suivant
    struct Node *prev;    // Pointeur vers le nœud précédent
} Node;

🔹 Opérations de base

Ajouter un élément en début de liste

Node *add_front(Node *head, int value) {
    Node *new_node = malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = head;
    new_node->prev = NULL;
    
    if (head != NULL)
        head->prev = new_node;
    
    return new_node;
}

Ajouter un élément à la fin de la liste

Node *add_end(Node *head, int value) {
    Node *new_node = malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    if (head == NULL) {
        new_node->prev = NULL;
        return new_node;
    }

    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
    new_node->prev = temp;

    return head;
}

Supprimer un élément

Node *delete(Node *head, int value) {
    Node *temp = head;
    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL) return head;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    if (temp == head) head = temp->next;
    free(temp);

    return head;
}

Afficher la liste

void print_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

✅ Conclusion

Les listes chaînées doublement chaînées sont une structure de données efficace pour les opérations de parcours bidirectionnel et de gestion dynamique de la mémoire. Elles sont idéales pour des cas d'utilisation où les insertions et suppressions rapides sont nécessaires.

