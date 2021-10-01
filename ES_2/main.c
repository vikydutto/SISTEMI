#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define MATERIE 3
#define VOTI 10
#define CLASSE 20
/*Definire una struttura per memorizzare i dati degli studenti di una classe e dei voti nelle
varie discipline: Italiano, Matematica e Informatica.
Si scriva una funzione in C che, a partire da una vettore di studenti finito come argomento , determini
la disciplina che ha la media più alta.*/

int caricaClasse(float classe[][VOTI]){
    int k;
    int q;
    int mat = 0;


    for(k = 0; k < CLASSE; k++){
        printf("Inserisci il nome: ");
        scanf("%s", classe[k].nome);
        for(q = 0; q < VOTI; q++){
            printf("Inserisci il voto di mate: ");
            scanf("%.2f", &classe[k].voti[mat][q]);
        }
        mat++;
    }

}

typedef struct{
    char nome[MAX];
    float voti[MATERIE][VOTI];
}Studente;

int main(){
    Studente classe[CLASSE];
    int nStud = 0;


    n = caricaClasse(classe);






    return 0;
}
