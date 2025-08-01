#include <stdio.h>

int main() {
    char E1, E2;
    char CO1 [5], CO2 [5];
    char C1 [40], C2 [40];
    unsigned long int P1, P2;
    int T1, T2, OP, OP1;
    float A1, A2, PIB1, PIB2, DP1, DP2, PP1, PP2, SP1, SP2;
    int S,S1,S2,S3,S4,S5,S6,S7,S8,S9,S10;

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

    printf("Nome da cidade:\n");
    while(getchar() != '\n');
    printf("Carta 1:");
    fgets(C1,40,stdin);
    C1[strcspn(C1, "\\n")] = 0;
    printf("Carta 2:");
    fgets(C2,40,stdin);
    C2[strcspn(C2, "\\n")] = 0;

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
    PP1 = (float) (PIB1 * 1000000000.0f)/P1;
    PP2 = (float) (PIB2 * 1000000000.0f)/P2;
    SP1 = (float) (P1+A1+PIB1+T1+PP1+(1.0L/DP1));
    SP2 = (float) (P2+A2+PIB2+T2+PP2+(1.0L/DP2));

    printf("\nCarta 1:\n");
    printf("Estado:%c\n", E1);
    printf("Código:%s\n", CO1);
    printf("Cidade:%s\n", C1);
    printf("População:%lu\n", P1);
    printf("Área(Km²):%.2f\n", A1);
    printf("PIB:%.2f\n", PIB1);
    printf("Número de pontos turísticos:%d\n", T1);
    printf("Densidade populacional:%.2f\n", DP1);
    printf("PIB per Capita:R$%.2f\n", PP1);
    printf("Super poder:%.2f\n", SP1);

    printf("\nCarta 2:\n");
    printf("Estado:%c\n", E2);
    printf("Código:%s\n", CO2);
    printf("Cidade:%s\n", C2);
    printf("População:%lu\n", P2);
    printf("Área(Km²):%.2f\n", A2);
    printf("PIB:%.2f\n", PIB2);
    printf("Número de pontos turísticos:%d\n", T2);
    printf("Densidade populacional:%.2f\n", DP2);
    printf("PIB per Capita:R$%.2f\n", PP2);
    printf("Super poder:%.2f\n", SP2);


    printf("\nComparação de cartas:\n");
    printf("1.População.\n");
    printf("2.Área.\n");
    printf("3.PIB.\n");
    printf("4.Pontos turísticos.\n");
    printf("5.Densidade.\n");
    printf("Escolha o primeiro atributo a ser comparado:\n");
    scanf("%d", &OP);

    switch (OP) {
        case 1:
        printf("%sVS%s\n", C1, C2);
        printf("Atributo selecionado:População.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1.Área.\n");
        printf("2.PIB.\n");
        printf("3.Pontos turísticos.\n");
        printf("4.Densidade Populacional.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        scanf("%d", &OP1);
        switch (OP1)
        {
        case 1:
            if ((float)P1+A1 > (float)P2+A2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+A1), (float)(P2+A2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (P2+A2 > P1+A1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", ((float)P1+A1), (float)(P2+A2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 2:
            if ((float)P1+PIB1 > (float)P2+PIB2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+PIB1), (float)(P2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)P2+PIB2 > (float)P1+PIB1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+PIB1), (float)(P2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 3:
            if (P1+T1 > P2+T2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (P1+T1), (P2+T2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (P2+T2 > P1+T1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (P1+T1), (P2+T2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 4:
            if ((float)P1+DP1 > (float)P2+DP2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+DP1), (float)(P2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)P2+DP2 > (float)P1+DP1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+DP1), (float)(P2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        printf("População --- Carta 1:%lu.  Carta 2:%lu\n", P1, P2);
            if (P1>P2) {
            printf("Carta 1 venceu!");
        } else if (P2>P1) {
            printf("Carta 2 venceu!");
        } else {
            printf("Empate!");
        }
        break;
        case 2:
        printf("%sVS%s\n", C1, C2);
        printf("Atributo selecionado:Área.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1.População.\n");
        printf("2.PIB.\n");
        printf("3.Pontos turísticos.\n");
        printf("4.Densidade Populacional.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        scanf("%d", &OP1);
        switch (OP1)
        {
        case 1:
            if ((float)P1+A1 > (float)P2+A2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+A1), (float)(P2+A2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (P2+A2 > P1+A1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+A1), (float)(P2+A2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 2:
            if (A1+PIB1 > A2+PIB2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (A1+PIB1), (A2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)A2+PIB2 > (float)A1+PIB1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (A1+PIB1), (A2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 3:
            if ((float)T1+A1 > (float)T2+A2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+A1), (float)(T2+A2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+A2 > (float)T1+A1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+A1), (float)(T2+A2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 4:
            if (A1+DP1 > A2+DP2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (A1+DP1), (A2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (A2+DP2 > A1+DP1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (A1+DP1), (A2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        
        default:
            printf("Opção inválida!\n");
            break;
        }
        printf("Área ------ Carta 1:%.2f.  Carta 2:%.2f\n", A1, A2);
            if (A1>A2) {
            printf("Carta 1 venceu!");
        } else if (A2>A1) {
            printf("Carta 2 venceu!");
        } else {
            printf("Empate!");
        }
        break;
        case 3:
        printf("%sVS%s\n", C1, C2);
        printf("Atributo selecionado:PIB.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1.População.\n");
        printf("2.Área.\n");
        printf("3.Pontos turísticos.\n");
        printf("4.Densidade Populacional.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        scanf("%d", &OP1);
        switch (OP1)
        {
        case 1:
            if ((float)P1+PIB1 > (float)P2+PIB2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+PIB1), (float)(P2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)P2+PIB2 > (float)P1+PIB1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+PIB1), (float)(P2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 2:
            if (A1+PIB1 > A2+PIB2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (A1+PIB1), (A2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)A2+PIB2 > (float)A1+PIB1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (A1+PIB1), (A2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 3:
            if ((float)T1+PIB1 > (float)T2+PIB2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+PIB1), (float)(T2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+PIB2 > (float)T1+PIB1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+PIB1), (float)(T2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 4:
            if (PIB1+DP1 > PIB2+DP2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (DP1+PIB1), (DP2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (PIB2+DP2 > PIB1+DP1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (DP1+PIB1), (DP2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        printf("PIB-------Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
            if (PIB1>PIB2) {
            printf("Carta 1 venceu!");
        } else if (PIB2>PIB1) {
            printf("Carta 2 venceu!");
        } else {
            printf("Empate!");
        }
        break;
        case 4:
        printf("%sVS%s\n", C1, C2);
        printf("Atributo selecionado:Pontos Turísticos.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1.População.\n");
        printf("2.Área.\n");
        printf("3.PIB.\n");
        printf("4.Densidade Populacional.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        scanf("%d", &OP1);
        switch (OP1)
        {
        case 1:
           if (P1+T1 > P2+T2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (P1+T1), (P2+T2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (P2+T2 > P1+T1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (P1+T1), (P2+T2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 2:
             if ((float)T1+A1 > (float)T2+A2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+A1), (float)(T2+A2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+A2 > (float)T1+A1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+A1), (float)(T2+A2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 3:
            if ((float)T1+PIB1 > (float)T2+PIB2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+PIB1), (float)(T2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+PIB2 > (float)T1+PIB1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+PIB1), (float)(T2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 4:
            if ((float)T1+DP1 > (float)T2+DP2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+DP1), (float)(T2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+DP2 > (float)T1+DP1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+DP1), (float)(T2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        printf("Ponto turístico ------- Carta 1:%d.  Carta 2:%d\n", T1, T2);
            if (T1>T2) {
            printf("Carta 1 venceu!");
        } else if (T2>T1) {
            printf("Carta 2 venceu!");
        } else {
            printf("Empate!");
        }
        break;
        case 5:
        printf("%sVS%s\n", C1, C2);
        printf("Atributo selecionado:Densidade Populacional.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1.População.\n");
        printf("2.Área.\n");
        printf("3.PIB.\n");
        printf("4.Pontos urísticos.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        scanf("%d", &OP1);
        switch (OP1)
        {
        case 1:
           if ((float)P1+DP1 > (float)P2+DP2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+DP1), (float)(P2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)P2+DP2 > (float)P1+DP1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(P1+DP1), (float)(P2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 2:
             if (A1+DP1 > A2+DP2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (A1+DP1), (A2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (A2+DP2 > A1+DP1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (A1+DP1), (A2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 3:
            if (DP1+PIB1 > DP2+PIB2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (DP1+PIB1), (DP2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (DP2+PIB2 > (float)DP1+PIB1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (DP1+PIB1), (DP2+PIB2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 4:
            if ((float)T1+DP1 > (float)T2+DP2) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+DP1), (float)(T2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+DP2 > (float)T1+DP1) {
            printf("Somas: Carta 1-%.2f. Carta 2-%.2f.\n", (float)(T1+DP1), (float)(T2+DP2));
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        printf("Densidade--------Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
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