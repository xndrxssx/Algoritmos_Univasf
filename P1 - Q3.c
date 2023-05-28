#include <stdio.h>

int main()
{
    /*apenas para fim de teste real, usaremos notas de dois alunos*/
    int matriz [100][2];
    int faltas, N1, N2, N3, NF, indice, MaiorNota, MenorNota, Media=0, faltosos=0, reprovado=0, matricula=0, menu;

    for(indice=0;indice<100; indice++)/* guardando a media das notas na coluna 1*/
    {
        /* guardando os numeros das matriculas na coluna 0 */
        printf("\nSua matricula eh a: ");
        scanf("%d", &matriz[indice][0]);

        /* calculo da media individual*/
        printf("\nDigite a 1 nota do aluno: ");
        scanf("%d", &N1);
        printf("\nDigite a 2 nota do aluno: ");
        scanf("%d", &N2);
        printf("\nDigite a 3 nota do aluno: ");
        scanf("%d", &N3);
        NF=(N1+N2+N3)/3;
        matriz[indice][1]=NF+matriz[indice][1];

        printf("\nA media do aluno foi: %d", NF);

        /* a primeira nota sera a maior ate entao*/
        if(indice==0)
        {
            MaiorNota=NF;
            MenorNota=NF;
        }
            /*verificar e guardar as maiores e menores notas*/
            if (NF>=MaiorNota){
                    MaiorNota=NF;
                    }
            if (NF<=MenorNota){
                    MenorNota=NF;
                    }
            /* calculo da media de todas as notas*/
            Media=Media+matriz[indice][1];
            Media=Media/100;

        /* calculo da aprova�ao por frequencia, coluna 2 */
        printf("\nDigite o numero de faltas: ");
        scanf("%d",&matriz[indice][1]);

        if (NF>=60){
            if (matriz[indice][1]>40)
            printf("\nAprovado com frequencia positiva");
                else{
                printf("\nReprovado");
                faltosos=faltosos+1; }/*computando o numero de reprovados por falta*/

            }
            else {printf("\nReprovado");}
            reprovado=reprovado+1;
            }

        printf("\nAgora escolha o que deseja:\n1 para a nota final de cada aluno\n2 para a maior e a menor nota da turma\n3 para media da turma\n4 total de alunos reprovados\n5 a porcentagem de reprovados por frequencia \n->");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            for(indice=0;indice<100;indice++)
                printf("A %d� media: [%d][%d]", indice, matriz[indice][1], 1);
                break;
        case 2:
            printf("A maior nota da turma foi %d , a menor nota da turma foi %d", MaiorNota, MenorNota);
            break;
        case 3:
            printf("A media da turma eh %d", Media);
            break;
        case 4:
            printf("Total de alunos reprovados eh %d", reprovado);
            break;
        case 5:
            printf("%.2f%% dos alunos foram reprovados por falta", (float)(faltosos*100)/100); /*o calculo da porcentagem em rela��o ao montante de alunos*/
            break;

            default:
            printf("Opcao invalida");
            break;}




}
