#include <stdio.h>
#include <math.h>

main()
{
    int CON, D;
    float ACM, T;

    ACM=0;
    CON=0;
    D=1;

    while (CON<=51)
    {
        T=(1/(float)pow((D),3));
        ACM=ACM+T;
        CON=CON+1;
        D=D+2;
    }

    printf("A soma dos primeiros 51 numeros da serie eh: %f", ACM);
    return 0;

}
