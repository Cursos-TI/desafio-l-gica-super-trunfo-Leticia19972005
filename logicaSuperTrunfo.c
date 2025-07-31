#include <stdio.h>

int main() {
    char E1, E2;
    char CO1 [5], CO2 [5], pa1 [40], pa2[40];
    char C1 [40], C2 [40];
    unsigned long int P1, P2;
    int T1, T2, OP;
    float A1, A2, PIB1, PIB2, DP1, DP2;

    printf("Cadastramento de cartas!\n");

    printf("\nInsira os dados das cartas 1 e 2:\n");
    printf("\nEstado ('A' a 'H'):\n");
    printf("Carta 1:");
    scanf(" %c", &E1);
    printf("Carta 2:");
    scanf(" %c", &E2);

    printf("Código (Estado + 01 a 04.Ex:B03):\n");
    printf("Carta 1:");
    scanf(" %s", CO1);
    printf("Carta 2:");
    scanf(" %s", CO2);

    printf("Nome do país:\n");
    while(getchar() != '\n');
    printf("Carta 1:");
    fgets(pa1,40,stdin);
    pa1[strcspn(pa1, "\n")];
    printf("Carta 2:");
    fgets(pa2,40,stdin);
    pa2[strcspn(pa2, "\n")];

    printf("Nome da cidade:\n");
    printf("Carta 1:");
    fgets(C1,40,stdin);
    printf("Carta 2:");
    fgets(C2,40,stdin);

    printf("Número de habitantes da cidade:\n");
    printf("Carta 1:");
    scanf(" %lu", &P1);
    printf("Carta 2:");
    scanf(" %lu", &P2);

    printf("Área(Km²) da cidade:\n");
    printf("Carta 1:");
    scanf(" %f", &A1);
    printf("Carta 2:");
    scanf(" %f", &A2);

    printf("PIB da cidade:\n");
    printf("Carta 1:");
    scanf("%f", &PIB1);
    printf("Carta 2:");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turísticos na cidade:\n");
    printf("Carta 1:");
    scanf("%d", &T1);
    printf("Carta 2:");
    scanf("%d", &T2);

    DP1 = (float) P1/A1;
    DP2 = (float) P2/A2;

    printf("\nComparação de cartas:\n");
    printf("1.População.\n");
    printf("2.Área.\n");
    printf("3.PIB.\n");
    printf("4.Pontos turísticos.\n");
    printf("5.Densidade.\n");
    printf("Escolha o atributo a ser comparado:\n");
    scanf("%d", &OP);

    switch (OP) {
        case 1:
        printf("%s VS %s", pa1, pa2);
        printf("Atributo selecionado:População.\n");
        printf("Carta 1:%lu.  Carta 2:%lu\n", P1, P2);
            if (P1>P2) {
            printf("Carta 1 venceu!");
        } else if (P2>P1) {
            printf("Carta 2 venceu!");
        } else {
            printf("Empate!");
        }
        break;
        case 2:
        printf("%s VS %s", pa1, pa2);
        printf("Atributo selecionado:Área.\n");
        printf("Carta 1:%.2f.  Carta 2:%.2f\n", A1, A2);
            if (A1>A2) {
            printf("Carta 1 venceu!");
        } else if (A2>A1) {
            printf("Carta 2 venceu!");
        } else {
            printf("Empate!");
        }
        break;
        case 3:
        printf("%s VS %s", pa1, pa2);
        printf("Atributo selecionado:PIB.\n");
        printf("Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
            if (PIB1>PIB2) {
            printf("Carta 1 venceu!");
        } else if (PIB2>PIB1) {
            printf("Carta 2 venceu!");
        } else {
            printf("Empate!");
        }
        break;
        case 4:
        printf("%s VS %s", pa1, pa2);
        printf("Atributo selecionado:Pontos Turísticos.\n");
        printf("Carta 1:%d.  Carta 2:%.d\n", T1, T2);
            if (T1>T2) {
            printf("Carta 1 venceu!");
        } else if (T2>T1) {
            printf("Carta 2 venceu!");
        } else {
            printf("Empate!");
        }
        break;
        case 5:
        printf("%s VS %s", pa1, pa2);
        printf("Atributo selecionado:Densidade Populacional.\n");
        printf("Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
            if (DP1>DP2) {
            printf("Carta 2 venceu!");
        } else if (DP2>DP1) {
            printf("Carta 1 venceu!");
        } else {
            printf("Empate!");
        }
        break;
        default:
            printf("Opção inválida!");
        break;
    }
    return 0;
}