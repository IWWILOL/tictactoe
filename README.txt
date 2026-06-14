PROJET MORPION - ECE Bachelor 1

COMPILATION
gcc main.c board.c game.c io.c log.c -o morpion

MODULES
main.c   : point d'entree
game.c   : boucle principale
board.c  : gestion de la grille
io.c     : saisie et validation
log.c    : historique de la partie

FONCTIONS PRINCIPALES
initBoard, printBoard, checkWin, isFull
playTurn, logMove, displayLog, gameLoop

TESTS
- saisies hors limites
- saisies non numeriques
- case deja occupee
- victoire lignes/colonnes/diagonales
- match nul

DIFFICULTES
- separation en fichiers .h / .c
- ordre des operations dans la boucle (playTurn avant ecoule)