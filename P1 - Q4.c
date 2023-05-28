#include <stdio.h>

int main ()
{
    int tabela [4][6];
    char nomes [4][11];
    int Maior96, m, n, ano=0;

    for(m=0; m<4; m++){
        printf("Digite o nome do fabricante %d: ", m);
        scanf("%s", &nomes[m]);
        setbuf(stdin,NULL);

    for (n=1; n<=6; n++){
        printf("Digite o valor de vendas do ano: ");
        scanf("%d", &tabela[m][n]);
        setbuf(stdin,NULL);

        }
    }

    for (m=0; m<4; m++){
        for (n=0; n<6; n++){
            printf("Digite");
            printf("%d", tabela[m][n]);
        }
    }

    for(m=0;m<4;m++){
     if (m==0){
        Maior96=tabela[m][3];
     if(tabela[m][3]>Maior96);
        Maior96=tabela[m][3];
}
    printf("A maior venda de 1996 foi %d", Maior96);
}
