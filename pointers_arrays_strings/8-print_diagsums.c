    Fonction SommeDiagonalePrincipale(matrice : tableau [1..N, 1..N] de Entier) : Entier
                Variables
                    somme : Entier
                Début
                    somme ← 0
                    Pour i de 1 à N Faire
                        somme ← somme + matrice[i, i]
                    Fin Pour
                    Retourner somme
                Fin
            Fin Fonction