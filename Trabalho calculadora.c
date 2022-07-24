#include <stdio.h>
void main()
{
    int opcao, i, x1, x2, r; //*não deu certo com x1 e x2 real
    do{ // A estrutura adequada é o do-while, para executar direto
    printf("===================\n");
    printf("Menu:");
    printf("\n0 - Sair\n1 - Adicao\n2 - Subtracao");
    printf("\n3 - Multiplicacao\n4 - Divisao\n");
    printf("5 - Potenciacao\n");
    printf("\nDigite uma opcao: ");
    scanf("%d", &opcao);
    if(opcao != 0) //Solicita os operados se não for selecionado o 0
    {
        printf("\nInsira os dois operandos:\n");
        printf("Insira x1:");
        scanf("%d", &x1);
        printf("Insira x2:");
        scanf("%d", &x2);
    }
    switch(opcao)
    {
        case 0:
            printf("\nAdeus.");
            break;
        case 1:
            printf("\nA soma %d + %d = %d\n\n", x1, x2, x1 + x2);
            break;
        case 2:
            printf("\nA subtração %d - %d = %d\n\n", x1, x2, x1 - x2);
            break;
        case 3:
            printf("\nO produto %d * %d = %d\n\n", x1, x2, x1 * x2);
            break;
        case 4:
            printf("\nA divisao %d / %d = %g\n\n", x1, x2, (float) x1 / x2);
            break;
        case 5:
            r = 1;
            for(i = 1; i <= x2; i++)
            {
                r = r * x1;
            }
            printf("\nA potencia %d ^ %d = %d\n\n", x1, x2, r);
            break;
        default:
            printf("\nOpcao invalida\n\n");
    }
    }while(opcao != 0);
}
