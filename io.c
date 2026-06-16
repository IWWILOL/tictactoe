void get_user_input( int* row, int* column ){
    printf("\nveuillez saisir l'emplacement de votre thing ?");
    do{
    printf("\n row ?");
    scanf("%i", row);
    *row = *row - 1;
    printf("\n column ?");
    scanf("%i", column);
    *column = *column -1;

    if(*row < 0 || *row >= 3 || *column < 0 || *column >= 3){
    printf("\nessaie encore  ;^l \n");
    }
    }
    while(*row < 0 || *row >= 3 || *column < 0 || *column >= 3);
}