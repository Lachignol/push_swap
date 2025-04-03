# push_swap

## Description
Le projet **push_swap** de l'école 42 consiste à trier une liste d'entiers en utilisant deux piles : la pile A et la pile B. L'objectif est de minimiser le nombre d'instructions nécessaires pour effectuer le tri. Ce projet met en pratique les algorithmes de tri avancés et l'optimisation des opérations.

---

## Fonctionnalités

### Règles et Instructions
Le programme utilise les instructions suivantes pour manipuler les piles A et B :
| Code  | Instruction                  | Action                                                                 |
|-------|------------------------------|------------------------------------------------------------------------|
| `sa`  | swap a                       | Échange les deux premiers éléments de la pile A.                       |
| `sb`  | swap b                       | Échange les deux premiers éléments de la pile B.                       |
| `ss`  | swap a + swap b              | Effectue `sa` et `sb` simultanément.                                   |
| `pa`  | push a                       | Prend le premier élément de B et le place sur A.                       |
| `pb`  | push b                       | Prend le premier élément de A et le place sur B.                       |
| `ra`  | rotate a                     | Décale tous les éléments de A vers le haut (le premier devient dernier).|
| `rb`  | rotate b                     | Décale tous les éléments de B vers le haut (le premier devient dernier).|
| `rr`  | rotate a + rotate b          | Effectue `ra` et `rb` simultanément.                                   |
| `rra` | reverse rotate a             | Décale tous les éléments de A vers le bas (le dernier devient premier). |
| `rrb` | reverse rotate b             | Décale tous les éléments de B vers le bas (le dernier devient premier). |
| `rrr` | reverse rotate a + reverse b | Effectue `rra` et `rrb` simultanément.                                 |

---

## Algorithme : Méthode de Turk
L'algorithme utilisé dans ce projet se divise en deux étapes principales :

1. **Pré-tri dans la pile B** :
   - Les éléments sont classés dans B selon leur valeur relative (médiane).
   - Les rotations et push sont utilisés pour organiser les éléments dans un ordre décroissant approximatif.
   - La pile A est réduite à trois éléments avant la seconde étape.

2. **Tri final dans la pile A** :
   - Les éléments de B sont transférés dans A en minimisant le coût des instructions nécessaires.
   - Chaque élément est placé dans une position optimale pour garantir un ordre croissant.
   - Des rotations finales sont effectuées pour obtenir une pile complètement triée.

---

## Installation et Compilation
Clonez le projet depuis GitHub et compilez-le avec `make` :

git clone <URL_du_projet> 

cd push_swap 

make

---

## Utilisation
Exécutez le programme avec une liste d'entiers :
./push_swap <liste_d_entiers>
Exemple :
```
./push_swap 4 67 -3 87 23
```
```
./push_swap "4 67 -3 87 23"
```
