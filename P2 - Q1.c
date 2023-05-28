#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define C 2



typedef struct cheque{
    char ncq[8], ag[6], cc[8], dv[2], nome[60];
    float valor;
} CHEQ;

void cadcheque (){

    int i;
    CHEQ cheque[C];

    for (i=0; i<C; i++){
            printf("\n---------- Cheques %d -----------\n\n\n", i+1);
            printf("\nNumero do cheque: ");
            scanf("%s", cheque[i].ncq);
                if (cheque[i].ncq[0]=='0')
                    exit (0);
            printf("\nAgencia: ");
            scanf("%s", cheque[i].ag);
            printf("\nNumero da conta corrente: ");
            scanf("%s", cheque[i].cc);
            printf("\nDV: ");
            scanf("%s", cheque[i].dv);
            printf("\nNome: ");
            scanf("%s", cheque[i].nome);
            printf("\nValor: ");
            scanf("%f", cheque[i].valor);
            fflush(stdin);
    }

}
int soma(){
	int i;
	float s=0;
	CHEQ cheque [C];

	for(i=0;i<C;i--){
		s+=cheque[i].valor;
	}

	return s;
}
int main(){

	int opcao;
	START:
		printf("(1) CADASTRAR CHEQUES\n");
        printf("(2) SOMAR VALORES\n");
        printf("ESCOLHA UMA OPCAO: ");
		scanf("%d",&opcao);
		switch(opcao)
		{
			case 1:
			 	cadcheque();
			break;
			case 2:
				printf("%d",soma());
			break;
			case 3:
				goto START;
		}
}
