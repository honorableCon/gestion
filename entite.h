



typedef enum {
    Licence=1, 
    Master, 
    Doctorat
} Niveau;

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    int numero;
    char nom[20];
    char prenom[20];
    char email[20];
    Date date_de_naissance;
    int code;
} Etudiant;

typedef struct {
    int code;
    char nom[20];
    int niveau;
} Classe;

typedef struct {
    int reference;
    char libelle[20];
    short coef;
} Matiere;

typedef struct {
    char classeMatiere[20];
    double noteCC;
    double noteDS;
} EtreNote;