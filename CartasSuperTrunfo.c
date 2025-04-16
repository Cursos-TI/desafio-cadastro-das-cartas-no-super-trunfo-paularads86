#include <stdio.h>

int main() {
    
    //variáveis das cartas
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; //alterado para unsigned long int
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float PIB1, PIB2;
    double densidadePopulacional1, densidadePopulacional2;
    double PIBperCapta1, PIBperCapta2;
    float superPoder1, superPoder2; //nova variável super poder
    
   
   //entrada de dados
    printf("---Carta1---\n");
    
    printf("Digite o seu estado com uma letra de A a H:");
    scanf("%s", estado1);  

    printf("Digite o código da carta onde o código é a letra do estado seguida de um número de 01 a 04:");
    scanf("%s", codigo1);

    printf("Digite a sua cidade:");
    scanf("%s", cidade1);

    printf("Digite a população:");
    scanf("%lu", &populacao1);

    printf("Digite os pontos turísticos:");
    scanf("%d", &pontosTuristicos1);

    printf("Digite sua área (km²):");
    scanf("%f", &area1);

    printf("Digite seu PIB (em bilhões de reais):");
    scanf("%f", &PIB1);

    //calculo da densidade populacional
    densidadePopulacional1 = (double) populacao1/area1;
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional1);

    //cálculo do PIB percapta
    PIBperCapta1 = (double) (PIB1 * 1e9)/populacao1; //convertendo de bilhões de reais para reais
    printf("PIB per capta: %.2lf reais\n", PIBperCapta1);

    //somando o super poder

    superPoder1 = (float) populacao1 + area1 + PIB1 + (float) pontosTuristicos1 + PIBperCapta1 + (1.0 / densidadePopulacional1);

    //Entrada de dados da Carta 2

    printf("---Carta2---\n");
    
    printf("Digite o seu estado com uma letra de A a H:");
    scanf("%s", estado2);

    printf("Digite o código da carta onde o código é a letra do estado seguida de um número de 01 a 04:");
    scanf("%s", codigo2);

    printf("Digite a sua cidade:");
    scanf("%s", cidade2);

    printf("Digite a população:");
    scanf("%lu", &populacao2);

    printf("Digite os pontos turísticos:");
    scanf("%d", &pontosTuristicos2);

    printf("Digite sua área (km²):");
    scanf("%f", &area2);

    printf("Digite seu PIB (em bilhões de reais):");
    scanf("%f", &PIB2);
    
    //calculo da densidade populacional
    densidadePopulacional2 = (double) populacao2/area2;
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional2);

    //cálculo do PIB percapta
    PIBperCapta2 = (double) (PIB2 * 1e9)/populacao2; //convertendo de bilhoes de reais para reais
    printf("PIB per capta: %.2lf reais\n", PIBperCapta2);

    superPoder2 = (float) populacao2 + area2 + PIB2 + (float) pontosTuristicos2 + PIBperCapta2 + (1.0 / densidadePopulacional2);

    //exibição das cartas
    printf("\n--- Dados das Cartas ---\n");

    //Carta1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2lf reais\n", PIBperCapta1); 
    
    //Carta2
     printf("\nCarta 2\n");
     printf("Estado: %s\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %lu\n", populacao2);
     printf("Pontos Turísticos: %d\n", pontosTuristicos2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", PIB2);
     printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional2);
     printf("PIB per capita: %.2lf reais\n", PIBperCapta2);

     //comparação entre as cartas

    printf("---Comparação de Cartas:---\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 < densidadePopulacional2));
    printf("PIB per Capta: Carta %d venceu (%d)\n", (PIBperCapta1 > PIBperCapta2) ? 1 : 2, (PIBperCapta1 > PIBperCapta2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1>superPoder2) ? 1 : 2, (superPoder1>superPoder2));   
    

    return 0;
}
