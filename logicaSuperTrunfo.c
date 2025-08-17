#include <stdio.h>

int main() {
    char E1, E2;
    char CO1 [5], CO2 [5];
    char C1 [40], C2 [40];
    unsigned long int P1, P2;
    int T1, T2, OP, OP1;
    float A1, A2, PIB1, PIB2, DP1, DP2, PP1, PP2, SP1, SP2;
    int vp = 0, va = 0, vi = 0, vt = 0, vd = 0;

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
    getchar();
    printf("Carta 2:");
    scanf(" %s", CO2);
    getchar();

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
        printf("População= %d", (P1>P2)? 1:0);
        if (P1>P2){vp = 1;}
        else if (P2>P1){vp = 2;}
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
        if (A1>A2) {va = 1;}
        else if (A2>A1){va = 2;}
        printf("\n Resultado: População e Área\n");
        if (vp == 1 && va == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vp==2 && va==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 2:
        printf("Atributo selecionado: PIB\n");
        printf("PIB --- Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("PIB= %d\n", (PIB1>PIB2)? 1:0);
        if (PIB1>PIB2) {vi = 1;}
        else if (PIB2>PIB1){vi = 2;}
        printf("\n Resultado: População e PIB\n");
        if (vp == 1 && vi == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vp==2 && vi==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 3:
        printf("Atributo selecionado:Pontos Turísticos\n");
        printf("Pontos Turísticos --- Carta 1:%d.  Carta 2:%d\n",T1, T2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Pontos Turísticos= %d\n", (T1>T2)? 1:0);
        if (T1>T2) {vt = 1;}
        else if (T2>T1){vt = 2;}
        printf("\n Resultado: População e Pontos Turísticos\n");
        if (vp == 1 && vt == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vp==2 && vt==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 4:
        printf("Atributo selecionado:Densidade Populacional\n");
        printf("Densidade Populacional --- Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Densidade Populacional=%d\n", (DP2>DP1)? 1:0);
        if (DP2>DP1) {vd = 1;}
        else if (DP1>DP2){vd = 2;}
        printf("\n Resultado: População e Densidade populacional\n");
        if (vp == 1 && vd == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vp==2 && vd==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
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
        if (A1>A2) {va = 1;}
        else if (A2>A1){va = 2;}

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
        if (P1>P2) {vp = 1;}
        else if (P2>P1){vp = 2;}
        printf("\n Resultado: Área e População\n");
        if (vp == 1 && va == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vp==2 && va==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 2:
        printf("Atributo selecionado: PIB\n");
        printf("PIB --- Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("PIB= %d\n", (PIB1>PIB2)? 1:0);
        if (PIB1>PIB2) {vi = 1;}
        else if (PIB2>PIB1){vi = 2;}
        printf("\n Resultado: Área e PIB\n");
        if (va == 1 && vi == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (va==2 && vi==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 3:
        printf("Atributo selecionado:Pontos Turísticos\n");
        printf("Pontos Turísticos --- Carta 1:%d.  Carta 2:%d\n",T1, T2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Pontos Turísticos= %d\n", (T1>T2)? 1:0);
        if (T1>T2) {vt = 1;}
        else if (T2>T1){vt = 2;}
        printf("\n Resultado: Área e Pontos Turísticos\n");
        if (va == 1 && vt == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (va==2 && vt==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 4:
        printf("Atributo selecionado:Densidade Populacional\n");
        printf("Densidade Populacional --- Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Densidade Populacional=%d\n", (DP2>DP1)? 1:0);
        if (DP2>DP1) {vd = 1;}
        else if (DP1>DP2){vd = 2;}
        printf("\n Resultado: Área e Densidade populacional\n");
        if (va == 1 && vd == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (va==2 && vd==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
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
        if (PIB1>PIB2) {vi = 1;}
        else if (PIB2>PIB1){vi = 2;}
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
        if (P1>P2) {vp = 1;}
        else if (P2>P1){vp = 2;}
        printf("\n Resultado: PIB e População\n");
        if (vp == 1 && vi == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vp==2 && vi==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 2:
        printf("Atributo selecionado:Área.\n");
        printf("Área --- Carta 1:%.2f.  Carta 2:%.2f\n", A1, A2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Área= %d\n", (A1>A2)? 1:0);
        if (A1>A2) {va = 1;}
        else if (A2>A1){va = 2;}
        printf("\n Resultado: PIB e Área\n");
        if (vi == 1 && va == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vi==2 && va==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 3:
        printf("Atributo selecionado:Pontos Turísticos\n");
        printf("Pontos Turísticos --- Carta 1:%d.  Carta 2:%d\n",T1, T2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Pontos Turísticos= %d\n", (T1>T2)? 1:0);
        if (T1>T2) {vt = 1;}
        else if (T2>T1){vt = 2;}
        printf("\n Resultado: PIB e Pontos Turísticos\n");
            if (vi == 1 && vt == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vi==2 && vt==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 4:
        printf("Atributo selecionado:Densidade Populacional\n");
        printf("Densidade Populacional --- Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Densidade Populacional=%d\n", (DP2>DP1)? 1:0);
        if (DP2>DP1) {vd = 1;}
        else if (DP1>DP2){vd = 2;}
        printf("\n Resultado: PIB e Densidade populacional\n");
            if (vi == 1 && vd == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vi==2 && vd==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
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
        if (T1>T2) {vt = 1;}
        else if (T2>T1){vt = 2;}
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
        if (P1>P2) {vp = 1;}
        else if (P2>P1){vp = 2;}
        printf("\n Resultado: Pontos Turísticos e População\n");
        if (vp == 1 && vt == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vp==2 && vt==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 2:
        printf("Atributo selecionado:Área.\n");
        printf("Área --- Carta 1:%.2f.  Carta 2:%.2f\n", A1, A2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Área= %d\n", (A1>A2)? 1:0);
        if (A1>A2) {va = 1;}
        else if (A2>A1){va = 2;}
        printf("\n Resultado: Pontos Turísticos e Área\n");
        if (va == 1 && vt == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (va==2 && vt==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 3:
        printf("Atributo selecionado: PIB\n");
        printf("PIB --- Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("PIB= %d\n", (PIB1>PIB2)? 1:0);
        if (PIB1>PIB2) {vi = 1;}
        else if (PIB2>PIB1){vi = 2;}
            printf("\n Resultado: Pontos Turísticos e PIB\n");
            if (vi == 1 && vt == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vi==2 && vt==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
            break;
        case 4:
        printf("Atributo selecionado:Densidade Populacional\n");
        printf("Densidade Populacional --- Carta 1:%.2f.  Carta 2:%.2f\n", DP1, DP2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Densidade Populacional=%d\n", (DP2>DP1)? 1:0);
        if (DP2>DP1) {vd = 1;}
        else if (DP1>DP2){vd = 2;}
        printf("\n Resultado: Pontos Turísticos e Densidade populacional\n");
            if (vt == 1 && vd == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vt==2 && vd==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
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
        if (DP2>DP1) {vd = 1;}
        else if (DP1>DP2){vd = 2;}
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1.População.\n");
        printf("2.Área.\n");
        printf("3.PIB.\n");
        printf("4.Pontos turísticos.\n");
        printf("Escolha o segundo atributo a ser comparado:\n");
        scanf("%d", &OP1);
        switch (OP1)
        {
        case 1:
         printf("Atributo selecionado:População.\n");
        printf("População --- Carta 1:%lu.  Carta 2:%lu\n", P1, P2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0");
        printf("População= %d", (P1>P2)? 1:0);
        if (P1>P2) {vp = 1;}
        else if (P2>P1){vp = 2;}
        printf("\n Resultado: Densidade populacional e População\n");
        if (vp == 1 && vd == 1){
            printf("Vitória: CARTA 1!\n");} 
        else if (vp==2 && vd==2){
            printf("Vitória: CARTA 2!\n");} 
        else { printf("EMPATE!\n");}
            break;
        case 2:
        printf("Atributo selecionado:Área.\n");
        printf("Área --- Carta 1:%.2f.  Carta 2:%.2f\n", A1, A2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Área= %d\n", (A1>A2)? 1:0);
        if (A1>A2) {va = 1;}
        else if (A2>A1){va = 2;}
        printf("\n Resultado: Densidade populacional e Área\n");
        if (va == 1 && vd == 1){
            printf("Vitória: CARTA 1!\n");} 
        else if (va==2 && vd==2){
            printf("Vitória: CARTA 2!\n");} 
        else { printf("EMPATE!\n");}
            break;
        case 3:
        printf("Atributo selecionado: PIB\n");
        printf("PIB --- Carta 1:%.2f.  Carta 2:%.2f\n", PIB1, PIB2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("PIB= %d\n", (PIB1>PIB2)? 1:0);
        if (PIB1>PIB2) {vi = 1;}
        else if (PIB2>PIB1){vi = 2;}
            printf("\n Resultado: Densidade populacional e PIB\n");
        if (vi == 1 && vd == 1){
            printf("Vitória: CARTA 1!\n");} 
        else if (vi==2 && vd==2){
            printf("Vitória: CARTA 2!\n");} 
        else { printf("EMPATE!\n");}
            break;
        case 4:
        printf("Atributo selecionado:Pontos Turísticos\n");
        printf("Pontos Turísticos --- Carta 1:%d.  Carta 2:%d\n",T1, T2);
        printf("Carta 1 vence = 1------- Carta 2 vence = 0\n");
        printf("Pontos Turísticos= %d\n", (T1>T2)? 1:0);
        if (T1>T2) {vt = 1;}
        else if (T2>T1){vt = 2;}
        printf("\n Resultado: Densidade populacional e Pontos Turísticos\n");
            if (vt == 1 && vd == 1){
            printf("Vitória: CARTA 1!\n");} 
            else if (vt==2 && vd==2){
            printf("Vitória: CARTA 2!\n");} 
            else { printf("EMPATE!\n");}
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