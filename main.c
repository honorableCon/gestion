#include <stdio.h>
#include <stdlib.h>
#include "menu/menu.h"

int main(int argc, char*argv[]){
    int option;

    if (argc!=2)
    {
        printf("%s : invalide argument \n", argv[0]);

        return EXIT_FAILURE;
    }
    mainMenu(argv[1]);

    return 0;
}