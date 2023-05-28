#include <stdio.h>
#include <math.h>

int main (){
    int indice;
    float vetor[3];
    float soma=0, media=0;


    for (indice=0;indice<3; indice++)
        {
            printf("Digite a primeira altura: ");
            scanf("%f", &vetor[indice]);
            soma=soma+vetor[indice];
        }

    for (media=soma/3, indice=0, soma=0; indice <3; indice++)
        {
            soma=soma+(float)(pow((vetor[indice] - media),2));
        }

        soma=(float)(sqrt((1*soma/3)));

        printf ("O valor do desvio padrao eh: %.5f", soma);

        /* teste 1.66 1.69 1.44 o desvio padr�o deve ser 0.11145*/

}
