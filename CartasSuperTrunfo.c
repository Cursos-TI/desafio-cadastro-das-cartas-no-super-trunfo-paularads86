#include <stdio.h>

int main() {
    
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float PIB1, PIB2;
    double densidadePopulacional;
    double PIBperCapta;

    printf("Carta1\n");
    
    printf("Digite o seu estado:");
    scanf("%s", estado1);

    printf("Digite o código da carta:");
    scanf("%s", &codigo1);

    printf("Digite a sua cidade:");
    scanf("%s", cidade1);

    printf("Digite a população:");
    scanf("%d", &populacao1);

    printf("Digite os pontos turísticos:");
    scanf("%d", &pontosTuristicos1);

    printf("Digite sua área:");
    scanf("%f", &area1);

    printf("Digite seu PIB:");
    scanf("%f", &PIB1);

    //calculo da densidade populacional
    densidadePopulacional = (double) populacao1/area1;
    printf("Densidade Populacional: %lf\n", densidadePopulacional);

    //cálculo do PIB percapta
    PIBperCapta = (double) PIB1/populacao1;
    printf("PIB per capta: %lf\n", PIBperCapta);



    printf("Carta2\n");
    
    printf("Digite o seu estado:");
    scanf("%s", estado2);

    printf("Digite o código da carta:");
    scanf("%s", &codigo2);

    printf("Digite a sua cidade:");
    scanf("%s", cidade2);

    printf("Digite a população:");
    scanf("%d", &populacao2);

    printf("Digite os pontos turísticos:");
    scanf("%d", &pontosTuristicos2);

    printf("Digite sua área:");
    scanf("%f", &area2);

    printf("Digite seu PIB:");
    scanf("%f", &PIB2);
    
    //calculo da densidade populacional
    densidadePopulacional = (double) populacao2/area2;
    printf("Densidade Populacional: %lf\n", densidadePopulacional);

    //cálculo do PIB percapta
    PIBperCapta = (double) PIB2/populacao2;
    printf("PIB per capta: %lf\n", PIBperCapta);
    

    return 0;
}
