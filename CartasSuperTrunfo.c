#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeDacidade1[50], nomeDacidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int NumeroDepontosTuristicos1, NumeroDepontosTuristicos2;

    printf("Carta 1 \n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite nome da Cidade: \n");
    scanf("%s", nomeDacidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &NumeroDepontosTuristicos1);

    // Adicionada entrada para carta 2

    printf("Carta 2 \n");

    printf("Digite ama letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", &codigo2);

    printf("Digite nome da Cidade: \n");
    scanf("%s", nomeDacidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &NumeroDepontosTuristicos2);

    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDacidade1);
    printf("População: %d habitantes km²\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", NumeroDepontosTuristicos1);

    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDacidade2);
    printf("População: %d habitantes km²\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", NumeroDepontosTuristicos2);

    return 0;



}
