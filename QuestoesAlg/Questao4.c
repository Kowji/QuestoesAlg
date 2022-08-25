#include <stdio.h>

main()
{
    int plano;
    float aumento,novoSalario,salario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite seu plano: ");
    scanf("%d", &plano);

    switch(plano)
    {
        case 1:
            aumento = 0.10;
            break;
        case 2:
            aumento = 0.15;
            break;
        case 3:
            aumento = 0.20;
            break;
    }

    novoSalario = salario * aumento;

    printf("Seu novo salario sera de:  %f", novoSalario);

}
