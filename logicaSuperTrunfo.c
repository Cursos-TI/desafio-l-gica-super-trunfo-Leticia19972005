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
        printf("%s VS %s", C1, C2);
        printf("Atributo selecionado:População.\n");
        printf("População --- Carta 1:%lu.  Carta 2:%lu\n", P1, P2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("População= %d\n", (P1>P2)? 1:0);
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
        printf("Atributo selecionado:Área\n");
        printf("Área --- Carta 1:%.2f.  Carta 2:%.2f\n", A1, A2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Área= %d\n", (A1>A2)? 1:0);
        printf("Soma = População + Área\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(A1+P1),(float) (A2+P2));
            if ((float)P1+A1 > (float)P2+A2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (P2+A2 > P1+A1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 2:
        printf("Atributo selecionado: PIB\n");
        printf("PIB --- Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("PIB= %d\n", (PIB1>PIB2)? 1:0);
        printf("Soma = População + PIB\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(P1+PIB1),(float) (P2+PIB2));
            if ((float)P1+PIB1 > (float)P2+PIB2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)P2+PIB2 > (float)P1+PIB1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 3:
        printf("Atributo selecionado:Pontos Turísticos\n");
        printf("Pontos Turísticos --- Carta 1:%d.  Carta 2:%d\n",T1, T2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Pontos Turísticos= %d\n", (T1>T2)? 1:0);
        printf("Soma = População + Pontos Turísticos\n");
        printf("Soma --- Carta 1:%lu.  Carta 2:%lu\n",(T1+P1),(T2+P2));
            if (P1+T1 > P2+T2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (P2+T2 > P1+T1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 4:
        printf("Atributo selecionado:Densidade Populacional\n");
        printf("Densidade Populacional --- Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Densidade Populacional=%d\n", (DP2>DP1)? 1:0);
        printf("Soma = População + Densidade Populacional\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(DP1+P1),(float) (DP2+P2));
            if ((float)P1+DP1 > (float)P2+DP2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)P2+DP2 > (float)P1+DP1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        break;
        case 2:
        printf("%s VS %s", C1, C2);
        printf("Atributo selecionado:Área.\n");
        printf("Área --- Carta 1:%.2f.  Carta 2:%.2f\n", A1, A2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Área= %d\n", (A1>A2)? 1:0);
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
        printf("Atributo selecionado:População.\n");
        printf("População --- Carta 1:%lu.  Carta 2:%lu\n", P1, P2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0");
        printf("População= %d", (P1>P2)? 1:0);
        printf("Soma = Área + População\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(A1+P1),(float) (A2+P2));
            if ((float)P1+A1 > (float)P2+A2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (P2+A2 > P1+A1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 2:
        printf("Atributo selecionado: PIB\n");
        printf("PIB --- Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("PIB= %d\n", (PIB1>PIB2)? 1:0);
        printf("Soma = Área + PIB\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (A1+PIB1),(A2+PIB2));
            if (A1+PIB1 > A2+PIB2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (A2+PIB2 > A1+PIB1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 3:
        printf("Atributo selecionado:Pontos Turísticos\n");
        printf("Pontos Turísticos --- Carta 1:%d.  Carta 2:%d\n",T1, T2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Pontos Turísticos= %d\n", (T1>T2)? 1:0);
        printf("Soma = Área + Pontos Turísticos\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(A1+T1),(float) (A2+T2));
            if ((float)T1+A1 > (float)T2+A2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+A2 > (float)T1+A1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 4:
        printf("Atributo selecionado:Densidade Populacional\n");
        printf("Densidade Populacional --- Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Densidade Populacional=%d\n", (DP2>DP1)? 1:0);
        printf("Soma = Área + Densidade Populacional\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (A1+DP1),(A2+DP2));
            if (A1+DP1 > A2+DP2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (A2+DP2 > A1+DP1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        
        default:
            printf("Opção inválida!\n");
            break;
        }
        break;
        case 3:
        printf("%s VS %s", C1, C2);
        printf("Atributo selecionado: PIB\n");
        printf("PIB --- Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("PIB= %d\n", (PIB1>PIB2)? 1:0);
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
        printf("Atributo selecionado:População.\n");
        printf("População --- Carta 1:%lu.  Carta 2:%lu\n", P1, P2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0");
        printf("População= %d", (P1>P2)? 1:0);
        printf("Soma = PIB + População\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(PIB1+P1),(float) (PIB2+P2));
            if ((float)P1+PIB1 > (float)P2+PIB2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)P2+PIB2 > (float)P1+PIB1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 2:
        printf("Atributo selecionado:Área.\n");
        printf("Área --- Carta 1:%.2f.  Carta 2:%.2f\n", A1, A2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Área= %d\n", (A1>A2)? 1:0);
        printf("Soma = PIB + Área\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (A1+PIB1),(A2+PIB2));
            if (A1+PIB1 > A2+PIB2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)A2+PIB2 > (float)A1+PIB1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 3:
        printf("Atributo selecionado:Pontos Turísticos\n");
        printf("Pontos Turísticos --- Carta 1:%d.  Carta 2:%d\n",T1, T2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Pontos Turísticos= %d\n", (T1>T2)? 1:0);
        printf("Soma = PIB + Pontos Turísticos\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(PIB1+T1),(float) (PIB2+T2));
            if ((float)T1+PIB1 > (float)T2+PIB2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+A2 > (float)T1+A1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 4:
        printf("Atributo selecionado:Densidade Populacional\n");
        printf("Densidade Populacional --- Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Densidade Populacional=%d\n", (DP2>DP1)? 1:0);
        printf("Soma = PIB + Densidade Populacional\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (DP1+PIB1),(DP2+PIB2));
            if (PIB1+DP1 > PIB2+DP2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (A2+DP2 > A1+DP1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        break;
        case 4:
        printf("%s VS %s", C1, C2);
        printf("Atributo selecionado:Pontos Turísticos\n");
        printf("Pontos Turísticos --- Carta 1:%d.  Carta 2:%d\n",T1, T2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Pontos Turísticos= %d\n", (T1>T2)? 1:0);
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
        printf("Atributo selecionado:População.\n");
        printf("População --- Carta 1:%lu.  Carta 2:%lu\n", P1, P2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0");
        printf("População= %d", (P1>P2)? 1:0);
        printf("Soma = Pontos Turísticos + População\n");
        printf("Soma --- Carta 1:%lu.  Carta 2:%lu\n",(T1+P1),(T2+P2));
           if (P1+T1 > P2+T2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (P2+T2 > P1+T1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 2:
        printf("Atributo selecionado:Área.\n");
        printf("Área --- Carta 1:%.2f.  Carta 2:%.2f\n", A1, A2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Área= %d\n", (A1>A2)? 1:0);
        printf("Soma = Pontos Turísticos + Área\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(A1+T1),(float) (A2+T2));
             if ((float)T1+A1 > (float)T2+A2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+A2 > (float)T1+A1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 3:
        printf("Atributo selecionado: PIB\n");
        printf("PIB --- Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("PIB= %d\n", (PIB1>PIB2)? 1:0);
        printf("Soma = Pontos Turísticos + PIB\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(PIB1+T1),(float) (PIB2+T2));
            if ((float)T1+PIB1 > (float)T2+PIB2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+PIB2 > (float)T1+PIB1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 4:
        printf("Atributo selecionado:Densidade Populacional\n");
        printf("Densidade Populacional --- Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Densidade Populacional=%d\n", (DP2>DP1)? 1:0);
        printf("Soma = Pontos Turísticos + Densidade Populacional \n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(DP1+T1),(float) (DP2+T2));
            if ((float)T1+DP1 > (float)T2+DP2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+DP2 > (float)T1+DP1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        break;
        case 5:
        printf("%s VS %s", C1, C2);
        printf("Atributo selecionado:Densidade Populacional\n");
        printf("Densidade Populacional --- Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Densidade Populacional=%d\n", (DP2>DP1)? 1:0);
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
         printf("Atributo selecionado:População.\n");
        printf("População --- Carta 1:%lu.  Carta 2:%lu\n", P1, P2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0");
        printf("População= %d", (P1>P2)? 1:0);
        printf("Soma = Densidade Populacional + População\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(DP1+P1),(float) (DP2+P2));
           if ((float)P1+DP1 > (float)P2+DP2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)P2+DP2 > (float)P1+DP1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 2:
        printf("Atributo selecionado:Área.\n");
        printf("Área --- Carta 1:%.2f.  Carta 2:%.2f\n", A1, A2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Área= %d\n", (A1>A2)? 1:0);
        printf("Soma = Densidade Populacional + Área\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (A1+DP1),(A2+DP2));
             if (A1+DP1 > A2+DP2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (A2+DP2 > A1+DP1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 3:
        printf("Atributo selecionado: PIB\n");
        printf("PIB --- Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("PIB= %d\n", (PIB1>PIB2)? 1:0);
        printf("Soma = Densidade Populacional + PIB\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (DP1+PIB1),(DP2+PIB2));
            if (DP1+PIB1 > DP2+PIB2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if (DP2+A2 > (float)T1+A1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        case 4:
        printf("Atributo selecionado:Pontos Turísticos\n");
        printf("Pontos Turísticos --- Carta 1:%d.  Carta 2:%d\n",T1, T2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Pontos Turísticos= %d\n", (T1>T2)? 1:0);
        printf("Soma = Densidade Populacional + Pontos Turísticos\n");
        printf("Soma --- Carta 1:%.2f.  Carta 2:%.2f\n", (float)(DP1+T1),(float) (DP2+T2));
            if ((float)T1+DP1 > (float)T2+DP2) {
            printf ("Vencedora na soma de atríbutos é carta 1!\n");
            } else if ((float)T2+DP2 > (float)T1+DP1) {
            printf ("Vencedora na soma de atríbutos é carta 2!\n");
            } else {
            printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
        break;
        default:
            printf("Opção inválida!");
        break;
    }
    return 0;
}