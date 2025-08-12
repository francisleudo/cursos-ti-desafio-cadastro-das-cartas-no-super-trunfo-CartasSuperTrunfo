#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Esse código cadastra 2 Cartas supertrunfo com as váriaveis população, área, pib e numero de ponto turistico

int main() {
 
    //Variáveis Carta 1
    int populacao1;
    float area1;
    float PIB1;
    int numero_de_ponto_turisticos1;

    //Variáveis Carta 2
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_ponto_turisticos2;

    //Exibe a mensagem de cadastro da primeira carta Captura e armazena os dados da Carta 1
    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite o numero de ponto turístico: \n");
    scanf("%d", &numero_de_ponto_turisticos1);

    //Exibe a mensagem de cadastro da primeira carta Captura e armazena os dados da Carta 2
    printf("Vamos cadastrar a segunda carta!\n");
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite o numero de ponto turístico: \n");
    scanf("%d", &numero_de_ponto_turisticos2);

    //Exibe as informações da Carta 1
    printf("Carta 1\n");
    printf("População: %d\n", populacao1);
    printf("População: %f\n", area1);
    printf("População: %f\n", PIB1);
    printf("População: %d\n", numero_de_ponto_turisticos1);

    //Exibe as informações da Carta 2
    printf("Carta 2\n");
    printf("População: %d\n", populacao2);
    printf("População: %f\n", area2);
    printf("População: %f\n", PIB2);
    printf("População: %d\n", numero_de_ponto_turisticos2);

    return 0;
}
