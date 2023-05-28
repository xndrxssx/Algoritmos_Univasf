#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int dobro(int d){
    return d*2;
}

int antecessor(int a){
    return a-1;
}

int sucessor(int s){
    return s+1;
}

char vogal(char letra){
        if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
            printf("V\n");
        else
            printf("F\n");
}

int main (){
    int n;
    char letra;

    printf("\n---------- Digite o numero e a vogal -----------\n\n");
    scanf("%d %c", &n, &letra);

    printf("\n1 - O dobro do numero: %d\n",dobro(n));
    printf("\n2 - O antecessor do numero: %d\n",antecessor(n));
    printf("\n3 - O sucessor do numero: %d\n",sucessor(n));
    printf("\n4 - Se eh vogal: %c\n",vogal(letra));

    return 0;

}



