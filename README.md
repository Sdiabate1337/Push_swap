
# Push_swap

Ce projet vous demande de trier des données dans une pile, en utilisant un set
d’instructions limité, et avec le moins d’opérations possibles. Pour le réussir, vous
devrez manipuler différents algorithmes de tri et choisir la (ou les ?) solution la plus
appropriée pour un classement optimisé des données.

### Les regles
* Le jeu est constitué de 2 piles nommées a et b.
* Au départ :
    * La pile a contient une quantité aléatoire de négatif et/ou des nombres positifs
        qui ne peuvent pas être dupliqués.
    * La pile b est vide.
* Le but du jeu est de trier les nombres de la pile a par ordre croissant. Pour ce faire, vous disposez des instructions suivantes :
        
        sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
        Ne fait rien s’il n’y en a qu’un ou aucun.
        
        sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
        Ne fait rien s’il n’y en a qu’un ou aucun.
        
        ss : sa et sb en même temps.
        pa (push a) : Prend le premier élément au sommet de b et le met sur a.
        Ne fait rien si b est vide.
        
        pb (push b) : Prend le premier élément au sommet de a et le met sur b.
        Ne fait rien si a est vide.
        
        ra (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
        Le premier élément devient le dernier.
        
        rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
        Le premier élément devient le dernier.
        
        rr : ra et rb en même temps.
        
        rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
        la pile a. Le dernier élément devient le premier.
        
        rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de
        la pile b. Le dernier élément devient le premier.
        
        rrr : rra et rrb en même temps.
