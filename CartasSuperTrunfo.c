#include <stdio.h>

int main() {
    
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float PIB1, PIB2;
    double densidadePopulacional1, densidadePopulacional2;
    double PIBperCapta1, PIBperCapta2;
    float superPoder1, superPoder2;

    printf("Carta1\n");
    
    printf("Digite o seu estado com uma letra de A a H:");
    scanf("%s", estado1);

    printf("Digite o código da carta onde o código é a letra do estado seguida de um número de 01 a 04:");
    scanf("%s", &codigo1);

    printf("Digite a sua cidade:");
    scanf("%s", cidade1);

    printf("Digite a população:");
    scanf("%u", &populacao1);

    printf("Digite os pontos turísticos:");
    scanf("%d", &pontosTuristicos1);

    printf("Digite sua área (km2):");
    scanf("%f", &area1);

    printf("Digite seu PIB (em bilhões de reais):");
    scanf("%f", &PIB1);

    //calculo da densidade populacional
    densidadePopulacional1 = (double) populacao1/area1;
    printf("Densidade Populacional: %lf\n", densidadePopulacional1);

    //cálculo do PIB percapta
    PIBperCapta1 = (double) PIB1/populacao1;
    printf("PIB per capta: %lf\n", PIBperCapta1);

    //somando o super poder

    superPoder1 = (float) populacao1 + area1 + PIB1 + (float) pontosTuristicos1 + PIBperCapta1 + densidadePopulacional1;



    printf("Carta2\n");
    
    printf("Digite o seu estado com uma letra de A a H:");
    scanf("%s", estado2);

    printf("Digite o código da carta onde o código é a letra do estado seguida de um número de 01 a 04:");
    scanf("%s", &codigo2);

    printf("Digite a sua cidade:");
    scanf("%s", cidade2);

    printf("Digite a população:");
    scanf("%u", &populacao2);

    printf("Digite os pontos turísticos:");
    scanf("%d", &pontosTuristicos2);

    printf("Digite sua área (km2):");
    scanf("%f", &area2);

    printf("Digite seu PIB (em bilhões de reais):");
    scanf("%f", &PIB2);
    
    //calculo da densidade populacional
    densidadePopulacional2 = (double) populacao2/area2;
    printf("Densidade Populacional: %lf\n", densidadePopulacional2);

    //cálculo do PIB percapta
    PIBperCapta2 = (double) PIB2/populacao2;
    printf("PIB per capta: %lf\n", PIBperCapta2);

    superPoder2 = (float) populacao2 + area2 + PIB2 + (float) pontosTuristicos2 + PIBperCapta2 + densidadePopulacional2;

    printf("Comparação de Cartas:\n");
    printf("População: %u", populacao1 > populacao2);
    printf("Área: %f", area1 > area2);
    printf("PIB: %f", PIB1 > PIB2);
    printf("Pontos Turísticos: %d", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %lf", densidadePopulacional1 > densidadePopulacional2);
    printf("PIB per Capta: %lf", PIBperCapta1 > PIBperCapta2);
    printf("Super Poder %f", superPoder1>superPoder2);



    
    

    return 0;
}
