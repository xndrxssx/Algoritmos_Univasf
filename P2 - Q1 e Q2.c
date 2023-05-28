#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2

/*QUEST�O 1*/

typedef struct carros{
    char proprietario[40], combustivel[9], modelo[15], cor[10], placa[8], chassi[18];
    int ano;
} CAR;

int main (){
    int i;
    CAR carros[N];


    for (i=0; i<N; i++){
        if(carros[i].ano>=1980)
            if (!(strcmp(carros[i].combustivel,"diesel")))
                printf("\n---------- Registro %d -----------\n\n\n", i+1);
                printf("\nProprietario: %s",carros[i].proprietario);
                printf("\nCombustivel: %s",carros[i].combustivel);
                printf("\nModelo: %s",carros[i].modelo);
                printf("\nCor: %s",carros[i].cor);
                printf("\nChassi: %s",carros[i].chassi);
                printf("\nAno: %d",carros[i].ano);
                printf("\nPlaca: %s",carros[i].placa);
}
    for (i=0; i<N; i++){
        if (soma(carros[i].placa)==1)
            printf("\nProprietario: %s",carros[i].proprietario);
            printf("\nModelo: %s",carros[i].modelo);
            printf("\nCor: %s",carros[i].cor);
            printf("\nPlaca: %s",carros[i].placa);
    }
}

/*QUEST�O 2*/
int soma (int a){
    int i,j, somaplaca;
    CAR carros[N];

    for (i=0; i<N; i++)
        somaplaca=carros[i].placa[3] + carros[i].placa[4] + carros[i].placa[5] + carros[i].placa[6];
        for (j=0; j<6; i++){
            if(carros[i].placa[1]=='A', 'E', 'I', 'O', 'U')
                if (somaplaca%2 == 0)
                    return 1;
                    else
                        return 0;
        }


}
