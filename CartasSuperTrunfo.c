#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
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
