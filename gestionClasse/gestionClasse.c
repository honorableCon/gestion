#include <stdio.h>
#include <string.h>
#include <stdlib.h>



#include <sys/times.h>
#include "../entite.h"

int ajouterClasse(){
    /*FILE *fptr = fopen("gestionClasse/classe.csv", "a+");
    Classe classe;
    int option;

    printf("Donner le code de la classe : ");
    scanf("%d", &classe.code);

    printf("Donner le nom de la classe : ");
    scanf("%s", classe.nom);

    printf("Quel niveau ? \n");
    printf("\t[1] : License\n\t[2] : Master\n\t[3] : Doctorat\n>> ");
    scanf("%d", &option);
    switch (option){
        case 1:
            classe.niveau = Licence;
            break;
        case 2:
            classe.niveau = Master;
            break;
        case 3:
            classe.niveau = Doctorat;
            break;
        default:
            fclose(fptr);
            return -1;
    }
    fprintf(fptr, "%d;%s;%d\n", classe.code, classe.nom, classe.niveau);

    fclose(fptr);*/
    return 0;
}

int modifierClasse(){
    FILE *fptr = fopen("gestionClasse/classe.csv", "r+");
    Classe classe;
    int code;
    char line[100];

    //printf("Donner le code de la classe : ");
    //scanf("%d", &code);
    code = 324;

    while( fgets(line, 100, fptr) ){
        fpos_t pos;
        line[strlen(line)-1]='\0';
        sscanf(line,"%d;%s;%d\n", &classe.code, classe.nom, &classe.niveau);
        if (code == classe.code){
            //printf("FOUND\n");
            //printf("Donner le nom de la classe : ");
            //scanf("%s", classe.nom);
            //classe.code = 355;
            classe.nom[0] = 'H';
            classe.nom[1] = '4';
            classe.nom[2] = '4';
            //printf("Donner le niveau de la classe : ");
            //scanf("%d", &classe.niveau);
            //classe.niveau = 2;
            fseek(fptr, -(strlen(line)+1), SEEK_CUR);
            //fprintf(fptr, "%d;%s;%d\n", classe.code, classe.nom, classe.niveau);
            fprintf(fptr, "%d;%s\n", classe.code, classe.nom);
            break;
        }
    }
    fclose(fptr);
}

