#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 100

int vetor[TAM];

int main(){
    int *p;
    p = vetor;
    memset(vetor, 100, sizeof(vetor));
    valores(p);
    soma(p);
    media(p);
    substituirPorZero(p);
    return 0;
}

int valores(int *p){
    int i;
    for(i = 0; i < TAM ;++p,++i){
        printf("%d",*p);
    }
    return 0;
}

int soma(int *p){
    int i,soma = 0;
    for(i = 0; i < TAM ;++p,++i){
        soma = soma + *p;
    }
    return soma;
}

int media(int *p){
    int i,soma = 0;
    float media;
    for(i = 0; i < TAM ;++p,++i){
        soma = soma + *p;
    }
    media = soma / TAM;
    return soma;
}

int substituirPorZero(int *p){
    int i,j,aux,*num;
    for(i = 0;i < TAM ;++p,++i){
        for(aux = 1,j = 0,num = p + 1; j < (TAM - aux) ;++j,++num){
            if(*num > 0){
                }
            }
        }
    }
