# Libft (FR)
# *Créée dans le cadre du programme 42 par ROPHAM*

> Bibliothèque C personnelle — fonctions génériques réutilisables pour tous les projets futurs.  


---

## - Description

Recoder soi-même les fonctions standards de la `libc`, les enrichir de fonctions supplémentaires et de manipulation de listes chaînées. Cette bibliothèque servira de socle pour l'ensemble des projets suivants à l'école.

La bibliothèque se divise en trois parties :

| Partie | Nom | Contenu |
|--------|-----|---------|
| 1 | Libc Functions | Recodage des fonctions standards de la libc |
| 2 | Additional Functions | Fonctions supplémentaires absentes de la libc |
| 3 | Linked List | Fonctions de manipulation de listes chaînées |

---
## - Instructions

## Compilation

```bash
make        # Compile et génère libft.a
make clean  # Supprime les fichiers objets (.o)
make fclean # Supprime les objets + libft.a
make re     # Recompilation complète (fclean + all)
```

Le fichier `libft.a` est généré à la racine du dépôt.

---

## Utilisation

```c
#include "libft.h"
```


## Partie 1 - Fonctions Libc

### Tests de caractères

| Fonction | Description |
|----------|-------------|
| `ft_isalpha` | Vérifie si le caractère est une lettre (A-Z ou a-z) |
| `ft_isdigit` | Vérifie si le caractère est un chiffre (0-9) |
| `ft_isalnum` | Vérifie si le caractère est une lettre ou un chiffre |
| `ft_isascii` | Vérifie si le caractère fait partie du jeu ASCII (0–127) |
| `ft_isprint` | Vérifie si le caractère est imprimable (espace inclus) |
| `ft_toupper` | Convertit une lettre minuscule en majuscule |
| `ft_tolower` | Convertit une lettre majuscule en minuscule |

> Pour ces fonctions, la valeur de retour est `1` si le test est positif, `0` sinon.

### Manipulation de chaînes & mémoire

| Fonction | Description |
|----------|-------------|
| `ft_strlen` | Calcule la longueur d'une chaîne (sans le `\0` final) |
| `ft_memset` | Remplit les n premiers octets d'une zone mémoire avec une valeur constante |
| `ft_bzero` | Met à zéro une zone mémoire (remplit avec `\0`) |
| `ft_memcpy` | Copie n octets d'une zone vers une autre (zones non chevauchantes) |
| `ft_memmove` | Identique à `memcpy` mais gère le chevauchement des zones |
| `ft_strlcpy` | Copie sécurisée d'une chaîne avec garantie de terminaison `\0` |
| `ft_strlcat` | Concaténation sécurisée avec protection contre le débordement |
| `ft_strchr` | Cherche la première occurrence d'un caractère dans une chaîne |
| `ft_strrchr` | Cherche la dernière occurrence d'un caractère dans une chaîne |
| `ft_strncmp` | Compare deux chaînes sur au maximum n octets |
| `ft_memchr` | Cherche un octet dans les n premiers octets d'une zone mémoire |
| `ft_memcmp` | Compare deux zones mémoire octet par octet |
| `ft_strnstr` | Cherche une sous-chaîne dans une autre, limité à n caractères |
| `ft_atoi` | Convertit une chaîne représentant un nombre en `int` |

### Allocation mémoire

| Fonction | Description |
|----------|-------------|
| `ft_calloc` | Alloue un tableau initialisé à zéro ; retourne un pointeur libérable même si taille = 0 |
| `ft_strdup` | Crée une copie d'une chaîne dans une nouvelle zone mémoire allouée |

---

## Partie 2 - Fonctions supplémentaires

| Fonction | Description |
|----------|-------------|
| `ft_substr` | Extrait une sous-chaîne à partir d'un index et d'une longueur max |
| `ft_strjoin` | Concatène deux chaînes dans une nouvelle zone mémoire |
| `ft_strtrim` | Supprime les caractères d'un set en début et fin de chaîne |
| `ft_split` | Découpe une chaîne en tableau selon un délimiteur, terminé par `NULL` |
| `ft_itoa` | Convertit un entier (y compris négatif) en chaîne de caractères |
| `ft_strmapi` | Crée une nouvelle chaîne en appliquant une fonction à chaque caractère |
| `ft_striteri` | Applique une fonction en place sur chaque caractère via son adresse |
| `ft_putchar_fd` | Écrit un caractère sur un descripteur de fichier |
| `ft_putstr_fd` | Écrit une chaîne sur un descripteur de fichier |
| `ft_putendl_fd` | Écrit une chaîne suivie d'un retour à la ligne sur un descripteur de fichier |
| `ft_putnbr_fd` | Écrit un entier sur un descripteur de fichier |

---

## Partie 3 - Listes chaînées (bonus)

| Fonction | Description |
|----------|-------------|
| `ft_lstnew` | Crée un nouveau maillon avec `content` initialisé et `next = NULL` |
| `ft_lstadd_front` | Ajoute un maillon en tête de liste |
| `ft_lstadd_back` | Ajoute un maillon en queue de liste |
| `ft_lstsize` | Retourne le nombre total de maillons |
| `ft_lstlast` | Retourne un pointeur vers le dernier maillon |
| `ft_lstdelone` | Libère un maillon via `del`, sans toucher au reste de la liste |
| `ft_lstclear` | Supprime et libère un maillon et tous ses successeurs ; met le pointeur à `NULL` |
| `ft_lstiter` | Applique une fonction au contenu de chaque maillon |
| `ft_lstmap` | Crée une nouvelle liste transformée par `f`, avec nettoyage complet en cas d'échec |

---

## - Resources

- Man pages de la libc
- 

**Utilisation de l'IA** :  
Tâches effectuées : débogage, génération de texte, traduction, explication.  
Parties concernées : README, Makefile, `libft.h`, quelques fonctions (explications de ce que la fonction demande de faire).

---

*— ROPHAM · École 42*





<br><br><br><br>
<br><br><br><br>
<br><br><br><br>



# Libft (EN)

> *This activity was created as part of the 42 program by ROPHAM*

---

## Description

This project involves coding a C library grouping general-purpose functions that my future programs will rely on. The goal is to deepen the understanding of the standard libc functions by recoding them from scratch, in order to learn how to use them effectively in future school projects.

The library is divided into three main parts:

- **Part 1 (Libc Functions)**: Recoding of the standard libc functions.
- **Part 2 (Additional functions)**: Extra functions not present in the libc or available in a different form.
- **Part 3 (Linked List)**: Functions for manipulating linked lists.

---

## Instructions

### Compilation

The project uses a Makefile placed at the root of the GIT repository.  
To compile the library, use the following command:

```bash
make
```

This will generate the archive file `libft.a` at the root.

The available rules are:

| Rule | Description |
|------|-------------|
| `all` | Compiles source files and creates the library |
| `clean` | Removes object files |
| `fclean` | Removes object files and the `libft.a` library |
| `re` | Performs a full recompilation (`fclean` + `all`) |
| `$(NAME)` | Main rule for creating the archive |

---

### Usage

To use this library in another C project, include the header file:

```c
#include "libft.h"
```

---

## Library Technical Details

The library includes several categories of functions:

- **Memory management**: `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`, `strdup`
- **String manipulation**: `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`
- **Character tests**: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`
- **Conversion and transformation**: `atoi`, `itoa`, `strmapi`, `striteri`
- **Output to file descriptor**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Linked lists**: Functions to create, add, delete and iterate over elements of type `t_list`

---

## Functions

### Part 1 — Libc Functions

For these functions, the return value must be `1` if the test is positive, and `0` otherwise.

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if the character is a letter (A-Z or a-z) |
| `ft_isdigit` | Checks if the character is a digit (0-9) |
| `ft_isalnum` | Checks if the character is a letter or a digit |
| `ft_isascii` | Checks if the character belongs to the ASCII set (0 to 127) |
| `ft_isprint` | Checks if the character is printable (including space) |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |

#### String and memory manipulation

| Function | Description |
|----------|-------------|
| `ft_strlen` | Computes the length of a string (not counting the null terminator) |
| `ft_memset` | Fills the first n bytes of a memory area with a constant value |
| `ft_bzero` | Zeros out a memory area (fills with `\0`) |
| `ft_memcpy` | Copies n bytes from a source area to a destination area. Note: areas must not overlap |
| `ft_memmove` | Same as `memcpy` but safely handles overlapping source and destination areas |
| `ft_strlcpy` / `ft_strlcat` | Safe versions for copying/concatenating strings, guaranteeing `\0` termination and avoiding buffer overflows |
| `ft_strchr` / `ft_strrchr` | Searches for a character in a string (first and last occurrence respectively) |
| `ft_strncmp` | Compares two strings up to a maximum of n bytes |
| `ft_memchr` | Searches for a specific byte in the first n bytes of a memory area |
| `ft_memcmp` | Compares two memory areas byte by byte |
| `ft_strnstr` | Searches for a substring within another, stopping after n characters examined |
| `ft_atoi` | Converts a string representing a number into an `int` |

#### Functions with allocation (malloc)

| Function | Description |
|----------|-------------|
| `ft_calloc` | Allocates memory for an array and initializes it to zero. Special rule: if size or count is 0, it must return a unique pointer freeable by `free()` |
| `ft_strdup` | Creates a copy of a string in a newly allocated memory area |

---

### Part 2 — Additional Functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Creates a new string from a segment of an existing string (start index and max length) |
| `ft_strjoin` | Creates a new string resulting from the concatenation of two strings (s1 + s2) |
| `ft_strtrim` | Removes all characters present in a reference set from the beginning and end of string s1 |
| `ft_split` | Splits a string into an array of strings (`char **`) using a delimiter character. The array must end with a `NULL` pointer |
| `ft_itoa` | Converts an `int` into a string. Must handle negative numbers |
| `ft_strmapi` | Creates a new string by applying a function `f` to each character of the original string |
| `ft_striteri` | Applies function `f` directly on each character of the given string, using its address to modify it if needed |
| `ft_putchar_fd` / `ft_putstr_fd` / `ft_putendl_fd` / `ft_putnbr_fd` | Write functions (character, string, string with newline, or number) to a specific file descriptor (fd) instead of standard output only |

---

### Part 3 — Bonus Functions (Linked Lists)

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new node. Content is initialized with the provided parameter and `next` is set to `NULL` |
| `ft_lstadd_front` / `ft_lstadd_back` | Adds an existing node respectively at the very beginning or the very end of the list |
| `ft_lstsize` | Counts and returns the total number of nodes in the list |
| `ft_lstlast` | Traverses the list to return a pointer to the last element |
| `ft_lstdelone` | Deletes a node: frees the content via a `del` function passed as parameter, then frees the node itself without touching the rest of the list |
| `ft_lstclear` | Deletes and frees a given node and all its successors. At the end, the list pointer must be set to `NULL` |
| `ft_lstiter` | Iterates through the list and applies function `f` to the content of each node |
| `ft_lstmap` | Creates a new list by applying `f` to the content of each node of the original list. If an allocation fails along the way, the `del` function must be used to clean everything up properly |

---

## Resources

### References

- libc man pages (Linux/BSD)
- Official 42 Norm documentation

### AI Usage

In accordance with the activity instructions:

- **Tasks performed**: Debugging, Text generation, Translation, Explanation.
- **Parts concerned**: README, Makefile, `libft.h`, some functions (explanations of the requested exercise).