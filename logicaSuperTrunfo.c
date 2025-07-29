#include <stdio.h>

int main() {
    char E1, E2;
    char CO1 [5], CO2 [5];
    char C1 [4], C2 [4];
    unsigned int P1, P2;
    int T1, T2;
    float A1, A2, PIB1, PIB2, DP1, DP2, PP1, PP2, SP1,SP2;

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

    printf("Nome da cidade(Sigla. Ex:RJ):\n");
    printf("Carta 1:");
    scanf("%s", C1);
    printf("Carta 2:");
    scanf("%s", C2);

    printf("Número de habitantes da cidade:\n");
    printf("Carta 1:");
    scanf(" %d", &P1);
    printf("Carta 2:");
    scanf(" %d", &P2);

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
    PP1 = (float) (PIB1 * 1000000000.0f)/P1;
    PP2 = (float) (PIB2 * 1000000000.0f)/P2;
    SP1 = (float) (P1+A1+PIB1+T1+PP1+(1.0L/DP1));
    SP2 = (float) (P2+A2+PIB2+T2+PP2+(1.0L/DP2));

    printf("\nCarta 1:\n");
    printf("Estado:%c\n", E1);
    printf("Código:%s\n", CO1);
    printf("Cidade:%s\n", C1);
    printf("População:%d\n", P1);
    printf("Área(Km²):%.2f\n", A1);
    printf("PIB:%.2f\n", PIB1);
    printf("Número de pontos turísticos:%d\n", T1);
    printf("Densidade populacional:%.2f\n", DP1);
    printf("PIB per Capita:R$%.2f\n", PP1);

    printf("\nCarta 2:\n");
    printf("Estado:%c\n", E2);
    printf("Código:%s\n", CO2);
    printf("Cidade:%s\n", C2);
    printf("População:%d\n", P2);
    printf("Área(Km²):%.2f\n", A2);
    printf("PIB:%.2f\n", PIB2);
    printf("Número de pontos turísticos:%d\n", T2);
    printf("Densidade populacional:%.2f\n", DP2);
    printf("PIB per Capita:R$%.2f\n", PP2);

    printf("\nComparação de cartas: (Atributo população)\n");
    printf("Carta 1:%u\n", P1);
    printf("Carta 1:%u\n", P2);
    if (P1>P2) { //Caso a carta 1 tenha uma população maior que a carta 2, aparecerá a mensagem "População: Carta 1 venceu."
        printf("População: Carta 1 venceu.\n");
    } else {
        printf("População: Carta 2 venceu.\n");//Caso a carta 2 tenha população maior que a carta 1 aparecerá a mensagem "População: Carta 2 venceu."
    }
    return 0;
}