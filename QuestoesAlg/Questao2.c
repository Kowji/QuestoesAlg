#include <stdio.h>

main()
{
    int laranja;
    float preco, precoTotal;

    printf("Digite o numero de larajnas compradas: ");
    scanf("%d", &laranja);

    if (laranja < 12)
    {
        preco = 0.35;
    }
    else if (laranja >= 12)
    {
        preco = 0.30;
    }

   precoTotal = laranja * preco;

   printf("%f",precoTotal);
}
